#define appNameClass    MainMenuApp      // App name without spaces
#define appName         "Main menu"      // App name with spaces 

#define PAGES_LIST_HEIGHT               20
#define ACTIVE_SCREEN_WIDTH             SCREEN_WIDTH
#define ACTIVE_SCREEN_HEIGHT            (SCREEN_HEIGHT - STYLE_STATUSBAR_HEIGHT - PAGES_LIST_HEIGHT)
#define SINGLE_ELEMENT_MIN_WIDTH        100
#define SINGLE_ELEMENT_MIN_HEIGHT       80

#define SINGLE_ELEMENTS_IN_X            ((int)(ACTIVE_SCREEN_WIDTH/SINGLE_ELEMENT_MIN_WIDTH))
#define SINGLE_ELEMENTS_IN_Y            ((int)(ACTIVE_SCREEN_HEIGHT/SINGLE_ELEMENT_MIN_HEIGHT))

#define SINGLE_ELEMENTS_IN_X_MACRO      ((ACTIVE_SCREEN_WIDTH/SINGLE_ELEMENT_MIN_WIDTH))
#define SINGLE_ELEMENTS_IN_Y_MACRO      ((ACTIVE_SCREEN_HEIGHT/SINGLE_ELEMENT_MIN_HEIGHT))

#if ((ACTIVE_SCREEN_WIDTH/SINGLE_ELEMENT_MIN_WIDTH)) < 1
  #define SINGLE_ELEMENTS_IN_X 1
  #define SINGLE_ELEMENTS_IN_X_MACRO 1
#endif

#if ((ACTIVE_SCREEN_HEIGHT/SINGLE_ELEMENT_MIN_HEIGHT)) < 1
  #define SINGLE_ELEMENTS_IN_Y 1
  #define SINGLE_ELEMENTS_IN_Y_MACRO 1
#endif

#if ( ((SINGLE_ELEMENTS_IN_X_MACRO)==1) && ((SINGLE_ELEMENTS_IN_Y_MACRO)==1))
  #define SINGLE_ELEMENT_ON_SCREEN
#endif

#ifdef NARROW_SCREEN
  #define SINGLE_ELEMENTS_IN_X 1
  #define SINGLE_ELEMENTS_IN_X_MACRO 1
  #define SINGLE_ELEMENTS_IN_Y 1
  #define SINGLE_ELEMENTS_IN_Y_MACRO 1
  #define SINGLE_ELEMENT_ON_SCREEN
#endif

#define SINGLE_ELEMENT_REAL_WIDTH       ((int)(ACTIVE_SCREEN_WIDTH/SINGLE_ELEMENTS_IN_X))
#define SINGLE_ELEMENT_REAL_HEIGHT      ((int)(ACTIVE_SCREEN_HEIGHT/SINGLE_ELEMENTS_IN_Y))
#define PAGES_LIST_POSITION             (SCREEN_HEIGHT-PAGES_LIST_HEIGHT/2)
#define APPS_ON_SINGLE_PAGE             (SINGLE_ELEMENTS_IN_X * SINGLE_ELEMENTS_IN_Y)

#ifdef  APP_MENU_APPLICATIONS_0
  #define APP_MENU_APPLICATIONS_QUANTITY 1
#endif
#ifdef  APP_MENU_APPLICATIONS_1
  #define APP_MENU_APPLICATIONS_QUANTITY 2
#endif
#ifdef  APP_MENU_APPLICATIONS_2
  #define APP_MENU_APPLICATIONS_QUANTITY 3
#endif
#ifdef  APP_MENU_APPLICATIONS_3
  #define APP_MENU_APPLICATIONS_QUANTITY 4
#endif
#ifdef  APP_MENU_APPLICATIONS_4
  #define APP_MENU_APPLICATIONS_QUANTITY 5
#endif
#ifdef  APP_MENU_APPLICATIONS_5
  #define APP_MENU_APPLICATIONS_QUANTITY 6
#endif
#ifdef  APP_MENU_APPLICATIONS_6
  #define APP_MENU_APPLICATIONS_QUANTITY 7
#endif
#ifdef  APP_MENU_APPLICATIONS_7
  #define APP_MENU_APPLICATIONS_QUANTITY 8
