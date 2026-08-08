/*
 * Ghidra decompilation
 *
 * Function : create_menu
 * Address  : 0809e7e0
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

menu_struct *
create_menu(u32 num_options,menu_struct *parent_menu,draw_menu_function_type draw_function,
           focus_menu_function_type focus_function)

{
  menu_struct *pmVar1;
  menu_struct *menu;
  void *pvVar2;
  
  pmVar1 = (menu_struct *)malloc(0x20);
  *(draw_menu_function_type *)pmVar1 = draw_function;
  *(focus_menu_function_type *)&pmVar1->field_0x4 = focus_function;
  *(u32 *)&pmVar1->field_0xc = num_options;
  *(undefined4 *)&pmVar1->field_0x10 = 0;
  *(menu_struct **)&pmVar1->field_0x1c = parent_menu;
  pvVar2 = malloc(num_options << 2);
  *(void **)&pmVar1->field_0x18 = pvVar2;
  return pmVar1;
}


