#ifndef PLAY_GAME_SERVICES_H
#define PLAY_GAME_SERVICES_H

#ifdef ANDROID
#include <string>
#include <iostream>
#include <cstdlib>
#include <SDL_android.h>
#include <android/log.h>
#include <SDL_screenkeyboard.h>
#include "defines.h"
#include "file/file_io.h"

//### NDK ###//
/*
#include <gpg/android_initialization.h>
#include <gpg/android_platform_configuration.h>
#include <gpg/android_support.h>
*/
#define MARGIN_DIVISOR 3
#endif

class android_game_services
{
public:
    android_game_services();
#ifdef ANDROID
    // stores original size before setting a different size
    void init_android_button_size();
    void set_android_default_buttons_size(int size);
    void set_touch_controls_visible(bool show);
    void crash_handler(std::string log);

private:
    void check_button_size(SDL_Rect &dest_size, SDL_Rect &default_size);


private:
     SDL_Rect original_dpad_pos;
     SDL_Rect original_pos_a;

#endif
};

#endif // PLAY_GAME_SERVICES_H