#endif
#ifdef  APP_MENU_APPLICATIONS_8
  #define APP_MENU_APPLICATIONS_QUANTITY 9
#endif
#ifdef  APP_MENU_APPLICATIONS_9
  #define APP_MENU_APPLICATIONS_QUANTITY 10
#endif
#ifdef  APP_MENU_APPLICATIONS_10
  #define APP_MENU_APPLICATIONS_QUANTITY 11
#endif
#ifdef  APP_MENU_APPLICATIONS_11
  #define APP_MENU_APPLICATIONS_QUANTITY 12
#endif
#ifdef  APP_MENU_APPLICATIONS_12
  #define APP_MENU_APPLICATIONS_QUANTITY 13
#endif
#ifdef  APP_MENU_APPLICATIONS_13
  #define APP_MENU_APPLICATIONS_QUANTITY 14
#endif
#ifdef  APP_MENU_APPLICATIONS_14
  #define APP_MENU_APPLICATIONS_QUANTITY 15
#endif
#ifdef  APP_MENU_APPLICATIONS_15
  #define APP_MENU_APPLICATIONS_QUANTITY 16
#endif
#ifdef  APP_MENU_APPLICATIONS_16
  #define APP_MENU_APPLICATIONS_QUANTITY 17
#endif
#ifdef  APP_MENU_APPLICATIONS_17
  #define APP_MENU_APPLICATIONS_QUANTITY 18
#endif
#ifdef  APP_MENU_APPLICATIONS_18
  #define APP_MENU_APPLICATIONS_QUANTITY 19
#endif
#ifdef  APP_MENU_APPLICATIONS_19
  #define APP_MENU_APPLICATIONS_QUANTITY 20
#endif
#ifdef  APP_MENU_APPLICATIONS_20
  #define APP_MENU_APPLICATIONS_QUANTITY 21
#endif
#ifdef  APP_MENU_APPLICATIONS_21
  #define APP_MENU_APPLICATIONS_QUANTITY 22
#endif
#ifdef  APP_MENU_APPLICATIONS_22
  #define APP_MENU_APPLICATIONS_QUANTITY 23
#endif
#ifdef  APP_MENU_APPLICATIONS_23
  #define APP_MENU_APPLICATIONS_QUANTITY 24
#endif
#ifdef  APP_MENU_APPLICATIONS_24
  #define APP_MENU_APPLICATIONS_QUANTITY 25
#endif
#ifdef  APP_MENU_APPLICATIONS_25
  #define APP_MENU_APPLICATIONS_QUANTITY 26
#endif
#ifdef  APP_MENU_APPLICATIONS_26
  #define APP_MENU_APPLICATIONS_QUANTITY 27
#endif
#ifdef  APP_MENU_APPLICATIONS_27
  #define APP_MENU_APPLICATIONS_QUANTITY 28
#endif
#ifdef  APP_MENU_APPLICATIONS_28
  #define APP_MENU_APPLICATIONS_QUANTITY 29
#endif
#ifdef  APP_MENU_APPLICATIONS_29
  #define APP_MENU_APPLICATIONS_QUANTITY 30
#endif
#ifdef  APP_MENU_APPLICATIONS_30
  #define APP_MENU_APPLICATIONS_QUANTITY 31
#endif
#ifdef  APP_MENU_APPLICATIONS_31
  #define APP_MENU_APPLICATIONS_QUANTITY 32
#endif

#define TOTAL_PAGES (APP_MENU_APPLICATIONS_QUANTITY%APPS_ON_SINGLE_PAGE==0?((int)(APP_MENU_APPLICATIONS_QUANTITY/APPS_ON_SINGLE_PAGE)):((int)(APP_MENU_APPLICATIONS_QUANTITY/APPS_ON_SINGLE_PAGE) + 1))

// # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # //

char app_z_menu_selectedAppIndex = 0; // Now it is a global variable

class appNameClass: public Application{
    public:
        virtual void onLoop() override;
        virtual void onDestroy() override;
        virtual void onEvent(unsigned char event, int val1, int val2) override;

        void onCreate();
        appNameClass(){ fillScreen(0, 0, 0); super_onCreate(); onCreate(); };
        static unsigned const char* getParams(const unsigned char type){
          switch(type){ 
            case PARAM_TYPE_NAME: return (unsigned char*)appName; 
            case PARAM_TYPE_ICON: return icon;
            default: return (unsigned char*)""; 
          }
        };
        const static unsigned char icon[] PROGMEM;
      
