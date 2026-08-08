/*
 * Ghidra decompilation
 *
 * Function : ModelPPM
 * Address  : 080edd58
 * Program  : drastic
 */


/* DWARF original prototype: ModelPPM * ModelPPM(ModelPPM * this) */

ModelPPM * __thiscall ModelPPM::ModelPPM(ModelPPM *this)

{
  (this->SubAlloc).SubAllocatorSize = 0;
  this->MinContext = (PPM_CONTEXT *)0x0;
  this->MedContext = (PPM_CONTEXT *)0x0;
  this->MaxContext = (PPM_CONTEXT *)0x0;
  return this;
}


