/*
    ############################################################################################
    #                                                                                          #
    #                                    DEFAULT SETTINGS +                                    #
    #                                                                                          #
    ############################################################################################
*/

// TOUCH
#define TOUCH_SCREEN_DELTA_MOVE_FOR_DRAG 7
#define TOUCH_SCREEN_DELTA_MOVE_FOR_SWIPE 10
#define TOUCH_SCREEN_TIME_MS_FOR_LONG_TOUCH 300


// BUTTONS
#define BUTTON_UP       0x01
#define BUTTON_SELECT   0x02
#define BUTTON_DOWN     0x03
#define BUTTON_BACK     0x04
#define BUTTON_POWER    0x05

#define DRIVER_CONTROLS_TOTALBUTTONS 0
#define DRIVER_CONTROLS_DELAY_BEFORE_LONG_PRESS     50
#define DRIVER_CONTROLS_DELAY_BEFORE_MULTY_PRESS    400

/*
############################################################################
#                                SYNC STATUS                               #
############################################################################
*/

#define SYNC_STATUS_NOT_STARTED                     0x01
#define SYNC_STATUS_CONNECTING                      0x02
#define SYNC_STATUS_IN_PROGRESS                     0x03
#define SYNC_STATUS_FINISHED                        0x04
#define SYNC_STATUS_ERROR_SERVER_NOT_FOUND          0x05
#define SYNC_STATUS_ERROR_DIFFERENT_API_VERSIONS    0x06
#define SYNC_STATUS_ERROR_EXCHANGE_FAILED           0x07
#define SYNC_STATUS_ERROR_UNKNOWN                   0x08

/*
############################################################################
#                               SYNC VARIANTS                              #
############################################################################
*/

#define SYNC_VARIANTS_GET_API_VERSION                           0b0000000000000001
#define SYNC_VARIANTS_GET_SETTINGS                              0b0000000000000010
#define SYNC_VARIANTS_GET_CURRENT_TIME                          0b0000000000000100
#define SYNC_VARIANTS_GET_PEDOMETER_DAY_STEPS_SLEEP_LIMITS      0b0000000000001000
#define SYNC_VARIANTS_SET_PEDOMETER_CURRENT_DAY_STEPS_SLEEP     0b0000000000010000
#define SYNC_VARIANTS_SET_PEDOMETER_DAY_DATA_PER_HOUR           0b0000000000100000
#define SYNC_VARIANTS_SET_PEDOMETER_WEEK_DATA_PER_DAY           0b0000000001000000
#define SYNC_VARIANTS_GET_NOTIFICATIONS                         0b0000000010000000
#define SYNC_VARIANTS_GET_CURRENT_CALL                          0b0000000100000000
#define SYNC_VARIANTS_GET_MISSED_CALLS                          0b0000001000000000
#define SYNC_VARIANTS_GET_DATA_HASH                             0b0000010000000000

#define SYNC_WITHOUT_CHARGE
/*
############################################################################
#                                 EVENTS +                                 #
############################################################################
*/

#define EVENT_BUTTON_PRESSED                0x00
#define EVENT_BUTTON_RELEASED               0x01
#define EVENT_BUTTON_LONG_PRESS             0x02
#define EVENT_BUTTON_SHORT_PRESS            0x03
#define EVENT_BUTTON_SHORT_SINGLE_PRESS     0x04
#define EVENT_BUTTON_DOUBLE_PRESS           0x05
#define EVENT_ON_GOING_TO_SLEEP             0x07
#define EVENT_ON_WAKE_UP                    0x08

#define EVENT_ON_TOUCH_START                0x09
#define EVENT_ON_TOUCH_RELEASED             0x0A
#define EVENT_ON_TOUCH_CLICK                0x0B
#define EVENT_ON_TOUCH_LONG_PRESS           0x0C
#define EVENT_ON_TOUCH_DRAG                 0x0D
#define EVENT_ON_TOUCH_DOUBLE_PRESS         0x0E

#define EVENT_ON_TIME_CHANGED               0x06
#define EVENT_ON_MINUTE_CHANGED             0x13
#define EVENT_ON_HOUR_CHANGED               0x14
#define EVENT_ON_DATE_CHANGED               0x15

#define EVENT_ON_BATTERY_VALUE_CHANGE       0x1A
#define EVENT_ON_BATTERY_CHARGING_CHANGE    0x1B

#define EVENT_ON_TOUCH_QUICK_SWIPE_TO_LEFT      0x16
#define EVENT_ON_TOUCH_QUICK_SWIPE_TO_RIGHT     0x17
#define EVENT_ON_TOUCH_QUICK_SWIPE_TO_TOP       0x18
#define EVENT_ON_TOUCH_QUICK_SWIPE_TO_BOTTOM    0x19

// WAKEUP REASONS
#define WAKE_UP_REASON_EXTERNAL_RTC_IO      0x01
#define WAKE_UP_REASON_EXTERNAL_RTC_CNTL    0x02
#define WAKE_UP_REASON_TIMER                0x03
#define WAKE_UP_REASON_TPOUCHPAD            0x04
#define WAKE_UP_REASON_ULP                  0x05
#define WAKE_UP_REASON_NOT_DEEP_SLEEP       0x06

// SOFTWARE_BUTTONS
#define SOFTWARE_BAR_BUTTON_UP              0x0001
#define SOFTWARE_BAR_BUTTON_SELECT          0x0002
#define SOFTWARE_BAR_BUTTON_DOWN            0x0003
#define SOFTWARE_BAR_BUTTON_BACK            0x0004

/*
 ############################################################################
                                 SLEEP TYPES -                               
*/