    private:
        const unsigned char* getApplicationTitle(int num);
        const unsigned char* getApplicationIcon(int num);
        void drawIcons(bool draw);
        void updateActiveAppIndex(int newSelectedAppIndex);
        void drawActiveAppFrame(bool draw);

};

const unsigned char appNameClass::icon[] PROGMEM = {
    
	/*            PUT YOUR ICON HERE            */

    0x02,0x01,0x02,0x20,0x02,0x20,0x04,0x6f,0x00,0xff,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x06,0x00,0x00,0x00,0x1E,0x00,
    0x00,0x00,0x7E,0x00,0x00,0x00,0x7E,0x00,0x00,0x00,0x7E,0x00,0x00,0x00,0x7E,0x00,0x00,0x00,0x7E,0x00,0x00,0x00,0x7E,0x00,0x00,0x00,0x78,
    0x00,0x00,0x00,0x60,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x04,0xFF,0xFF,0xFF,0x1F,0xFF,0xFF,0xF8,0x3F,0xFF,0xFF,0xFC,0x7F,0xFF,0xFF,0xFE,0xFF,0xFE,0x7F,0xFF,0xFF,0xF9,0x9F,0xFF,
    0xFF,0xE7,0xE7,0xFF,0xFF,0x9F,0xF9,0xFF,0xFF,0x7F,0xFE,0xFF,0xFF,0x1F,0xF8,0xFF,0xFF,0x67,0xE0,0xFF,0xFF,0x79,0x80,0xFF,0xFF,0x7E,0x00,
    0xFF,0xFF,0x7F,0x00,0xFF,0xFF,0x7F,0x00,0xFF,0xFF,0x7F,0x00,0xFF,0xFF,0x7F,0x00,0xFF,0xFF,0x7F,0x00,0xFF,0xFF,0x9F,0x01,0xFF,0xFF,0xE7,
    0x07,0xFF,0xFF,0xF9,0x1F,0xFF,0xFF,0xFE,0x7F,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xDF,0x7F,0xFF,0xFF,0xDF,0xFF,0xFF,0xFF,
    0xC7,0x6B,0xFF,0xFF,0xDB,0x65,0xFF,0xFF,0xDB,0x6D,0xFF,0xFF,0xC7,0x6D,0xFF,0x7F,0xFF,0xFF,0xFE,0x3F,0xFF,0xFF,0xFC,0x1F,0xFF,0xFF,0xF8,
    0x04,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x80,0x00,0x00,0x06,0x60,0x00,0x00,0x18,0x18,
    0x00,0x00,0x60,0x06,0x00,0x00,0x80,0x01,0x00,0x00,0xE0,0x07,0x00,0x00,0x98,0x19,0x00,0x00,0x86,0x61,0x00,0x00,0x81,0x81,0x00,0x00,0x80,
    0x81,0x00,0x00,0x80,0x81,0x00,0x00,0x80,0x81,0x00,0x00,0x80,0x81,0x00,0x00,0x80,0x81,0x00,0x00,0x60,0x86,0x00,0x00,0x18,0x98,0x00,0x00,
    0x06,0xE0,0x00,0x00,0x01,0x80,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x20,0x80,0x00,0x00,0x20,0x00,0x00,0x00,0x38,0x94,0x00,
    0x00,0x24,0x9A,0x00,0x00,0x24,0x92,0x00,0x00,0x38,0x92,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
};

void appNameClass::onCreate(){
    
    DRAW_LIMITS_setEnable(true);
    DRAW_LIMIT_reset();
    DRAW_LIMITS_setEnable(STYLE_STATUSBAR_HEIGHT, -1, -1, -1);

    setBackgroundColor(0,0,0);
    setContrastColor(255, 255, 255);

    unsigned char app_z_menu_selectedAppIndex_presaved = app_z_menu_selectedAppIndex;
    app_z_menu_selectedAppIndex=0;
    #ifndef SINGLE_ELEMENT_ON_SCREEN
      core_views_draw_pages_list_simple(true, PAGES_LIST_POSITION, TOTAL_PAGES);
    #endif

    unsigned char currentPage = app_z_menu_selectedAppIndex_presaved/APPS_ON_SINGLE_PAGE;
    if(currentPage==0) core_views_draw_active_page(true, PAGES_LIST_POSITION, TOTAL_PAGES, currentPage);
    //else this->updateActiveAppIndex(app_z_menu_selectedAppIndex_presaved);  
    this->updateActiveAppIndex(app_z_menu_selectedAppIndex_presaved);  

    // Drawing icons
    this->drawIcons(true);
    #ifndef SINGLE_ELEMENT_ON_SCREEN
      this->drawActiveAppFrame(true);  
    #endif
    
}

