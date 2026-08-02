#include <stdint.h>
#include <stdbool.h>

// SDL2 / Native SoftFB 描画フレームバッファ構造体
typedef struct {
    uint32_t width;
    uint32_t height;
    uint32_t* pixels;
} NativeFramebuffer;

// 矩形塗りつぶし描画バインディング
void native_draw_rect(NativeFramebuffer* fb, int32_t x, int32_t y, uint32_t w, uint32_t h, uint32_t rgb) {
    if (!fb || !fb->pixels) return;
    for (uint32_t dy = 0; dy < h; dy++) {
        int32_t py = y + (int32_t)dy;
        if (py < 0 || py >= (int32_t)fb->height) continue;
        for (uint32_t dx = 0; dx < w; dx++) {
            int32_t px = x + (int32_t)dx;
            if (px < 0 || px >= (int32_t)fb->width) continue;
            fb->pixels[py * fb->width + px] = rgb;
        }
    }
}
