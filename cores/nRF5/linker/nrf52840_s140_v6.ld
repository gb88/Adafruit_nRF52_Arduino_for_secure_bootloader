/* Linker script to configure memory regions. */

SEARCH_DIR(.)
GROUP(-lgcc -lc -lnosys)

MEMORY
{
  FLASH (rx)     : ORIGIN = 0x26000, LENGTH = 0xD9000 - 0x26000

  /* SRAM required by Softdevice depend on
   * - Attribute Table Size (Number of Services and Characteristics)
   * - Vendor UUID count
   * - Max ATT MTU
   * - Concurrent connection peripheral + central + secure links
   * - Event Len, HVN queue, Write CMD queue
   */ 
	RAM (rwx) :  ORIGIN = 0x20006000, LENGTH = 0x3A000
	uicr_bootloader_start_address (r) : ORIGIN = 0x00000FF8, LENGTH = 0x4	
	DBL_RESET (rwx) :  ORIGIN = 0x20006000, LENGTH = 0x04
}

SECTIONS
{
  . = ALIGN(4);
  .svc_data :
  {
    PROVIDE(__start_svc_data = .);
    KEEP(*(.svc_data))
    PROVIDE(__stop_svc_data = .);
  } > RAM
  .dbl_reset(NOLOAD) :
  {

  } > DBL_RESET
  .fs_data :
  {
    PROVIDE(__start_fs_data = .);
    KEEP(*(.fs_data))
    PROVIDE(__stop_fs_data = .);
  } > RAM
} INSERT AFTER .data;

INCLUDE "nrf52_common.ld"