void appNameClass::updateActiveAppIndex(int newSelectedAppIndex){

  if(newSelectedAppIndex<0) newSelectedAppIndex = APP_MENU_APPLICATIONS_QUANTITY - 1;
  if(newSelectedAppIndex>=APP_MENU_APPLICATIONS_QUANTITY) newSelectedAppIndex = 0;

  if(app_z_menu_selectedAppIndex!=newSelectedAppIndex){
    #ifndef SINGLE_ELEMENT_ON_SCREEN
      this->drawActiveAppFrame(false);
    #endif

    if( (int)((app_z_menu_selectedAppIndex)/APPS_ON_SINGLE_PAGE) != (int)((newSelectedAppIndex)/APPS_ON_SINGLE_PAGE)){
      // update page
      this->drawIcons(false);
      core_views_draw_active_page(false, PAGES_LIST_POSITION, TOTAL_PAGES, (int)(app_z_menu_selectedAppIndex/APPS_ON_SINGLE_PAGE));
      app_z_menu_selectedAppIndex = newSelectedAppIndex;
      core_views_draw_active_page(true, PAGES_LIST_POSITION, TOTAL_PAGES, (int)(app_z_menu_selectedAppIndex/APPS_ON_SINGLE_PAGE));
      this->drawIcons(true);
    }else{
      app_z_menu_selectedAppIndex = newSelectedAppIndex;
    }

    // update selected app frame
    #ifndef SINGLE_ELEMENT_ON_SCREEN
      this->drawActiveAppFrame(true);
    #endif
  }
}

void appNameClass::drawActiveAppFrame(bool draw){
  #ifdef SINGLE_ELEMENT_ON_SCREEN
    return;
  #endif

  unsigned char positionOnScreen     = app_z_menu_selectedAppIndex%APPS_ON_SINGLE_PAGE;
  unsigned char positionOnScreen_x   = app_z_menu_selectedAppIndex%SINGLE_ELEMENTS_IN_X;
  unsigned char positionOnScreen_y   = positionOnScreen/SINGLE_ELEMENTS_IN_X;

  int x0 = positionOnScreen_x*SINGLE_ELEMENT_REAL_WIDTH;
  int y0 = positionOnScreen_y*SINGLE_ELEMENT_REAL_HEIGHT + STYLE_STATUSBAR_HEIGHT+1;
  int x1 = x0+SINGLE_ELEMENT_REAL_WIDTH;
  int y1 = y0+SINGLE_ELEMENT_REAL_HEIGHT;

  if(draw) setDrawColor(196, 196, 196);
  else setDrawColor(getBackgroundColor_red(), getBackgroundColor_green(), getBackgroundColor_blue());

  for(unsigned char i=0; i<4; i++){
    unsigned char delta = 5+i;
    drawRect(x0+delta, y0+delta, x1-delta, y1-delta);  
  }
  
}

