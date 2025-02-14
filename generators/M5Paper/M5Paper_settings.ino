/*
    ############################################################################################
    #                                                                                          #
    #                                   M5PAPER SETTINGS +                                     #
    #                                                                                          #
    ############################################################################################
*/

// ! ! ! ! ! ! ! ! ! ! ! ! ! ! ! ! ! ! ! ! ! ! !
//      FOR ESP8266 USE NONOSSDK 2.2.2 +
// ! ! ! ! ! ! ! ! ! ! ! ! ! ! ! ! ! ! ! ! ! ! !

#define SCREEN_WIDTH            540     // Screen resolution width
#define SCREEN_HEIGHT           960     // Screen resolution height

#define FONT_CHAR_WIDTH         6     // Font letter size width
#define FONT_CHAR_HEIGHT        8     // Font letter size height

#define PLATFORM_ESP32

//#define NARROW_SCREEN
//#define BLUETOOTH_ENABLED
//#define WIFI_ENABLED

#define ON_TIME_CHANGE_EVERY_MS 1000

#define HARDWARE_BUTTONS_ENABLED              // Conf of controls with hardware btns    
#define DRIVER_CONTROLS_TOTALBUTTONS 3
#define DRIVER_CONTROLS_DELAY_BEFORE_LONG_PRESS 600

//#define COLOR_SCREEN                     // Screen is colored
#define COLOR_GRAY_16
#define E_PAPER_DISPLAY
#define PARTIAL_DISPLAY_DRAWING   // For e-papers

/*
#define FRAMEBUFFER_ENABLE
#define FRAMEBUFFER_TWIN_FULL
#define FRAMEBUFFER_BYTE_PER_PIXEL 2
#define FRAMEBUFFER_PSRAM
*/
//#define toDefaultApp_onLeftLongPress

#define STARTING_APP_NUMM   -1    // for Mainmenu (default app)
//#define STARTING_APP_NUMM    1 // Settings
//#define STARTING_APP_NUMM    2 // Pedometer
//#define STARTING_APP_NUMM    6  // TouchScreenTest

//#define STARTING_APP_NUMM   7

#define FONT_SIZE_DEFAULT   2

#define BATTERY_ENABLE
#define CLOCK_ENABLE
//#define USE_PRIMITIVE_HARDWARE_DRAW_ACCELERATION

#define RTC_ENABLE

//#define SCREEN_ROTATION_0
//#define SCREEN_ROTATION_90
//#define SCREEN_ROTATION_180
//#define SCREEN_ROTATION_270

#define STYLE_STATUSBAR_HEIGHT  40

//#define SMOOTH_ANIMATION
//#define NARROW_SCREEN

#define TOUCH_SCREEN_ENABLE
#define MULTITOUCH_SCREEN_ENABLE
#define MULTITOUCH_SCREEN_FINGERS 2

//#define FRAMEBUFFER_ENABLE
//#define FRAMEBUFFER_TWIN_FULL
//#define FRAMEBUFFER_BYTE_PER_PIXEL 2
//#define FRAMEBUFFER_PSRAM

//#define SCREEN_INVERT_COLORS
//#define SCREEN_CHANGE_BLUE_RED
#define APP_MENU_TOUCH_DO_NOT_SCROLL_BY_DRAGGING
#define USE_XL_MENU_IMAGES
#define DRIVER_RTC_INTERRUPT_PIN    34

#define IN_APP_SLEEP_TYPE       SLEEP_LIGHT
#define WAKEUP_FOR_BACKGROUND_WORK_IDLE 60000
//#define STAND_BY_SLEEP_TYPE     SLEEP_LIGHT_SCREEN_OFF
#define STAND_BY_SLEEP_TYPE     SLEEP_DEEP

//#undef SMOOTH_BACKLIGHT_CONTROL_DELAY_CHANGE
//#undef DISPLAY_BACKLIGHT_CONTROL_ENABLE

#define SMOOTH_ANIMATION_COEFFICIENT    4

//#define ACCELEROMETER_ENABLE
//#define MAGNITOMETER_ENABLE
#undef PEDOMETER_ENABLE
//#define DEBUG_PEDOMETER
#undef DISPLAY_BACKLIGHT_FADE_CONTROL_ENABLE



#define DEFAULT_TIME_TO_POWEROFF_DISPLAY        300
#define DEFAULT_DELAY_TO_FADE_DISPLAY           10

#define POWERSAVE_ENABLE
#define CPU_CONTROLL_ENABLE
#define CPU_SLEEP_ENABLE
#define BATTERY_ENABLE

#define CORE_SETUP_INIT
/*
#define PEDOMETER_STEP_DETECTION_DELAY          20000 // Wake up to check accelerometer
//#define PEDOMETER_STEP_DETECTION_DELAY          1000 // Wake up to check accelerometer
#define PEDOMETER_STEP_DETECTION_PERIOD_MS              1000
#define PEDOMETER_MESURES_IN_STEP_DETECTION_PERIOD      5

#define PEDOMETER_DELTA_VALUE_MIN           1.3f
#define PEDOMETER_CENTRALWIGHT_VALUE_MIN    0.2f

//#define DEBUG_PEDOMETER
// #define DEBUG_WAKEUP
*/

#define LIGHT_COLOR_THEME
#define DEBUG_SERIAL
//#define DEBUG_ON_SCREEN 


#define DEBUG_SERIAL_PORT Serial
#define DO_NOT_INIT_SERIAL

//#define DEBUG_CPU_CONTROLL_ENABLE
//#define DEBUG_CORE_POWERSAVE
/*
    ############################################################################################
    #                                                                                          #
    #                                   M5PAPER SETTINGS -                                     #
    #                                                                                          #
    ############################################################################################
*/