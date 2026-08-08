/*
 * Ghidra decompilation
 *
 * Function : main
 * Address  : 0010e3d0
 * Program  : drastic64
 */


undefined8 main(int param_1,long param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  __printf_chk(1,"Starting DraStic (version %s)\n\n","r2.5.2.2");
  nds_system._57482784_8_ = 0xffffffffffffffff;
  initialize_system(nds_system);
  process_arguments(nds_system,param_1,param_2);
  initialize_screen(nds_system[62040489]);
  if (param_1 < 2) {
    menu(nds_system,1);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + (long)param_1 * 8 + -8);
    __printf_chk(1,"Loading gamecard file %s.\n",uVar2);
    iVar1 = load_nds(0x4fc320,uVar2);
    if (iVar1 != 0) {
      puts("Gamecard load failed.");
      return 0xffffffff;
    }
    set_screen_menu_off();
    reset_system(nds_system);
  }
  _setjmp((__jmp_buf_tag *)(nds_system + 0x3b2a840));
  if (nds_system[62040488] == '\0') {
    cpu_next_action_arm7_to_event_update(nds_system);
  }
  else {
    __printf_chk(1,"Calling recompiler event update handler (@ %p).\n",nds_system._22847464_8_);
    __printf_chk(1,"Memory map offset %p, translate cache pointer %p\n",nds_system._57482784_8_,
                 0x588000);
    recompiler_entry(nds_system,nds_system._57482784_8_);
  }
  return 0;
}