void appNameClass::drawIcons(bool draw){
  for (unsigned char y_position=0; y_position<SINGLE_ELEMENTS_IN_Y; y_position++){
        for (unsigned char x_position=0; x_position<SINGLE_ELEMENTS_IN_X; x_position++){
            int x0 = x_position*SINGLE_ELEMENT_REAL_WIDTH;
            int y0 = y_position*SINGLE_ELEMENT_REAL_HEIGHT + STYLE_STATUSBAR_HEIGHT+1;
            int x1 = x0+SINGLE_ELEMENT_REAL_WIDTH;
            int y1 = y0+SINGLE_ELEMENT_REAL_HEIGHT;

            int x_center = (x0+x1)/2;
            int y_center = (y0+y1)/2;

            int app_num = y_position*(SINGLE_ELEMENTS_IN_X) + x_position + APPS_ON_SINGLE_PAGE*(int)(app_z_menu_selectedAppIndex/APPS_ON_SINGLE_PAGE);

            if(app_num<APP_MENU_APPLICATIONS_QUANTITY){
              #ifdef ESP8266
                ESP.wdtDisable();
              #endif

              //debug(String(app_num), 1000);
              #ifdef SMOOTH_ANIMATION
                if(this->scroll_x!=0){
                  if(this->scroll_x<0){
                  }else if(this->scroll_x>0){
                    // unsigned char lastIcon=this->scroll_x/SCREEN_WIDTH;
                    //debug(String(lastIcon));
                    
                    char elementsToPreDraw = this->scroll_x/SCREEN_WIDTH + 1;
                    elementsToPreDraw = elementsToPreDraw%APP_MENU_APPLICATIONS_QUANTITY;
                    for(unsigned char elementDraw = 0; elementDraw<=elementsToPreDraw; elementDraw++){
                      int appElementDraw = app_num - elementDraw;
                      while(appElementDraw<0) appElementDraw+=APP_MENU_APPLICATIONS_QUANTITY;
                      appElementDraw = appElementDraw%APP_MENU_APPLICATIONS_QUANTITY;

                      core_views_draw_app_icon(
                        draw, 
                        this->scroll_x + x_center - elementDraw*SCREEN_WIDTH , y_center, 
                        (const unsigned char*)this->getApplicationTitle(appElementDraw), 
                        this->getApplicationIcon(appElementDraw)
                      );
                    }

                  }
                }
              #endif

              core_views_draw_app_icon(
                draw, 
                this->scroll_x + x_center, y_center, 
                (const unsigned char*)this->getApplicationTitle(app_num), 
                this->getApplicationIcon(app_num)
              );
            }
        }
    }
}

void appNameClass::onLoop(){
  #ifdef SMOOTH_ANIMATION
    if(this->scroll_x!=0){
      this->drawIcons(false);
      if(this->scroll_x!=0){
        //this->scroll_x++;
        int dx = abs(scroll_x)/SMOOTH_ANIMATION_COEFFICIENT + 1;
        if(scroll_x>scroll_to_x) dx *= -1;
        scroll_x+=dx;

        if (abs(dx)<1) scroll_x=0;
      }
      this->drawIcons(true);
    }
  #endif
}

void appNameClass::onDestroy(){
}

void appNameClass::onEvent(unsigned char event, int val1, int val2){
    
  /*
  BUTTON_UP
  BUTTON_SELECT
  BUTTON_DOWN
  BUTTON_BACK
  BUTTON_POWER
  */

  #if (DRIVER_CONTROLS_TOTALBUTTONS == 1 || DRIVER_CONTROLS_TOTALBUTTONS == 2)
    if(event==EVENT_BUTTON_PRESSED){
      
    }else if(event==EVENT_BUTTON_RELEASED){
    }else if(event==EVENT_BUTTON_LONG_PRESS){
      if(val1==BUTTON_SELECT){
        startApp(app_z_menu_selectedAppIndex);
      }
    }else if(event==EVENT_ON_TIME_CHANGED){
    //}else if(event==EVENT_BUTTON_SHORT_SINGLE_PRESS){
    }else if(event==EVENT_BUTTON_SHORT_PRESS){
      if(val1==BUTTON_BACK){
        this->updateActiveAppIndex(app_z_menu_selectedAppIndex-1);
      }else if(val1==BUTTON_SELECT){
        this->drawIcons(false);
        #ifdef SMOOTH_ANIMATION
          this->scroll_x += SCREEN_WIDTH;
        #endif
        this->updateActiveAppIndex(app_z_menu_selectedAppIndex+1);
      }
    }else if(event==EVENT_BUTTON_DOUBLE_PRESS){
      if(val1==BUTTON_SELECT){
        this->drawIcons(false);
        #ifdef SMOOTH_ANIMATION
          this->scroll_x += SCREEN_WIDTH;
        #endif
        this->updateActiveAppIndex(app_z_menu_selectedAppIndex+1);
      }
    }
  #else
    if(event==EVENT_BUTTON_PRESSED){
      switch(val1){
        case BUTTON_UP:
          this->updateActiveAppIndex(app_z_menu_selectedAppIndex-1);
          break;
        case BUTTON_SELECT:
          startApp(app_z_menu_selectedAppIndex);
          break;
        case BUTTON_DOWN:
          this->updateActiveAppIndex(app_z_menu_selectedAppIndex+1);
          break;
      }
    }else if(event==EVENT_BUTTON_RELEASED){

    }else if(event==EVENT_BUTTON_LONG_PRESS){

    }else if(event==EVENT_ON_TIME_CHANGED){

    }else if(event==EVENT_BUTTON_SHORT_SINGLE_PRESS){

    }

    
  #endif

}

