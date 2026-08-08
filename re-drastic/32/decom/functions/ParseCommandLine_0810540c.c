/*
 * Ghidra decompilation
 *
 * Function : ParseCommandLine
 * Address  : 0810540c
 * Program  : drastic
 */


/* DWARF original prototype: void ParseCommandLine(CommandData * this, bool Preprocess, int argc,
   char * * argv) */

void __thiscall
CommandData::ParseCommandLine(CommandData *this,bool Preprocess,int argc,char **argv)

{
  bool bVar1;
  size_t sVar2;
  wchar_t *NewBuffer;
  wchar CmdChar;
  uint uVar3;
  wchar *Dest;
  char **ppcVar4;
  int iVar5;
  size_t Suggested;
  size_t NewSize;
  char *__s;
  
  if (argc < 2) {
    if (Preprocess) {
      return;
    }
    Dest = (wchar *)0x0;
  }
  else {
    ppcVar4 = argv + 1;
    NewSize = 0;
    iVar5 = 1;
    Dest = (wchar *)0x0;
    do {
      while( true ) {
        __s = *ppcVar4;
        sVar2 = strlen(__s);
        uVar3 = sVar2 + 1;
        if (NewSize < uVar3) {
          NewSize = NewSize + 0x20 + (NewSize >> 2);
          if (NewSize <= uVar3) {
            NewSize = uVar3;
          }
          Dest = (wchar *)realloc(Dest,NewSize << 2);
          if (Dest == (wchar *)0x0) {
            ErrorHandler::MemoryError(&ErrHandler);
            __s = *ppcVar4;
          }
        }
        CharToWide(__s,Dest,uVar3);
        if (!Preprocess) break;
        if ((*Dest == 0x2d) && (bVar1 = PreprocessSwitch(this,Dest), !bVar1)) goto LAB_08105510;
LAB_08105484:
        iVar5 = iVar5 + 1;
        ppcVar4 = ppcVar4 + 1;
        if (argc == iVar5) goto LAB_08105500;
      }
      if ((*Dest == 0x2d) && (this->NoMoreSwitches == false)) {
        if (Dest[1] == 0x2d) {
          this->NoMoreSwitches = true;
        }
        else {
          ProcessSwitch(this,Dest + 1);
        }
        goto LAB_08105484;
      }
      ParseArg(this,Dest);
      iVar5 = iVar5 + 1;
      ppcVar4 = ppcVar4 + 1;
    } while (argc != iVar5);
LAB_08105500:
    if (Preprocess) goto joined_r0x081055e4;
  }
  if (((this->FileArgs).StringsCount == 0) && ((this->super_RAROptions).field_0x125bc == '\0')) {
    StringList::AddString(&this->FileArgs,(wchar *)&DAT_08144c5c);
  }
  uVar3 = toupperw(this->Command[0]);
  if ((uVar3 == 0x45 || (uVar3 & 0xfffffff7) == 0x50) && ((this->super_RAROptions).Test != false)) {
    (this->super_RAROptions).Test = false;
  }
  if ((uVar3 == 0x56 || uVar3 == 0x4c) && (this->Command[1] == 0x42)) {
    this->BareOutput = true;
  }
joined_r0x081055e4:
  if (Dest == (wchar *)0x0) {
    return;
  }
LAB_08105510:
  free(Dest);
  return;
}