#define SLEEP_IDLE_CPU                      0x01
#define SLEEP_DEEP                          0x02
#define SLEEP_LIGHT                         0x03
#define SLEEP_MODEM                         0x04
#define SLEEP_DISPLAY                       0x05
#define SLEEP_HIBERNATE                     0x06
#define WAKE_MODEM                          0x07
#define WAKE_DISPLAY                        0x08
#define WAKE                                0x09
#define SLEEP_LIGHT_SCREEN_OFF              0x0A
#define SLEEP_LIGHT_ACCELEROMETER_SLEEP     0x0B


#define IN_APP_SLEEP_TYPE       SLEEP_LIGHT
#define STAND_BY_SLEEP_TYPE     SLEEP_DEEP
/*
############################################################################
#                                 EVENTS -                                 #
############################################################################
*/

/*
############################################################################
#                                 STYLES +                                 #
############################################################################
*/

#define SOFTWARE_BUTTONS_COLOR_RED          255
#define SOFTWARE_BUTTONS_COLOR_GREEN        255
#define SOFTWARE_BUTTONS_COLOR_BLUE         255

#define SOFTWARE_BUTTONS_COLOR_RED_BG       59
#define SOFTWARE_BUTTONS_COLOR_GREEN_BG     35
#define SOFTWARE_BUTTONS_COLOR_BLUE_BG      71

/*
############################################################################
#                                 STYLES -                                 #
############################################################################
*/

#define ON_TIME_CHANGE_EVERY_MS 1000

#define UPDATE_RTC_EVERY 65
#define I2C_ENABLE
#define CPU_CONTROLL_ENABLE
#define POWERSAVE_ENABLE

#define FONT_SIZE_DEFAULT 1
#define HARDWARE_BUTTONS_VALUE 3

#define CONTROLS_DELAY_TO_DOUBLE_CLICK_MS DRIVER_CONTROLS_DELAY_BEFORE_LONG_PRESS

#define SMOOTH_ANIMATION_COEFFICIENT    5
// #define SMOOTH_ANIMATION
// #define NARROW_SCREEN

#define UPDATE_BATTERY_EVERY_MS 3000
#define SMOOTH_BACKLIGHT_CONTROL_DELAY_CHANGE  4
#define BATTERY_ENABLE

// #define ACCELEROMETER_ENABLE
#define DISPLAY_BACKLIGHT_CONTROL_ENABLE
#define DISPLAY_BACKLIGHT_FADE_CONTROL_ENABLE
#define DEFAULT_FADE_BRIGHTNES 50
#define DEFAULT_SCREEN_BRIGHTNESS 100

#define WAKEUP_FROM_LIGHT_SLEEP_EVERY_MS 1000
#define WAKEUP_FROM_DEEP_SLEEP_EVERY_SECONDS 60*60*24 // Wake up if no any other background works as pedometer

#define USE_TYPE2_OF_IMAGES
//#define PEDOMETER_ENABLE

//#define PEDOMETER_STEP_DETECTION_DELAY                30000

#define PEDOMETER_DO_NOT_USE_PEDOMETER_WHILE_CONNECTED_TO_USB

//#define PEDOMETER_STEP_DETECTION_DELAY                  1000
#define PEDOMETER_STEP_DETECTION_PERIOD_MS              1000
#define PEDOMETER_MESURES_IN_STEP_DETECTION_PERIOD      5
#define PEDOMETER_ENABLE_ON_START                       true
#define PEDOMETER_DAY_VALUE_TYPE                        uint16_t
#define PEDOMETER_DAYS_HISTORY                          7
#define PEDOMETER_DAY_STEP_LIMMIT_DEFAULT               10000
#define PEDOMETER_DAY_SLEEP_LIMMIT_DEFAULT              7*60 //minutes

#define WAKEUP_FOR_BACKGROUND_WORK_IDLE 1000
#define RUN_BACKGROUND_AFTER_RESTART_MCU // As deep sleep in esp

//#define DEBUG_PEDOMETER // Just for teste

#define FORCE_DISPLAY_UPDATE_ON_START // Will quick update screen on start and wakeup. Comment on unknown error.
#define DEFAULT_TIME_TO_POWEROFF_DISPLAY 7
#define DEFAULT_DELAY_TO_FADE_DISPLAY 7

//#define DEBUG_SERIAL

#define SOFTWARE_BUTTONS_BAR_SIZE 0
//#define LEGACY_GET_ICONS

#define DEBUG_SERIAL_PORT Serial

#define PEDOMETER_STEP_DETECTION_DELAY_SEC_MIN          10
#define PEDOMETER_STEP_DETECTION_DELAY_SEC_STEP         10
#define PEDOMETER_STEP_DETECTION_DELAY_SEC_MAX          60 // MAX (255 - PEDOMETER_STEP_DETECTION_PERIOD_MS/1000) and multiple 60 seconds

#define CORE_PEDOMETER_SLEEP_COUNTING_SPOINTS   1 // mesures for sleep detection 
#define COREPEDOMETER_DELTA_SLEEP_VALUE_MIN_100     3 // acceletometer sensitivity/100*G for sleep detection
#define COREPEDOMETER_CENTRALWIGHT_SLEEP_VALUE_MIN      0.05f

#define APP_CLOCK_POWER_AFTER_SECONDS_DEFAULT           4

#define PEDOMETER_DO_NOT_USER_PEDOMETER_WHILE_CONNECTED_TO_USB
//#define USE_NUMBERS_MAIN_MENU_IN_ACTIVE_PAGES

/*
    ############################################################################################
    #                                                                                          #
    #                                    DEFAULT SETTINGS +                                    #
    #                                                                                          #
    ############################################################################################
*/