const unsigned char* appNameClass::getApplicationTitle(int num){
    return getAppParams(num,(PARAM_TYPE_NAME));
}

const unsigned char*  appNameClass::getApplicationIcon(int num){
    return (const unsigned char *)getAppParams(num,(PARAM_TYPE_ICON));
}

/*
    ############################################################################################
    #                                                                                          #
    #                                    SHARED FUNCTIONS +                                    #
    #                                                                                          #
    ############################################################################################
*/

Application *getApp(unsigned char i){  
    if (i==0) return new APP_MENU_APPLICATIONS_0; 
    #if APP_MENU_APPLICATIONS_QUANTITY > 1
      else if (i==1) return new APP_MENU_APPLICATIONS_1; 
    #endif
    #if APP_MENU_APPLICATIONS_QUANTITY > 2
      else if (i==2) return new APP_MENU_APPLICATIONS_2; 
    #endif
    #if APP_MENU_APPLICATIONS_QUANTITY > 3
      else if (i==3) return new APP_MENU_APPLICATIONS_3; 
    #endif
    #if APP_MENU_APPLICATIONS_QUANTITY > 4
      else if (i==4) return new APP_MENU_APPLICATIONS_4; 
    #endif
    #if APP_MENU_APPLICATIONS_QUANTITY > 5
      else if (i==5) return new APP_MENU_APPLICATIONS_5; 
    #endif
    #if APP_MENU_APPLICATIONS_QUANTITY > 6
      else if (i==6) return new APP_MENU_APPLICATIONS_6; 
    #endif
    #if APP_MENU_APPLICATIONS_QUANTITY > 7
      else if (i==7) return new APP_MENU_APPLICATIONS_7; 
    #endif
    #if APP_MENU_APPLICATIONS_QUANTITY > 8
      else if (i==8) return new APP_MENU_APPLICATIONS_8; 
    #endif
    #if APP_MENU_APPLICATIONS_QUANTITY > 9
      else if (i==9) return new APP_MENU_APPLICATIONS_9; 
    #endif
    #if APP_MENU_APPLICATIONS_QUANTITY > 10
      else if (i==10) return new APP_MENU_APPLICATIONS_10; 
    #endif
    #if APP_MENU_APPLICATIONS_QUANTITY > 11
      else if (i==11) return new APP_MENU_APPLICATIONS_11; 
    #endif
    #if APP_MENU_APPLICATIONS_QUANTITY > 12
      else if (i==12) return new APP_MENU_APPLICATIONS_12; 
    #endif
    #if APP_MENU_APPLICATIONS_QUANTITY > 13
      else if (i==13) return new APP_MENU_APPLICATIONS_13; 
    #endif
    #if APP_MENU_APPLICATIONS_QUANTITY > 14
      else if (i==14) return new APP_MENU_APPLICATIONS_14; 
    #endif
    #if APP_MENU_APPLICATIONS_QUANTITY > 15
      else if (i==15) return new APP_MENU_APPLICATIONS_15; 
    #endif
    #if APP_MENU_APPLICATIONS_QUANTITY > 16
      else if (i==16) return new APP_MENU_APPLICATIONS_16; 
    #endif
    #if APP_MENU_APPLICATIONS_QUANTITY > 17
      else if (i==17) return new APP_MENU_APPLICATIONS_17; 
    #endif
    #if APP_MENU_APPLICATIONS_QUANTITY > 18
      else if (i==18) return new APP_MENU_APPLICATIONS_18; 
    #endif
    #if APP_MENU_APPLICATIONS_QUANTITY > 19
      else if (i==19) return new APP_MENU_APPLICATIONS_19; 
    #endif
    #if APP_MENU_APPLICATIONS_QUANTITY > 20
      else if (i==20) return new APP_MENU_APPLICATIONS_20; 
    #endif
    #if APP_MENU_APPLICATIONS_QUANTITY > 21
      else if (i==21) return new APP_MENU_APPLICATIONS_21; 
    #endif
    #if APP_MENU_APPLICATIONS_QUANTITY > 22
      else if (i==22) return new APP_MENU_APPLICATIONS_22; 
    #endif
    #if APP_MENU_APPLICATIONS_QUANTITY > 23
      else if (i==23) return new APP_MENU_APPLICATIONS_23; 
    #endif
    #if APP_MENU_APPLICATIONS_QUANTITY > 24
      else if (i==24) return new APP_MENU_APPLICATIONS_24; 
    #endif
    #if APP_MENU_APPLICATIONS_QUANTITY > 25
      else if (i==25) return new APP_MENU_APPLICATIONS_25; 
    #endif
    #if APP_MENU_APPLICATIONS_QUANTITY > 26
      else if (i==26) return new APP_MENU_APPLICATIONS_26; 
    #endif
    #if APP_MENU_APPLICATIONS_QUANTITY > 27
      else if (i==27) return new APP_MENU_APPLICATIONS_27; 
    #endif
    #if APP_MENU_APPLICATIONS_QUANTITY > 28
      else if (i==28) return new APP_MENU_APPLICATIONS_28; 
    #endif
    #if APP_MENU_APPLICATIONS_QUANTITY > 29
      else if (i==29) return new APP_MENU_APPLICATIONS_29; 
    #endif
    #if APP_MENU_APPLICATIONS_QUANTITY > 30
      else if (i==30) return new APP_MENU_APPLICATIONS_30; 
    #endif
    #if APP_MENU_APPLICATIONS_QUANTITY > 31
      else if (i==31) return new APP_MENU_APPLICATIONS_31; 
    #endif
    else return new appNameClass;
}

