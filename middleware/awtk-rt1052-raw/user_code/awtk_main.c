#define APP_IMG_HEIGHT 272
#define APP_IMG_WIDTH 480

volatile uint32_t g_systick_count = 0;

void SysTick_Handler (void) {
  g_systick_count++;
}

extern int gui_app_start(int lcd_w, int lcd_h);

int awtk_main(void) {
  return gui_app_start(APP_IMG_WIDTH, APP_IMG_HEIGHT);
}