const unsigned char *getAppParams(char i, unsigned char type){
    if(i==0){ APP_MENU_APPLICATIONS_0 *app; return ((*app).getParams(type));
    #if APP_MENU_APPLICATIONS_QUANTITY > 1
      }else if(i==1){ APP_MENU_APPLICATIONS_1 *app; return ((*app).getParams(type));
    #endif
    #if APP_MENU_APPLICATIONS_QUANTITY > 2
      }else if(i==2){ APP_MENU_APPLICATIONS_2 *app; return ((*app).getParams(type));
    #endif
    #if APP_MENU_APPLICATIONS_QUANTITY > 3
      }else if(i==3){ APP_MENU_APPLICATIONS_3 *app; return ((*app).getParams(type));
    #endif
    #if APP_MENU_APPLICATIONS_QUANTITY > 4
      }else if(i==4){ APP_MENU_APPLICATIONS_4 *app; return ((*app).getParams(type));
    #endif
    #if APP_MENU_APPLICATIONS_QUANTITY > 5
      }else if(i==5){ APP_MENU_APPLICATIONS_5 *app; return ((*app).getParams(type));
    #endif
    #if APP_MENU_APPLICATIONS_QUANTITY > 6
      }else if(i==6){ APP_MENU_APPLICATIONS_6 *app; return ((*app).getParams(type));
    #endif
    #if APP_MENU_APPLICATIONS_QUANTITY > 7
      }else if(i==7){ APP_MENU_APPLICATIONS_7 *app; return ((*app).getParams(type));
    #endif
    #if APP_MENU_APPLICATIONS_QUANTITY > 8
      }else if(i==8){ APP_MENU_APPLICATIONS_8 *app; return ((*app).getParams(type));
    #endif
    #if APP_MENU_APPLICATIONS_QUANTITY > 9
      }else if(i==9){ APP_MENU_APPLICATIONS_9 *app; return ((*app).getParams(type));
    #endif
    #if APP_MENU_APPLICATIONS_QUANTITY > 10
      }else if(i==10){ APP_MENU_APPLICATIONS_10 *app; return ((*app).getParams(type));
    #endif
    #if APP_MENU_APPLICATIONS_QUANTITY > 11
      }else if(i==11){ APP_MENU_APPLICATIONS_11 *app; return ((*app).getParams(type));
    #endif
    #if APP_MENU_APPLICATIONS_QUANTITY > 12
      }else if(i==12){ APP_MENU_APPLICATIONS_12 *app; return ((*app).getParams(type));
    #endif
    #if APP_MENU_APPLICATIONS_QUANTITY > 13
      }else if(i==13){ APP_MENU_APPLICATIONS_13 *app; return ((*app).getParams(type));
    #endif
    #if APP_MENU_APPLICATIONS_QUANTITY > 14
      }else if(i==14){ APP_MENU_APPLICATIONS_14 *app; return ((*app).getParams(type));
    #endif
    #if APP_MENU_APPLICATIONS_QUANTITY > 15
      }else if(i==15){ APP_MENU_APPLICATIONS_15 *app; return ((*app).getParams(type));
    #endif
    #if APP_MENU_APPLICATIONS_QUANTITY > 16
      }else if(i==16){ APP_MENU_APPLICATIONS_16 *app; return ((*app).getParams(type));
    #endif
    #if APP_MENU_APPLICATIONS_QUANTITY > 17
      }else if(i==17){ APP_MENU_APPLICATIONS_17 *app; return ((*app).getParams(type));
    #endif
    #if APP_MENU_APPLICATIONS_QUANTITY > 18
      }else if(i==18){ APP_MENU_APPLICATIONS_18 *app; return ((*app).getParams(type));
    #endif
    #if APP_MENU_APPLICATIONS_QUANTITY > 19
      }else if(i==19){ APP_MENU_APPLICATIONS_19 *app; return ((*app).getParams(type));
    #endif
    #if APP_MENU_APPLICATIONS_QUANTITY > 20
      }else if(i==20){ APP_MENU_APPLICATIONS_20 *app; return ((*app).getParams(type));
    #endif
    #if APP_MENU_APPLICATIONS_QUANTITY > 21
      }else if(i==21){ APP_MENU_APPLICATIONS_21 *app; return ((*app).getParams(type));
    #endif
    #if APP_MENU_APPLICATIONS_QUANTITY > 22
      }else if(i==22){ APP_MENU_APPLICATIONS_22 *app; return ((*app).getParams(type));
    #endif
    #if APP_MENU_APPLICATIONS_QUANTITY > 23
      }else if(i==23){ APP_MENU_APPLICATIONS_23 *app; return ((*app).getParams(type));
    #endif
    #if APP_MENU_APPLICATIONS_QUANTITY > 24
      }else if(i==24){ APP_MENU_APPLICATIONS_24 *app; return ((*app).getParams(type));
    #endif
    #if APP_MENU_APPLICATIONS_QUANTITY > 25
      }else if(i==25){ APP_MENU_APPLICATIONS_25 *app; return ((*app).getParams(type));
    #endif
    #if APP_MENU_APPLICATIONS_QUANTITY > 26
      }else if(i==26){ APP_MENU_APPLICATIONS_26 *app; return ((*app).getParams(type));
    #endif
    #if APP_MENU_APPLICATIONS_QUANTITY > 27
      }else if(i==27){ APP_MENU_APPLICATIONS_27 *app; return ((*app).getParams(type));
    #endif
    #if APP_MENU_APPLICATIONS_QUANTITY > 28
      }else if(i==28){ APP_MENU_APPLICATIONS_28 *app; return ((*app).getParams(type));
    #endif
    #if APP_MENU_APPLICATIONS_QUANTITY > 29
      }else if(i==29){ APP_MENU_APPLICATIONS_29 *app; return ((*app).getParams(type));
    #endif
    #if APP_MENU_APPLICATIONS_QUANTITY > 30
      }else if(i==30){ APP_MENU_APPLICATIONS_30 *app; return ((*app).getParams(type));
    #endif
    #if APP_MENU_APPLICATIONS_QUANTITY > 31
      }else if(i==31){ APP_MENU_APPLICATIONS_31 *app; return ((*app).getParams(type));
    #endif
    }else return 0;
}

void startApp(char num){
  currentApp->onDestroy();
  currentApp = getApp(num);
}

/*
    ############################################################################################
    #                                                                                          #
    #                                    SHARED FUNCTIONS -                                    #
    #                                                                                          #
    ############################################################################################
*/
