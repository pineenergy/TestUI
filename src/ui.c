// SquareLine LVGL GENERATED FILE
// EDITOR VERSION: SquareLine Studio 1.2.1
// LVGL VERSION: 8.2.0
// PROJECT: Futuristic_Ebike

#include "ui.h"
#include "ui_helpers.h"

///////////////////// VARIABLES ////////////////////
void Particle1_Animation(lv_obj_t * TargetObject, int delay);
void Particle2_Animation(lv_obj_t * TargetObject, int delay);
void Particle3_Animation(lv_obj_t * TargetObject, int delay);
void Fash_Animation(lv_obj_t * TargetObject, int delay);
void Wave1_Animation(lv_obj_t * TargetObject, int delay);
void Wave2_Animation(lv_obj_t * TargetObject, int delay);
void Off_Animation(lv_obj_t * TargetObject, int delay);
void On_Animation(lv_obj_t * TargetObject, int delay);
void ui_event_Driving(lv_event_t * e);
lv_obj_t * ui_Driving;
lv_obj_t * ui_BG1;
lv_obj_t * ui_Speed_Number_2;
lv_obj_t * ui_Speed_Number_1;
lv_obj_t * ui_Label_Speed;
lv_obj_t * ui_Label_kmh1;
lv_obj_t * ui_Slider_Speed;
lv_obj_t * ui_Slider_Battery;
lv_obj_t * ui_Group_Battery_Percent;
lv_obj_t * ui_Label_Number1;
lv_obj_t * ui_Label_Number2;
lv_obj_t * ui_Label_Number3;
lv_obj_t * ui_Label_Number4;
lv_obj_t * ui_Label_Number5;
lv_obj_t * ui_Group_Header;
lv_obj_t * ui_Label_Time;
lv_obj_t * ui_LabeL_PM;
lv_obj_t * ui_Label_Temp;
lv_obj_t * ui_Label_Celsius;
lv_obj_t * ui_Label_Battery;
lv_obj_t * ui_Group_Footer;
lv_obj_t * ui_Image_Battery_icon;
lv_obj_t * ui_Label_Battery_Number;
lv_obj_t * ui_Label_Battery_Percent;
lv_obj_t * ui_Button_Group;
lv_obj_t * ui_BTN_Driving;
void ui_event_BTN_BG1(lv_event_t * e);
lv_obj_t * ui_BTN_BG1;
lv_obj_t * ui_ICN_Driving;
lv_obj_t * ui_BTN_Battery;
void ui_event_BTN_BG2(lv_event_t * e);
lv_obj_t * ui_BTN_BG2;
lv_obj_t * ui_ICN_Battery;
lv_obj_t * ui_BTN_Lock;
void ui_event_BTN_BG3(lv_event_t * e);
lv_obj_t * ui_BTN_BG3;
lv_obj_t * ui_ICN_Lock;
lv_obj_t * ui_Group_Driving;
lv_obj_t * ui_Group_Title;
lv_obj_t * ui_Title_BG;
lv_obj_t * ui_Label_Driving_Information;
lv_obj_t * ui_Group_Content;
lv_obj_t * ui_Group_ODO;
lv_obj_t * ui_LabeL_ODO;
lv_obj_t * ui_Label_ODO_Number;
lv_obj_t * ui_Label_km1;
lv_obj_t * ui_Group_Trip;
lv_obj_t * ui_Label_Trip;
lv_obj_t * ui_Label_Trip_Number;
lv_obj_t * ui_Label_km2;
lv_obj_t * ui_Group_Max_Speed;
lv_obj_t * ui_Label_Max_Speed;
lv_obj_t * ui_Label_Max_Speed_Number;
lv_obj_t * ui_Label_kmh2;
lv_obj_t * ui_Group_AVG_Speed;
lv_obj_t * ui_Label_AVG_Speed;
lv_obj_t * ui_Label_AVG_Speed_Number;
lv_obj_t * ui_Label_kmh3;
lv_obj_t * ui_Group_ETA;
lv_obj_t * ui_Label_ETA;
lv_obj_t * ui_Label_ETA_Number;
lv_obj_t * ui_Group_Time;
lv_obj_t * ui_Label_Time1;
lv_obj_t * ui_Label_Arrival_Time_Number1;
lv_obj_t * ui_Group_Battery;
lv_obj_t * ui_Group_Title1;
lv_obj_t * ui_Title_BG1;
lv_obj_t * ui_Label_Battery_Information;
lv_obj_t * ui_Group_Content1;
lv_obj_t * ui_Group_Charging;
lv_obj_t * ui_LabeL_Charging;
lv_obj_t * ui_Label_Charging_Number;
lv_obj_t * ui_Label_Percent1;
lv_obj_t * ui_Group_Distance;
lv_obj_t * ui_Label_Distance;
lv_obj_t * ui_Label_Distance_Number;
lv_obj_t * ui_Label_km4;
lv_obj_t * ui_Group_Complete;
lv_obj_t * ui_Label_Complete;
lv_obj_t * ui_Label_Complete_Number;
lv_obj_t * ui_Label_Mins;
lv_obj_t * ui_Group_Battery_Indicator;
lv_obj_t * ui_Particle_Group;
lv_obj_t * ui_Image_Particle1;
lv_obj_t * ui_Wave_Group;
lv_obj_t * ui_Wave1;
lv_obj_t * ui_Image_Particle2;
lv_obj_t * ui_Wave2;
lv_obj_t * ui_Image_Particle3;
lv_obj_t * ui_Image_Battery_BG;
lv_obj_t * ui_Image_Flash;
lv_obj_t * ui_Group_Pin;
lv_obj_t * ui_Group_Title2;
lv_obj_t * ui_Title_BG2;
lv_obj_t * ui_Label_Unlock;
lv_obj_t * ui_Group_Pin1;
void ui_event_Button_Pin1(lv_event_t * e);
lv_obj_t * ui_Button_Pin1;
lv_obj_t * ui_Label_1;
lv_obj_t * ui_Pin_Add1;
void ui_event_Button_Pin2(lv_event_t * e);
lv_obj_t * ui_Button_Pin2;
lv_obj_t * ui_Label_2;
lv_obj_t * ui_Pin_Add2;
void ui_event_Button_Pin3(lv_event_t * e);
lv_obj_t * ui_Button_Pin3;
lv_obj_t * ui_Label_3;
lv_obj_t * ui_Pin_Add3;
void ui_event_Button_Pin4(lv_event_t * e);
lv_obj_t * ui_Button_Pin4;
lv_obj_t * ui_Label_4;
lv_obj_t * ui_Pin_Add4;
void ui_event_Button_Pin5(lv_event_t * e);
lv_obj_t * ui_Button_Pin5;
lv_obj_t * ui_Label_5;
lv_obj_t * ui_Pin_Add5;
void ui_event_Button_Pin6(lv_event_t * e);
lv_obj_t * ui_Button_Pin6;
lv_obj_t * ui_Label_6;
lv_obj_t * ui_Pin_Add6;
void ui_event_Button_Pin7(lv_event_t * e);
lv_obj_t * ui_Button_Pin7;
lv_obj_t * ui_Label_7;
lv_obj_t * ui_Pin_Add7;
void ui_event_Button_Pin8(lv_event_t * e);
lv_obj_t * ui_Button_Pin8;
lv_obj_t * ui_Label_8;
lv_obj_t * ui_Pin_Add8;
void ui_event_Button_Pin9(lv_event_t * e);
lv_obj_t * ui_Button_Pin9;
lv_obj_t * ui_Label_9;
lv_obj_t * ui_Pin_Add9;
void ui_event_Button_PinX(lv_event_t * e);
lv_obj_t * ui_Button_PinX;
lv_obj_t * ui_Pin_Add10;
lv_obj_t * ui_Image_X;
void ui_event_Button_Pin0(lv_event_t * e);
lv_obj_t * ui_Button_Pin0;
lv_obj_t * ui_Label_0;
lv_obj_t * ui_Pin_Add11;
void ui_event_Button_PinX1(lv_event_t * e);
lv_obj_t * ui_Button_PinX1;
lv_obj_t * ui_Pin_Add12;
lv_obj_t * ui_Image_Ok;

///////////////////// TEST LVGL SETTINGS ////////////////////
#if LV_COLOR_DEPTH != 16
    #error "LV_COLOR_DEPTH should be 16bit to match SquareLine Studio's settings"
#endif
#if LV_COLOR_16_SWAP !=0
    #error "LV_COLOR_16_SWAP should be 0 to match SquareLine Studio's settings"
#endif

///////////////////// ANIMATIONS ////////////////////
void Particle1_Animation(lv_obj_t * TargetObject, int delay)
{
    lv_anim_t PropertyAnimation_0;
    lv_anim_init(&PropertyAnimation_0);
    lv_anim_set_time(&PropertyAnimation_0, 19800);
    lv_anim_set_user_data(&PropertyAnimation_0, TargetObject);
    lv_anim_set_custom_exec_cb(&PropertyAnimation_0, _ui_anim_callback_set_y);
    lv_anim_set_values(&PropertyAnimation_0, 0, -120);
    lv_anim_set_path_cb(&PropertyAnimation_0, lv_anim_path_linear);
    lv_anim_set_delay(&PropertyAnimation_0, delay + 0);
    lv_anim_set_playback_time(&PropertyAnimation_0, 0);
    lv_anim_set_playback_delay(&PropertyAnimation_0, 0);
    lv_anim_set_repeat_count(&PropertyAnimation_0, LV_ANIM_REPEAT_INFINITE);
    lv_anim_set_repeat_delay(&PropertyAnimation_0, 0);
    lv_anim_set_early_apply(&PropertyAnimation_0, false);
    lv_anim_start(&PropertyAnimation_0);

}
void Particle2_Animation(lv_obj_t * TargetObject, int delay)
{
    lv_anim_t PropertyAnimation_0;
    lv_anim_init(&PropertyAnimation_0);
    lv_anim_set_time(&PropertyAnimation_0, 7920);
    lv_anim_set_user_data(&PropertyAnimation_0, TargetObject);
    lv_anim_set_custom_exec_cb(&PropertyAnimation_0, _ui_anim_callback_set_y);
    lv_anim_set_values(&PropertyAnimation_0, 0, -120);
    lv_anim_set_path_cb(&PropertyAnimation_0, lv_anim_path_linear);
    lv_anim_set_delay(&PropertyAnimation_0, delay + 0);
    lv_anim_set_playback_time(&PropertyAnimation_0, 0);
    lv_anim_set_playback_delay(&PropertyAnimation_0, 0);
    lv_anim_set_repeat_count(&PropertyAnimation_0, LV_ANIM_REPEAT_INFINITE);
    lv_anim_set_repeat_delay(&PropertyAnimation_0, 0);
    lv_anim_set_early_apply(&PropertyAnimation_0, false);
    lv_anim_set_get_value_cb(&PropertyAnimation_0, &_ui_anim_callback_get_y);
    lv_anim_start(&PropertyAnimation_0);

}
void Particle3_Animation(lv_obj_t * TargetObject, int delay)
{
    lv_anim_t PropertyAnimation_0;
    lv_anim_init(&PropertyAnimation_0);
    lv_anim_set_time(&PropertyAnimation_0, 3960);
    lv_anim_set_user_data(&PropertyAnimation_0, TargetObject);
    lv_anim_set_custom_exec_cb(&PropertyAnimation_0, _ui_anim_callback_set_y);
    lv_anim_set_values(&PropertyAnimation_0, 0, -120);
    lv_anim_set_path_cb(&PropertyAnimation_0, lv_anim_path_linear);
    lv_anim_set_delay(&PropertyAnimation_0, delay + 0);
    lv_anim_set_playback_time(&PropertyAnimation_0, 0);
    lv_anim_set_playback_delay(&PropertyAnimation_0, 0);
    lv_anim_set_repeat_count(&PropertyAnimation_0, LV_ANIM_REPEAT_INFINITE);
    lv_anim_set_repeat_delay(&PropertyAnimation_0, 0);
    lv_anim_set_early_apply(&PropertyAnimation_0, false);
    lv_anim_set_get_value_cb(&PropertyAnimation_0, &_ui_anim_callback_get_y);
    lv_anim_start(&PropertyAnimation_0);

}
void Fash_Animation(lv_obj_t * TargetObject, int delay)
{
    lv_anim_t PropertyAnimation_0;
    lv_anim_init(&PropertyAnimation_0);
    lv_anim_set_time(&PropertyAnimation_0, 100);
    lv_anim_set_user_data(&PropertyAnimation_0, TargetObject);
    lv_anim_set_custom_exec_cb(&PropertyAnimation_0, _ui_anim_callback_set_opacity);
    lv_anim_set_values(&PropertyAnimation_0, 0, 255);
    lv_anim_set_path_cb(&PropertyAnimation_0, lv_anim_path_linear);
    lv_anim_set_delay(&PropertyAnimation_0, delay + 0);
    lv_anim_set_playback_time(&PropertyAnimation_0, 1200);
    lv_anim_set_playback_delay(&PropertyAnimation_0, 0);
    lv_anim_set_repeat_count(&PropertyAnimation_0, 0);
    lv_anim_set_repeat_delay(&PropertyAnimation_0, 0);
    lv_anim_set_early_apply(&PropertyAnimation_0, false);
    lv_anim_start(&PropertyAnimation_0);

}
void Wave1_Animation(lv_obj_t * TargetObject, int delay)
{
    lv_anim_t PropertyAnimation_0;
    lv_anim_init(&PropertyAnimation_0);
    lv_anim_set_time(&PropertyAnimation_0, 7000);
    lv_anim_set_user_data(&PropertyAnimation_0, TargetObject);
    lv_anim_set_custom_exec_cb(&PropertyAnimation_0, _ui_anim_callback_set_x);
    lv_anim_set_values(&PropertyAnimation_0, 0, 103);
    lv_anim_set_path_cb(&PropertyAnimation_0, lv_anim_path_linear);
    lv_anim_set_delay(&PropertyAnimation_0, delay + 0);
    lv_anim_set_playback_time(&PropertyAnimation_0, 0);
    lv_anim_set_playback_delay(&PropertyAnimation_0, 0);
    lv_anim_set_repeat_count(&PropertyAnimation_0, LV_ANIM_REPEAT_INFINITE);
    lv_anim_set_repeat_delay(&PropertyAnimation_0, 0);
    lv_anim_set_early_apply(&PropertyAnimation_0, false);
    lv_anim_start(&PropertyAnimation_0);

}
void Wave2_Animation(lv_obj_t * TargetObject, int delay)
{
    lv_anim_t PropertyAnimation_0;
    lv_anim_init(&PropertyAnimation_0);
    lv_anim_set_time(&PropertyAnimation_0, 5000);
    lv_anim_set_user_data(&PropertyAnimation_0, TargetObject);
    lv_anim_set_custom_exec_cb(&PropertyAnimation_0, _ui_anim_callback_set_x);
    lv_anim_set_values(&PropertyAnimation_0, 0, -103);
    lv_anim_set_path_cb(&PropertyAnimation_0, lv_anim_path_linear);
    lv_anim_set_delay(&PropertyAnimation_0, delay + 0);
    lv_anim_set_playback_time(&PropertyAnimation_0, 0);
    lv_anim_set_playback_delay(&PropertyAnimation_0, 0);
    lv_anim_set_repeat_count(&PropertyAnimation_0, LV_ANIM_REPEAT_INFINITE);
    lv_anim_set_repeat_delay(&PropertyAnimation_0, 0);
    lv_anim_set_early_apply(&PropertyAnimation_0, false);
    lv_anim_start(&PropertyAnimation_0);

}
void Off_Animation(lv_obj_t * TargetObject, int delay)
{
    lv_anim_t PropertyAnimation_0;
    lv_anim_init(&PropertyAnimation_0);
    lv_anim_set_time(&PropertyAnimation_0, 600);
    lv_anim_set_user_data(&PropertyAnimation_0, TargetObject);
    lv_anim_set_custom_exec_cb(&PropertyAnimation_0, _ui_anim_callback_set_opacity);
    lv_anim_set_values(&PropertyAnimation_0, 255, 0);
    lv_anim_set_path_cb(&PropertyAnimation_0, lv_anim_path_ease_in);
    lv_anim_set_delay(&PropertyAnimation_0, delay + 0);
    lv_anim_set_playback_time(&PropertyAnimation_0, 0);
    lv_anim_set_playback_delay(&PropertyAnimation_0, 0);
    lv_anim_set_repeat_count(&PropertyAnimation_0, 0);
    lv_anim_set_repeat_delay(&PropertyAnimation_0, 0);
    lv_anim_set_early_apply(&PropertyAnimation_0, true);
    lv_anim_start(&PropertyAnimation_0);

}
void On_Animation(lv_obj_t * TargetObject, int delay)
{
    lv_anim_t PropertyAnimation_0;
    lv_anim_init(&PropertyAnimation_0);
    lv_anim_set_time(&PropertyAnimation_0, 500);
    lv_anim_set_user_data(&PropertyAnimation_0, TargetObject);
    lv_anim_set_custom_exec_cb(&PropertyAnimation_0, _ui_anim_callback_set_opacity);
    lv_anim_set_values(&PropertyAnimation_0, 0, 255);
    lv_anim_set_path_cb(&PropertyAnimation_0, lv_anim_path_ease_out);
    lv_anim_set_delay(&PropertyAnimation_0, delay + 0);
    lv_anim_set_playback_time(&PropertyAnimation_0, 0);
    lv_anim_set_playback_delay(&PropertyAnimation_0, 0);
    lv_anim_set_repeat_count(&PropertyAnimation_0, 0);
    lv_anim_set_repeat_delay(&PropertyAnimation_0, 0);
    lv_anim_set_early_apply(&PropertyAnimation_0, true);
    lv_anim_start(&PropertyAnimation_0);
    lv_anim_t PropertyAnimation_1;
    lv_anim_init(&PropertyAnimation_1);
    lv_anim_set_time(&PropertyAnimation_1, 600);
    lv_anim_set_user_data(&PropertyAnimation_1, TargetObject);
    lv_anim_set_custom_exec_cb(&PropertyAnimation_1, _ui_anim_callback_set_x);
    lv_anim_set_values(&PropertyAnimation_1, 100, 0);
    lv_anim_set_path_cb(&PropertyAnimation_1, lv_anim_path_ease_out);
    lv_anim_set_delay(&PropertyAnimation_1, delay + 0);
    lv_anim_set_playback_time(&PropertyAnimation_1, 0);
    lv_anim_set_playback_delay(&PropertyAnimation_1, 0);
    lv_anim_set_repeat_count(&PropertyAnimation_1, 0);
    lv_anim_set_repeat_delay(&PropertyAnimation_1, 0);
    lv_anim_set_early_apply(&PropertyAnimation_1, false);
    lv_anim_set_get_value_cb(&PropertyAnimation_1, &_ui_anim_callback_get_x);
    lv_anim_start(&PropertyAnimation_1);

}

///////////////////// FUNCTIONS ////////////////////
void ui_event_Driving(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_SCREEN_LOADED) {
        Particle1_Animation(ui_Image_Particle1, 0);
        Particle2_Animation(ui_Image_Particle2, 0);
        Particle3_Animation(ui_Image_Particle3, 0);
        Wave1_Animation(ui_Wave1, 0);
        Wave2_Animation(ui_Wave2, 0);
    }
}
void ui_event_BTN_BG1(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_CLICKED) {
        _ui_state_modify(ui_BTN_BG2, LV_STATE_CHECKED, _UI_MODIFY_STATE_REMOVE);
        _ui_state_modify(ui_BTN_BG3, LV_STATE_CHECKED, _UI_MODIFY_STATE_REMOVE);
        _ui_state_modify(ui_BTN_BG1, LV_STATE_CHECKED, _UI_MODIFY_STATE_ADD);
        On_Animation(ui_Group_Driving, 0);
    }
    if(event_code == LV_EVENT_CLICKED) {
        _ui_flag_modify(ui_Group_Battery, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_ADD);
        _ui_flag_modify(ui_Group_Pin, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_ADD);
        _ui_flag_modify(ui_Group_Driving, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_REMOVE);
    }
    if(event_code == LV_EVENT_CLICKED) {
        _ui_flag_modify(ui_BTN_BG1, LV_OBJ_FLAG_CLICKABLE, _UI_MODIFY_FLAG_REMOVE);
        _ui_flag_modify(ui_BTN_BG2, LV_OBJ_FLAG_CLICKABLE, _UI_MODIFY_FLAG_ADD);
        _ui_flag_modify(ui_BTN_BG3, LV_OBJ_FLAG_CLICKABLE, _UI_MODIFY_FLAG_ADD);
    }
}
void ui_event_BTN_BG2(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_CLICKED) {
        _ui_state_modify(ui_BTN_BG1, LV_STATE_CHECKED, _UI_MODIFY_STATE_REMOVE);
        _ui_state_modify(ui_BTN_BG3, LV_STATE_CHECKED, _UI_MODIFY_STATE_REMOVE);
        _ui_state_modify(ui_BTN_BG2, LV_STATE_CHECKED, _UI_MODIFY_STATE_ADD);
        On_Animation(ui_Group_Battery, 0);
    }
    if(event_code == LV_EVENT_CLICKED) {
        _ui_flag_modify(ui_Group_Driving, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_ADD);
        _ui_flag_modify(ui_Group_Pin, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_ADD);
        _ui_flag_modify(ui_Group_Battery, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_REMOVE);
    }
    if(event_code == LV_EVENT_CLICKED) {
        _ui_flag_modify(ui_BTN_BG2, LV_OBJ_FLAG_CLICKABLE, _UI_MODIFY_FLAG_REMOVE);
        _ui_flag_modify(ui_BTN_BG1, LV_OBJ_FLAG_CLICKABLE, _UI_MODIFY_FLAG_ADD);
        _ui_flag_modify(ui_BTN_BG3, LV_OBJ_FLAG_CLICKABLE, _UI_MODIFY_FLAG_ADD);
    }
}
void ui_event_BTN_BG3(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_CLICKED) {
        _ui_state_modify(ui_BTN_BG1, LV_STATE_CHECKED, _UI_MODIFY_STATE_REMOVE);
        _ui_state_modify(ui_BTN_BG2, LV_STATE_CHECKED, _UI_MODIFY_STATE_REMOVE);
        _ui_state_modify(ui_BTN_BG3, LV_STATE_CHECKED, _UI_MODIFY_STATE_ADD);
        On_Animation(ui_Group_Pin, 0);
    }
    if(event_code == LV_EVENT_CLICKED) {
        _ui_flag_modify(ui_Group_Driving, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_ADD);
        _ui_flag_modify(ui_Group_Battery, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_ADD);
        _ui_flag_modify(ui_Group_Pin, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_REMOVE);
    }
    if(event_code == LV_EVENT_CLICKED) {
        _ui_flag_modify(ui_BTN_BG1, LV_OBJ_FLAG_CLICKABLE, _UI_MODIFY_FLAG_ADD);
        _ui_flag_modify(ui_BTN_BG2, LV_OBJ_FLAG_CLICKABLE, _UI_MODIFY_FLAG_ADD);
        _ui_flag_modify(ui_BTN_BG3, LV_OBJ_FLAG_CLICKABLE, _UI_MODIFY_FLAG_REMOVE);
    }
}
void ui_event_Button_Pin1(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_CLICKED) {
        Fash_Animation(ui_Pin_Add1, 0);
    }
}
void ui_event_Button_Pin2(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_CLICKED) {
        Fash_Animation(ui_Pin_Add2, 0);
    }
}
void ui_event_Button_Pin3(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_CLICKED) {
        Fash_Animation(ui_Pin_Add3, 0);
    }
}
void ui_event_Button_Pin4(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_CLICKED) {
        Fash_Animation(ui_Pin_Add4, 0);
    }
}
void ui_event_Button_Pin5(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_CLICKED) {
        Fash_Animation(ui_Pin_Add5, 0);
    }
}
void ui_event_Button_Pin6(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_CLICKED) {
        Fash_Animation(ui_Pin_Add6, 0);
    }
}
void ui_event_Button_Pin7(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_CLICKED) {
        Fash_Animation(ui_Pin_Add7, 0);
    }
}
void ui_event_Button_Pin8(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_CLICKED) {
        Fash_Animation(ui_Pin_Add8, 0);
    }
}
void ui_event_Button_Pin9(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_CLICKED) {
        Fash_Animation(ui_Pin_Add9, 0);
    }
}
void ui_event_Button_PinX(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_CLICKED) {
        Fash_Animation(ui_Pin_Add10, 0);
    }
}
void ui_event_Button_Pin0(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_CLICKED) {
        Fash_Animation(ui_Pin_Add11, 0);
    }
}
void ui_event_Button_PinX1(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_CLICKED) {
        Fash_Animation(ui_Pin_Add12, 0);
    }
}

///////////////////// SCREENS ////////////////////
void ui_Driving_screen_init(void)
{
    ui_Driving = lv_obj_create(NULL);
    lv_obj_clear_flag(ui_Driving, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_BG1 = lv_img_create(ui_Driving);
    lv_img_set_src(ui_BG1, &ui_img_ebike_bg_png);
    lv_obj_set_width(ui_BG1, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_BG1, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_BG1, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_BG1, LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_BG1, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_Speed_Number_2 = lv_label_create(ui_Driving);
    lv_obj_set_width(ui_Speed_Number_2, 100);
    lv_obj_set_height(ui_Speed_Number_2, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Speed_Number_2, -32);
    lv_obj_set_y(ui_Speed_Number_2, 0);
    lv_obj_set_align(ui_Speed_Number_2, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Speed_Number_2, "32");
    lv_obj_set_style_text_color(ui_Speed_Number_2, lv_color_hex(0xD56920), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Speed_Number_2, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui_Speed_Number_2, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Speed_Number_2, &ui_font_Number, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Speed_Number_1 = lv_label_create(ui_Driving);
    lv_obj_set_width(ui_Speed_Number_1, 100);
    lv_obj_set_height(ui_Speed_Number_1, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Speed_Number_1, -38);
    lv_obj_set_y(ui_Speed_Number_1, 0);
    lv_obj_set_align(ui_Speed_Number_1, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Speed_Number_1, "32");
    lv_obj_set_style_text_color(ui_Speed_Number_1, lv_color_hex(0xFFE69C), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Speed_Number_1, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui_Speed_Number_1, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Speed_Number_1, &ui_font_Number, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Label_Speed = lv_label_create(ui_Driving);
    lv_obj_set_width(ui_Label_Speed, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label_Speed, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Label_Speed, -54);
    lv_obj_set_y(ui_Label_Speed, -60);
    lv_obj_set_align(ui_Label_Speed, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label_Speed, "Speed");
    lv_obj_set_style_text_color(ui_Label_Speed, lv_color_hex(0x94AEB4), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Label_Speed, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Label_Speed, &ui_font_Medium, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Label_kmh1 = lv_label_create(ui_Driving);
    lv_obj_set_width(ui_Label_kmh1, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label_kmh1, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Label_kmh1, -13);
    lv_obj_set_y(ui_Label_kmh1, 58);
    lv_obj_set_align(ui_Label_kmh1, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label_kmh1, "km/h");
    lv_obj_set_style_text_color(ui_Label_kmh1, lv_color_hex(0x94AEB4), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Label_kmh1, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Label_kmh1, &ui_font_Medium, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Slider_Speed = lv_slider_create(ui_Driving);
    lv_slider_set_value(ui_Slider_Speed, 75, LV_ANIM_OFF);
    if(lv_slider_get_mode(ui_Slider_Speed) == LV_SLIDER_MODE_RANGE) lv_slider_set_left_value(ui_Slider_Speed, 0,
                                                                                                 LV_ANIM_OFF);
    lv_obj_set_width(ui_Slider_Speed, 123);
    lv_obj_set_height(ui_Slider_Speed, 244);
    lv_obj_set_x(ui_Slider_Speed, -100);
    lv_obj_set_y(ui_Slider_Speed, -1);
    lv_obj_set_align(ui_Slider_Speed, LV_ALIGN_CENTER);
    lv_obj_set_style_bg_color(ui_Slider_Speed, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Slider_Speed, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_set_style_bg_color(ui_Slider_Speed, lv_color_hex(0xFFFFFF), LV_PART_INDICATOR | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Slider_Speed, 0, LV_PART_INDICATOR | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_img_src(ui_Slider_Speed, &ui_img_speed_slider_png, LV_PART_INDICATOR | LV_STATE_DEFAULT);

    lv_obj_set_style_bg_color(ui_Slider_Speed, lv_color_hex(0xFFFFFF), LV_PART_KNOB | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Slider_Speed, 0, LV_PART_KNOB | LV_STATE_DEFAULT);

    ui_Slider_Battery = lv_slider_create(ui_Driving);
    lv_slider_set_value(ui_Slider_Battery, 50, LV_ANIM_OFF);
    if(lv_slider_get_mode(ui_Slider_Battery) == LV_SLIDER_MODE_RANGE) lv_slider_set_left_value(ui_Slider_Battery, 0,
                                                                                                   LV_ANIM_OFF);
    lv_obj_set_width(ui_Slider_Battery, 106);
    lv_obj_set_height(ui_Slider_Battery, 235);
    lv_obj_set_x(ui_Slider_Battery, -147);
    lv_obj_set_y(ui_Slider_Battery, 1);
    lv_obj_set_align(ui_Slider_Battery, LV_ALIGN_CENTER);
    lv_obj_set_style_bg_color(ui_Slider_Battery, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Slider_Battery, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_set_style_bg_color(ui_Slider_Battery, lv_color_hex(0xFFFFFF), LV_PART_INDICATOR | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Slider_Battery, 0, LV_PART_INDICATOR | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_img_src(ui_Slider_Battery, &ui_img_slider_battery_png, LV_PART_INDICATOR | LV_STATE_DEFAULT);

    lv_obj_set_style_bg_color(ui_Slider_Battery, lv_color_hex(0xFFFFFF), LV_PART_KNOB | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Slider_Battery, 0, LV_PART_KNOB | LV_STATE_DEFAULT);

    ui_Group_Battery_Percent = lv_obj_create(ui_Driving);
    lv_obj_set_width(ui_Group_Battery_Percent, 107);
    lv_obj_set_height(ui_Group_Battery_Percent, 200);
    lv_obj_set_align(ui_Group_Battery_Percent, LV_ALIGN_LEFT_MID);
    lv_obj_clear_flag(ui_Group_Battery_Percent, LV_OBJ_FLAG_CLICKABLE | LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_Group_Battery_Percent, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Group_Battery_Percent, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Label_Number1 = lv_label_create(ui_Group_Battery_Percent);
    lv_obj_set_width(ui_Label_Number1, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label_Number1, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Label_Number1, 21);
    lv_obj_set_y(ui_Label_Number1, 0);
    lv_obj_set_align(ui_Label_Number1, LV_ALIGN_TOP_MID);
    lv_label_set_text(ui_Label_Number1, "100#94aeb4 %");
    lv_label_set_recolor(ui_Label_Number1, "true");
    lv_obj_set_style_text_color(ui_Label_Number1, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Label_Number1, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Label_Number1, &ui_font_Small, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Label_Number2 = lv_label_create(ui_Group_Battery_Percent);
    lv_obj_set_width(ui_Label_Number2, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label_Number2, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Label_Number2, -5);
    lv_obj_set_y(ui_Label_Number2, lv_pct(22));
    lv_obj_set_align(ui_Label_Number2, LV_ALIGN_TOP_MID);
    lv_label_set_text(ui_Label_Number2, "75#94aeb4 %");
    lv_label_set_recolor(ui_Label_Number2, "true");
    lv_obj_set_style_text_color(ui_Label_Number2, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Label_Number2, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Label_Number2, &ui_font_Small, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Label_Number3 = lv_label_create(ui_Group_Battery_Percent);
    lv_obj_set_width(ui_Label_Number3, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label_Number3, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Label_Number3, -29);
    lv_obj_set_y(ui_Label_Number3, lv_pct(50));
    lv_obj_set_align(ui_Label_Number3, LV_ALIGN_TOP_MID);
    lv_label_set_text(ui_Label_Number3, "50#94aeb4 %");
    lv_label_set_recolor(ui_Label_Number3, "true");
    lv_obj_set_style_text_color(ui_Label_Number3, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Label_Number3, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Label_Number3, &ui_font_Small, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Label_Number4 = lv_label_create(ui_Group_Battery_Percent);
    lv_obj_set_width(ui_Label_Number4, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label_Number4, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Label_Number4, -8);
    lv_obj_set_y(ui_Label_Number4, lv_pct(74));
    lv_obj_set_align(ui_Label_Number4, LV_ALIGN_TOP_MID);
    lv_label_set_text(ui_Label_Number4, "25#94aeb4 %");
    lv_label_set_recolor(ui_Label_Number4, "true");
    lv_obj_set_style_text_color(ui_Label_Number4, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Label_Number4, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Label_Number4, &ui_font_Small, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Label_Number5 = lv_label_create(ui_Group_Battery_Percent);
    lv_obj_set_width(ui_Label_Number5, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label_Number5, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Label_Number5, 27);
    lv_obj_set_y(ui_Label_Number5, lv_pct(94));
    lv_obj_set_align(ui_Label_Number5, LV_ALIGN_TOP_MID);
    lv_label_set_text(ui_Label_Number5, "0#94aeb4 %");
    lv_label_set_recolor(ui_Label_Number5, "true");
    lv_obj_set_style_text_color(ui_Label_Number5, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Label_Number5, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Label_Number5, &ui_font_Small, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Group_Header = lv_obj_create(ui_Driving);
    lv_obj_set_height(ui_Group_Header, 24);
    lv_obj_set_width(ui_Group_Header, lv_pct(100));
    lv_obj_set_align(ui_Group_Header, LV_ALIGN_TOP_MID);
    lv_obj_clear_flag(ui_Group_Header, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_Group_Header, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Group_Header, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui_Group_Header, 10, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui_Group_Header, 10, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui_Group_Header, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui_Group_Header, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Label_Time = lv_label_create(ui_Group_Header);
    lv_obj_set_width(ui_Label_Time, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label_Time, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Label_Time, -28);
    lv_obj_set_y(ui_Label_Time, 0);
    lv_obj_set_align(ui_Label_Time, LV_ALIGN_RIGHT_MID);
    lv_label_set_text(ui_Label_Time, "11:45");
    lv_obj_set_style_text_color(ui_Label_Time, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Label_Time, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Label_Time, &ui_font_Medium, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_LabeL_PM = lv_label_create(ui_Group_Header);
    lv_obj_set_width(ui_LabeL_PM, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_LabeL_PM, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_LabeL_PM, -7);
    lv_obj_set_y(ui_LabeL_PM, 0);
    lv_obj_set_align(ui_LabeL_PM, LV_ALIGN_RIGHT_MID);
    lv_label_set_text(ui_LabeL_PM, "PM");
    lv_obj_set_style_text_color(ui_LabeL_PM, lv_color_hex(0x94AEB4), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_LabeL_PM, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_LabeL_PM, &ui_font_Small, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Label_Temp = lv_label_create(ui_Group_Header);
    lv_obj_set_width(ui_Label_Temp, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label_Temp, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Label_Temp, -100);
    lv_obj_set_y(ui_Label_Temp, 0);
    lv_obj_set_align(ui_Label_Temp, LV_ALIGN_RIGHT_MID);
    lv_label_set_text(ui_Label_Temp, "+24.7");
    lv_obj_set_style_text_color(ui_Label_Temp, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Label_Temp, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Label_Temp, &ui_font_Medium, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Label_Celsius = lv_label_create(ui_Group_Header);
    lv_obj_set_width(ui_Label_Celsius, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label_Celsius, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Label_Celsius, -84);
    lv_obj_set_y(ui_Label_Celsius, 0);
    lv_obj_set_align(ui_Label_Celsius, LV_ALIGN_RIGHT_MID);
    lv_label_set_text(ui_Label_Celsius, "°C");
    lv_obj_set_style_text_color(ui_Label_Celsius, lv_color_hex(0x94AEB4), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Label_Celsius, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Label_Celsius, &ui_font_Small, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Label_Battery = lv_label_create(ui_Group_Header);
    lv_obj_set_width(ui_Label_Battery, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label_Battery, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_Label_Battery, LV_ALIGN_LEFT_MID);
    lv_label_set_text(ui_Label_Battery, "Battery");
    lv_obj_set_style_text_color(ui_Label_Battery, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Label_Battery, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Label_Battery, &ui_font_Medium, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Group_Footer = lv_obj_create(ui_Driving);
    lv_obj_set_height(ui_Group_Footer, 40);
    lv_obj_set_width(ui_Group_Footer, lv_pct(100));
    lv_obj_set_align(ui_Group_Footer, LV_ALIGN_BOTTOM_MID);
    lv_obj_clear_flag(ui_Group_Footer, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_Group_Footer, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Group_Footer, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Image_Battery_icon = lv_img_create(ui_Group_Footer);
    lv_img_set_src(ui_Image_Battery_icon, &ui_img_icn_flash_png);
    lv_obj_set_width(ui_Image_Battery_icon, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Image_Battery_icon, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Image_Battery_icon, 13);
    lv_obj_set_y(ui_Image_Battery_icon, 6);
    lv_obj_set_align(ui_Image_Battery_icon, LV_ALIGN_LEFT_MID);
    lv_obj_add_flag(ui_Image_Battery_icon, LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_Image_Battery_icon, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_Label_Battery_Number = lv_label_create(ui_Group_Footer);
    lv_obj_set_width(ui_Label_Battery_Number, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label_Battery_Number, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Label_Battery_Number, -424);
    lv_obj_set_y(ui_Label_Battery_Number, 7);
    lv_obj_set_align(ui_Label_Battery_Number, LV_ALIGN_RIGHT_MID);
    lv_label_set_text(ui_Label_Battery_Number, "100");
    lv_obj_set_style_text_color(ui_Label_Battery_Number, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Label_Battery_Number, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui_Label_Battery_Number, LV_TEXT_ALIGN_RIGHT, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Label_Battery_Number, &ui_font_Big, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Label_Battery_Percent = lv_label_create(ui_Group_Footer);
    lv_obj_set_width(ui_Label_Battery_Percent, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label_Battery_Percent, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Label_Battery_Percent, 58);
    lv_obj_set_y(ui_Label_Battery_Percent, 4);
    lv_obj_set_align(ui_Label_Battery_Percent, LV_ALIGN_LEFT_MID);
    lv_label_set_text(ui_Label_Battery_Percent, "%");
    lv_obj_set_style_text_color(ui_Label_Battery_Percent, lv_color_hex(0x94AEB4), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Label_Battery_Percent, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Label_Battery_Percent, &ui_font_Medium, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Button_Group = lv_obj_create(ui_Group_Footer);
    lv_obj_set_width(ui_Button_Group, 236);
    lv_obj_set_height(ui_Button_Group, 50);
    lv_obj_set_align(ui_Button_Group, LV_ALIGN_RIGHT_MID);
    lv_obj_clear_flag(ui_Button_Group, LV_OBJ_FLAG_CLICKABLE | LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_Button_Group, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Button_Group, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_BTN_Driving = lv_obj_create(ui_Button_Group);
    lv_obj_set_height(ui_BTN_Driving, 40);
    lv_obj_set_width(ui_BTN_Driving, lv_pct(40));
    lv_obj_set_align(ui_BTN_Driving, LV_ALIGN_LEFT_MID);
    lv_obj_clear_flag(ui_BTN_Driving, LV_OBJ_FLAG_CLICKABLE | LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_BTN_Driving, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_BTN_Driving, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_BTN_BG1 = lv_img_create(ui_BTN_Driving);
    lv_img_set_src(ui_BTN_BG1, &ui_img_menu_on_png);
    lv_obj_set_width(ui_BTN_BG1, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_BTN_BG1, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_BTN_BG1, 0);
    lv_obj_set_y(ui_BTN_BG1, 1);
    lv_obj_set_align(ui_BTN_BG1, LV_ALIGN_CENTER);
    lv_obj_add_state(ui_BTN_BG1, LV_STATE_CHECKED);       /// States
    lv_obj_add_flag(ui_BTN_BG1, LV_OBJ_FLAG_CLICKABLE | LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_BTN_BG1, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_blend_mode(ui_BTN_BG1, LV_BLEND_MODE_ADDITIVE, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_opa(ui_BTN_BG1, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_opa(ui_BTN_BG1, 255, LV_PART_MAIN | LV_STATE_CHECKED);

    ui_ICN_Driving = lv_img_create(ui_BTN_Driving);
    lv_img_set_src(ui_ICN_Driving, &ui_img_icn_bike_png);
    lv_obj_set_width(ui_ICN_Driving, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_ICN_Driving, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_ICN_Driving, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_ICN_Driving, LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_ICN_Driving, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_BTN_Battery = lv_obj_create(ui_Button_Group);
    lv_obj_set_height(ui_BTN_Battery, 40);
    lv_obj_set_width(ui_BTN_Battery, lv_pct(40));
    lv_obj_set_align(ui_BTN_Battery, LV_ALIGN_CENTER);
    lv_obj_clear_flag(ui_BTN_Battery, LV_OBJ_FLAG_CLICKABLE | LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_BTN_Battery, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_BTN_Battery, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_BTN_BG2 = lv_img_create(ui_BTN_Battery);
    lv_img_set_src(ui_BTN_BG2, &ui_img_menu_on_png);
    lv_obj_set_width(ui_BTN_BG2, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_BTN_BG2, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_BTN_BG2, 0);
    lv_obj_set_y(ui_BTN_BG2, 1);
    lv_obj_set_align(ui_BTN_BG2, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_BTN_BG2, LV_OBJ_FLAG_CLICKABLE | LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_BTN_BG2, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_blend_mode(ui_BTN_BG2, LV_BLEND_MODE_ADDITIVE, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_opa(ui_BTN_BG2, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_opa(ui_BTN_BG2, 255, LV_PART_MAIN | LV_STATE_CHECKED);

    ui_ICN_Battery = lv_img_create(ui_BTN_Battery);
    lv_img_set_src(ui_ICN_Battery, &ui_img_icn_battery_png);
    lv_obj_set_width(ui_ICN_Battery, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_ICN_Battery, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_ICN_Battery, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_ICN_Battery, LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_ICN_Battery, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_BTN_Lock = lv_obj_create(ui_Button_Group);
    lv_obj_set_height(ui_BTN_Lock, 40);
    lv_obj_set_width(ui_BTN_Lock, lv_pct(40));
    lv_obj_set_align(ui_BTN_Lock, LV_ALIGN_RIGHT_MID);
    lv_obj_clear_flag(ui_BTN_Lock, LV_OBJ_FLAG_CLICKABLE | LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_BTN_Lock, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_BTN_Lock, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_BTN_BG3 = lv_img_create(ui_BTN_Lock);
    lv_img_set_src(ui_BTN_BG3, &ui_img_menu_on_png);
    lv_obj_set_width(ui_BTN_BG3, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_BTN_BG3, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_BTN_BG3, 0);
    lv_obj_set_y(ui_BTN_BG3, 1);
    lv_obj_set_align(ui_BTN_BG3, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_BTN_BG3, LV_OBJ_FLAG_CLICKABLE | LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_BTN_BG3, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_blend_mode(ui_BTN_BG3, LV_BLEND_MODE_ADDITIVE, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_opa(ui_BTN_BG3, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_opa(ui_BTN_BG3, 255, LV_PART_MAIN | LV_STATE_CHECKED);

    ui_ICN_Lock = lv_img_create(ui_BTN_Lock);
    lv_img_set_src(ui_ICN_Lock, &ui_img_icn_lock_png);
    lv_obj_set_width(ui_ICN_Lock, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_ICN_Lock, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_ICN_Lock, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_ICN_Lock, LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_ICN_Lock, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_Group_Driving = lv_obj_create(ui_Driving);
    lv_obj_set_width(ui_Group_Driving, 260);
    lv_obj_set_height(ui_Group_Driving, 200);
    lv_obj_set_x(ui_Group_Driving, 0);
    lv_obj_set_y(ui_Group_Driving, -10);
    lv_obj_set_align(ui_Group_Driving, LV_ALIGN_RIGHT_MID);
    lv_obj_clear_flag(ui_Group_Driving, LV_OBJ_FLAG_CLICKABLE | LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_Group_Driving, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Group_Driving, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Group_Title = lv_obj_create(ui_Group_Driving);
    lv_obj_set_width(ui_Group_Title, 260);
    lv_obj_set_height(ui_Group_Title, 46);
    lv_obj_set_align(ui_Group_Title, LV_ALIGN_TOP_RIGHT);
    lv_obj_clear_flag(ui_Group_Title, LV_OBJ_FLAG_CLICKABLE | LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_Group_Title, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Group_Title, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Title_BG = lv_img_create(ui_Group_Title);
    lv_img_set_src(ui_Title_BG, &ui_img_menu_line_png);
    lv_obj_set_width(ui_Title_BG, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Title_BG, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_Title_BG, LV_ALIGN_BOTTOM_RIGHT);
    lv_obj_add_flag(ui_Title_BG, LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_Title_BG, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_Label_Driving_Information = lv_label_create(ui_Group_Title);
    lv_obj_set_width(ui_Label_Driving_Information, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label_Driving_Information, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Label_Driving_Information, -19);
    lv_obj_set_y(ui_Label_Driving_Information, 0);
    lv_obj_set_align(ui_Label_Driving_Information, LV_ALIGN_RIGHT_MID);
    lv_label_set_text(ui_Label_Driving_Information, "Driving Information");
    lv_obj_set_style_text_color(ui_Label_Driving_Information, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Label_Driving_Information, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Label_Driving_Information, &ui_font_Medium, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Group_Content = lv_obj_create(ui_Group_Driving);
    lv_obj_set_width(ui_Group_Content, 200);
    lv_obj_set_height(ui_Group_Content, 154);
    lv_obj_set_align(ui_Group_Content, LV_ALIGN_BOTTOM_RIGHT);
    lv_obj_clear_flag(ui_Group_Content, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_Group_Content, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Group_Content, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui_Group_Content, 10, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui_Group_Content, 10, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui_Group_Content, 10, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui_Group_Content, 10, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Group_ODO = lv_obj_create(ui_Group_Content);
    lv_obj_set_width(ui_Group_ODO, 80);
    lv_obj_set_height(ui_Group_ODO, 40);
    lv_obj_set_align(ui_Group_ODO, LV_ALIGN_TOP_RIGHT);
    lv_obj_clear_flag(ui_Group_ODO, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_Group_ODO, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Group_ODO, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui_Group_ODO, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui_Group_ODO, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui_Group_ODO, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui_Group_ODO, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_LabeL_ODO = lv_label_create(ui_Group_ODO);
    lv_obj_set_width(ui_LabeL_ODO, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_LabeL_ODO, LV_SIZE_CONTENT);    /// 1
    lv_label_set_text(ui_LabeL_ODO, "ODO");
    lv_obj_set_style_text_color(ui_LabeL_ODO, lv_color_hex(0x94AEB4), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_LabeL_ODO, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_LabeL_ODO, &ui_font_Small, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Label_ODO_Number = lv_label_create(ui_Group_ODO);
    lv_obj_set_width(ui_Label_ODO_Number, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label_ODO_Number, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Label_ODO_Number, 2);
    lv_obj_set_y(ui_Label_ODO_Number, 6);
    lv_obj_set_align(ui_Label_ODO_Number, LV_ALIGN_LEFT_MID);
    lv_label_set_text(ui_Label_ODO_Number, "287.7");
    lv_obj_set_style_text_color(ui_Label_ODO_Number, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Label_ODO_Number, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Label_ODO_Number, &ui_font_Big, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Label_km1 = lv_label_create(ui_Group_ODO);
    lv_obj_set_width(ui_Label_km1, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label_km1, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Label_km1, -6);
    lv_obj_set_y(ui_Label_km1, -5);
    lv_obj_set_align(ui_Label_km1, LV_ALIGN_BOTTOM_RIGHT);
    lv_label_set_text(ui_Label_km1, "km");
    lv_obj_set_style_text_color(ui_Label_km1, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Label_km1, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Label_km1, &ui_font_Small, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Group_Trip = lv_obj_create(ui_Group_Content);
    lv_obj_set_width(ui_Group_Trip, 80);
    lv_obj_set_height(ui_Group_Trip, 40);
    lv_obj_clear_flag(ui_Group_Trip, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_Group_Trip, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Group_Trip, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui_Group_Trip, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui_Group_Trip, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui_Group_Trip, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui_Group_Trip, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Label_Trip = lv_label_create(ui_Group_Trip);
    lv_obj_set_width(ui_Label_Trip, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label_Trip, LV_SIZE_CONTENT);    /// 1
    lv_label_set_text(ui_Label_Trip, "TRIP");
    lv_obj_set_style_text_color(ui_Label_Trip, lv_color_hex(0x94AEB4), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Label_Trip, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Label_Trip, &ui_font_Small, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Label_Trip_Number = lv_label_create(ui_Group_Trip);
    lv_obj_set_width(ui_Label_Trip_Number, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label_Trip_Number, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Label_Trip_Number, 2);
    lv_obj_set_y(ui_Label_Trip_Number, 6);
    lv_obj_set_align(ui_Label_Trip_Number, LV_ALIGN_LEFT_MID);
    lv_label_set_text(ui_Label_Trip_Number, "18.6");
    lv_obj_set_style_text_color(ui_Label_Trip_Number, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Label_Trip_Number, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Label_Trip_Number, &ui_font_Big, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Label_km2 = lv_label_create(ui_Group_Trip);
    lv_obj_set_width(ui_Label_km2, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label_km2, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Label_km2, -20);
    lv_obj_set_y(ui_Label_km2, -5);
    lv_obj_set_align(ui_Label_km2, LV_ALIGN_BOTTOM_RIGHT);
    lv_label_set_text(ui_Label_km2, "km");
    lv_obj_set_style_text_color(ui_Label_km2, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Label_km2, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Label_km2, &ui_font_Small, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Group_Max_Speed = lv_obj_create(ui_Group_Content);
    lv_obj_set_width(ui_Group_Max_Speed, 80);
    lv_obj_set_height(ui_Group_Max_Speed, 40);
    lv_obj_set_align(ui_Group_Max_Speed, LV_ALIGN_RIGHT_MID);
    lv_obj_clear_flag(ui_Group_Max_Speed, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_Group_Max_Speed, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Group_Max_Speed, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui_Group_Max_Speed, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui_Group_Max_Speed, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui_Group_Max_Speed, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui_Group_Max_Speed, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Label_Max_Speed = lv_label_create(ui_Group_Max_Speed);
    lv_obj_set_width(ui_Label_Max_Speed, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label_Max_Speed, LV_SIZE_CONTENT);    /// 1
    lv_label_set_text(ui_Label_Max_Speed, "MAX. SPEED");
    lv_obj_set_style_text_color(ui_Label_Max_Speed, lv_color_hex(0x94AEB4), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Label_Max_Speed, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Label_Max_Speed, &ui_font_Small, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Label_Max_Speed_Number = lv_label_create(ui_Group_Max_Speed);
    lv_obj_set_width(ui_Label_Max_Speed_Number, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label_Max_Speed_Number, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Label_Max_Speed_Number, 2);
    lv_obj_set_y(ui_Label_Max_Speed_Number, 6);
    lv_obj_set_align(ui_Label_Max_Speed_Number, LV_ALIGN_LEFT_MID);
    lv_label_set_text(ui_Label_Max_Speed_Number, "42.7");
    lv_obj_set_style_text_color(ui_Label_Max_Speed_Number, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Label_Max_Speed_Number, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Label_Max_Speed_Number, &ui_font_Big, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Label_kmh2 = lv_label_create(ui_Group_Max_Speed);
    lv_obj_set_width(ui_Label_kmh2, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label_kmh2, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Label_kmh2, -6);
    lv_obj_set_y(ui_Label_kmh2, -5);
    lv_obj_set_align(ui_Label_kmh2, LV_ALIGN_BOTTOM_RIGHT);
    lv_label_set_text(ui_Label_kmh2, "km/h");
    lv_obj_set_style_text_color(ui_Label_kmh2, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Label_kmh2, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Label_kmh2, &ui_font_Small, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Group_AVG_Speed = lv_obj_create(ui_Group_Content);
    lv_obj_set_width(ui_Group_AVG_Speed, 80);
    lv_obj_set_height(ui_Group_AVG_Speed, 40);
    lv_obj_set_align(ui_Group_AVG_Speed, LV_ALIGN_LEFT_MID);
    lv_obj_clear_flag(ui_Group_AVG_Speed, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_Group_AVG_Speed, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Group_AVG_Speed, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui_Group_AVG_Speed, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui_Group_AVG_Speed, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui_Group_AVG_Speed, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui_Group_AVG_Speed, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Label_AVG_Speed = lv_label_create(ui_Group_AVG_Speed);
    lv_obj_set_width(ui_Label_AVG_Speed, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label_AVG_Speed, LV_SIZE_CONTENT);    /// 1
    lv_label_set_text(ui_Label_AVG_Speed, "AVG. SPEED");
    lv_obj_set_style_text_color(ui_Label_AVG_Speed, lv_color_hex(0x94AEB4), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Label_AVG_Speed, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Label_AVG_Speed, &ui_font_Small, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Label_AVG_Speed_Number = lv_label_create(ui_Group_AVG_Speed);
    lv_obj_set_width(ui_Label_AVG_Speed_Number, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label_AVG_Speed_Number, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Label_AVG_Speed_Number, 2);
    lv_obj_set_y(ui_Label_AVG_Speed_Number, 6);
    lv_obj_set_align(ui_Label_AVG_Speed_Number, LV_ALIGN_LEFT_MID);
    lv_label_set_text(ui_Label_AVG_Speed_Number, "18.3");
    lv_obj_set_style_text_color(ui_Label_AVG_Speed_Number, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Label_AVG_Speed_Number, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Label_AVG_Speed_Number, &ui_font_Big, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Label_kmh3 = lv_label_create(ui_Group_AVG_Speed);
    lv_obj_set_width(ui_Label_kmh3, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label_kmh3, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Label_kmh3, -6);
    lv_obj_set_y(ui_Label_kmh3, -5);
    lv_obj_set_align(ui_Label_kmh3, LV_ALIGN_BOTTOM_RIGHT);
    lv_label_set_text(ui_Label_kmh3, "km/h");
    lv_obj_set_style_text_color(ui_Label_kmh3, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Label_kmh3, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Label_kmh3, &ui_font_Small, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Group_ETA = lv_obj_create(ui_Group_Content);
    lv_obj_set_width(ui_Group_ETA, 80);
    lv_obj_set_height(ui_Group_ETA, 40);
    lv_obj_set_align(ui_Group_ETA, LV_ALIGN_BOTTOM_RIGHT);
    lv_obj_clear_flag(ui_Group_ETA, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_Group_ETA, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Group_ETA, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui_Group_ETA, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui_Group_ETA, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui_Group_ETA, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui_Group_ETA, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Label_ETA = lv_label_create(ui_Group_ETA);
    lv_obj_set_width(ui_Label_ETA, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label_ETA, LV_SIZE_CONTENT);    /// 1
    lv_label_set_text(ui_Label_ETA, "ETA");
    lv_obj_set_style_text_color(ui_Label_ETA, lv_color_hex(0x94AEB4), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Label_ETA, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Label_ETA, &ui_font_Small, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Label_ETA_Number = lv_label_create(ui_Group_ETA);
    lv_obj_set_width(ui_Label_ETA_Number, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label_ETA_Number, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Label_ETA_Number, 2);
    lv_obj_set_y(ui_Label_ETA_Number, 6);
    lv_obj_set_align(ui_Label_ETA_Number, LV_ALIGN_LEFT_MID);
    lv_label_set_text(ui_Label_ETA_Number, "01:20:45");
    lv_obj_set_style_text_color(ui_Label_ETA_Number, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Label_ETA_Number, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Label_ETA_Number, &ui_font_Big, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Group_Time = lv_obj_create(ui_Group_Content);
    lv_obj_set_width(ui_Group_Time, 80);
    lv_obj_set_height(ui_Group_Time, 40);
    lv_obj_set_align(ui_Group_Time, LV_ALIGN_BOTTOM_LEFT);
    lv_obj_clear_flag(ui_Group_Time, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_Group_Time, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Group_Time, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui_Group_Time, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui_Group_Time, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui_Group_Time, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui_Group_Time, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Label_Time1 = lv_label_create(ui_Group_Time);
    lv_obj_set_width(ui_Label_Time1, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label_Time1, LV_SIZE_CONTENT);    /// 1
    lv_label_set_text(ui_Label_Time1, "TIME");
    lv_obj_set_style_text_color(ui_Label_Time1, lv_color_hex(0x94AEB4), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Label_Time1, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Label_Time1, &ui_font_Small, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Label_Arrival_Time_Number1 = lv_label_create(ui_Group_Time);
    lv_obj_set_width(ui_Label_Arrival_Time_Number1, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label_Arrival_Time_Number1, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Label_Arrival_Time_Number1, 2);
    lv_obj_set_y(ui_Label_Arrival_Time_Number1, 6);
    lv_obj_set_align(ui_Label_Arrival_Time_Number1, LV_ALIGN_LEFT_MID);
    lv_label_set_text(ui_Label_Arrival_Time_Number1, "00:05:36");
    lv_obj_set_style_text_color(ui_Label_Arrival_Time_Number1, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Label_Arrival_Time_Number1, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Label_Arrival_Time_Number1, &ui_font_Big, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Group_Battery = lv_obj_create(ui_Driving);
    lv_obj_set_width(ui_Group_Battery, 260);
    lv_obj_set_height(ui_Group_Battery, 200);
    lv_obj_set_x(ui_Group_Battery, 0);
    lv_obj_set_y(ui_Group_Battery, -10);
    lv_obj_set_align(ui_Group_Battery, LV_ALIGN_RIGHT_MID);
    lv_obj_add_flag(ui_Group_Battery, LV_OBJ_FLAG_HIDDEN);     /// Flags
    lv_obj_clear_flag(ui_Group_Battery, LV_OBJ_FLAG_CLICKABLE | LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_Group_Battery, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Group_Battery, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Group_Title1 = lv_obj_create(ui_Group_Battery);
    lv_obj_set_width(ui_Group_Title1, 260);
    lv_obj_set_height(ui_Group_Title1, 46);
    lv_obj_set_align(ui_Group_Title1, LV_ALIGN_TOP_RIGHT);
    lv_obj_clear_flag(ui_Group_Title1, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_Group_Title1, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Group_Title1, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Title_BG1 = lv_img_create(ui_Group_Title1);
    lv_img_set_src(ui_Title_BG1, &ui_img_menu_line_png);
    lv_obj_set_width(ui_Title_BG1, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Title_BG1, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_Title_BG1, LV_ALIGN_BOTTOM_RIGHT);
    lv_obj_add_flag(ui_Title_BG1, LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_Title_BG1, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_Label_Battery_Information = lv_label_create(ui_Group_Title1);
    lv_obj_set_width(ui_Label_Battery_Information, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label_Battery_Information, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Label_Battery_Information, -19);
    lv_obj_set_y(ui_Label_Battery_Information, 0);
    lv_obj_set_align(ui_Label_Battery_Information, LV_ALIGN_RIGHT_MID);
    lv_label_set_text(ui_Label_Battery_Information, "Battery Information");
    lv_obj_set_style_text_color(ui_Label_Battery_Information, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Label_Battery_Information, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Label_Battery_Information, &ui_font_Medium, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Group_Content1 = lv_obj_create(ui_Group_Battery);
    lv_obj_set_width(ui_Group_Content1, 200);
    lv_obj_set_height(ui_Group_Content1, 154);
    lv_obj_set_align(ui_Group_Content1, LV_ALIGN_BOTTOM_RIGHT);
    lv_obj_clear_flag(ui_Group_Content1, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_Group_Content1, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Group_Content1, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui_Group_Content1, 10, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui_Group_Content1, 10, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui_Group_Content1, 10, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui_Group_Content1, 10, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Group_Charging = lv_obj_create(ui_Group_Content1);
    lv_obj_set_width(ui_Group_Charging, 80);
    lv_obj_set_height(ui_Group_Charging, 40);
    lv_obj_set_align(ui_Group_Charging, LV_ALIGN_TOP_RIGHT);
    lv_obj_clear_flag(ui_Group_Charging, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_Group_Charging, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Group_Charging, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui_Group_Charging, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui_Group_Charging, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui_Group_Charging, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui_Group_Charging, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_LabeL_Charging = lv_label_create(ui_Group_Charging);
    lv_obj_set_width(ui_LabeL_Charging, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_LabeL_Charging, LV_SIZE_CONTENT);    /// 1
    lv_label_set_text(ui_LabeL_Charging, "CHARGING");
    lv_obj_set_style_text_color(ui_LabeL_Charging, lv_color_hex(0x94AEB4), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_LabeL_Charging, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_LabeL_Charging, &ui_font_Small, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Label_Charging_Number = lv_label_create(ui_Group_Charging);
    lv_obj_set_width(ui_Label_Charging_Number, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label_Charging_Number, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Label_Charging_Number, 2);
    lv_obj_set_y(ui_Label_Charging_Number, 6);
    lv_obj_set_align(ui_Label_Charging_Number, LV_ALIGN_LEFT_MID);
    lv_label_set_text(ui_Label_Charging_Number, "37");
    lv_obj_set_style_text_color(ui_Label_Charging_Number, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Label_Charging_Number, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Label_Charging_Number, &ui_font_Big, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Label_Percent1 = lv_label_create(ui_Group_Charging);
    lv_obj_set_width(ui_Label_Percent1, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label_Percent1, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Label_Percent1, -44);
    lv_obj_set_y(ui_Label_Percent1, -5);
    lv_obj_set_align(ui_Label_Percent1, LV_ALIGN_BOTTOM_RIGHT);
    lv_label_set_text(ui_Label_Percent1, "%");
    lv_obj_set_style_text_color(ui_Label_Percent1, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Label_Percent1, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Label_Percent1, &ui_font_Small, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Group_Distance = lv_obj_create(ui_Group_Content1);
    lv_obj_set_width(ui_Group_Distance, 80);
    lv_obj_set_height(ui_Group_Distance, 40);
    lv_obj_set_align(ui_Group_Distance, LV_ALIGN_RIGHT_MID);
    lv_obj_clear_flag(ui_Group_Distance, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_Group_Distance, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Group_Distance, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui_Group_Distance, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui_Group_Distance, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui_Group_Distance, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui_Group_Distance, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Label_Distance = lv_label_create(ui_Group_Distance);
    lv_obj_set_width(ui_Label_Distance, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label_Distance, LV_SIZE_CONTENT);    /// 1
    lv_label_set_text(ui_Label_Distance, "DISTANCE");
    lv_obj_set_style_text_color(ui_Label_Distance, lv_color_hex(0x94AEB4), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Label_Distance, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Label_Distance, &ui_font_Small, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Label_Distance_Number = lv_label_create(ui_Group_Distance);
    lv_obj_set_width(ui_Label_Distance_Number, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label_Distance_Number, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Label_Distance_Number, 2);
    lv_obj_set_y(ui_Label_Distance_Number, 6);
    lv_obj_set_align(ui_Label_Distance_Number, LV_ALIGN_LEFT_MID);
    lv_label_set_text(ui_Label_Distance_Number, "84.5");
    lv_obj_set_style_text_color(ui_Label_Distance_Number, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Label_Distance_Number, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Label_Distance_Number, &ui_font_Big, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Label_km4 = lv_label_create(ui_Group_Distance);
    lv_obj_set_width(ui_Label_km4, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label_km4, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Label_km4, -15);
    lv_obj_set_y(ui_Label_km4, -5);
    lv_obj_set_align(ui_Label_km4, LV_ALIGN_BOTTOM_RIGHT);
    lv_label_set_text(ui_Label_km4, "km");
    lv_obj_set_style_text_color(ui_Label_km4, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Label_km4, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Label_km4, &ui_font_Small, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Group_Complete = lv_obj_create(ui_Group_Content1);
    lv_obj_set_width(ui_Group_Complete, 80);
    lv_obj_set_height(ui_Group_Complete, 40);
    lv_obj_set_align(ui_Group_Complete, LV_ALIGN_BOTTOM_RIGHT);
    lv_obj_clear_flag(ui_Group_Complete, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_Group_Complete, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Group_Complete, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui_Group_Complete, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui_Group_Complete, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui_Group_Complete, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui_Group_Complete, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Label_Complete = lv_label_create(ui_Group_Complete);
    lv_obj_set_width(ui_Label_Complete, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label_Complete, LV_SIZE_CONTENT);    /// 1
    lv_label_set_text(ui_Label_Complete, "COMPLETE");
    lv_obj_set_style_text_color(ui_Label_Complete, lv_color_hex(0x94AEB4), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Label_Complete, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Label_Complete, &ui_font_Small, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Label_Complete_Number = lv_label_create(ui_Group_Complete);
    lv_obj_set_width(ui_Label_Complete_Number, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label_Complete_Number, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Label_Complete_Number, 2);
    lv_obj_set_y(ui_Label_Complete_Number, 6);
    lv_obj_set_align(ui_Label_Complete_Number, LV_ALIGN_LEFT_MID);
    lv_label_set_text(ui_Label_Complete_Number, "42");
    lv_obj_set_style_text_color(ui_Label_Complete_Number, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Label_Complete_Number, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Label_Complete_Number, &ui_font_Big, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Label_Mins = lv_label_create(ui_Group_Complete);
    lv_obj_set_width(ui_Label_Mins, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label_Mins, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Label_Mins, -21);
    lv_obj_set_y(ui_Label_Mins, -5);
    lv_obj_set_align(ui_Label_Mins, LV_ALIGN_BOTTOM_RIGHT);
    lv_label_set_text(ui_Label_Mins, "mins");
    lv_obj_set_style_text_color(ui_Label_Mins, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Label_Mins, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Label_Mins, &ui_font_Small, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Group_Battery_Indicator = lv_obj_create(ui_Group_Content1);
    lv_obj_set_width(ui_Group_Battery_Indicator, 100);
    lv_obj_set_height(ui_Group_Battery_Indicator, lv_pct(115));
    lv_obj_set_align(ui_Group_Battery_Indicator, LV_ALIGN_LEFT_MID);
    lv_obj_clear_flag(ui_Group_Battery_Indicator, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_Group_Battery_Indicator, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Group_Battery_Indicator, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Particle_Group = lv_obj_create(ui_Group_Battery_Indicator);
    lv_obj_set_width(ui_Particle_Group, 50);
    lv_obj_set_height(ui_Particle_Group, 120);
    lv_obj_set_align(ui_Particle_Group, LV_ALIGN_CENTER);
    lv_obj_clear_flag(ui_Particle_Group, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_radius(ui_Particle_Group, 5, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_Particle_Group, lv_color_hex(0x202420), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Particle_Group, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_clip_corner(ui_Particle_Group, true, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Image_Particle1 = lv_img_create(ui_Particle_Group);
    lv_img_set_src(ui_Image_Particle1, &ui_img_particle_1_png);
    lv_obj_set_height(ui_Image_Particle1, 240);
    lv_obj_set_width(ui_Image_Particle1, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_align(ui_Image_Particle1, LV_ALIGN_TOP_MID);
    lv_obj_add_flag(ui_Image_Particle1, LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_Image_Particle1, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_blend_mode(ui_Image_Particle1, LV_BLEND_MODE_ADDITIVE, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Wave_Group = lv_obj_create(ui_Group_Battery_Indicator);
    lv_obj_set_width(ui_Wave_Group, 50);
    lv_obj_set_height(ui_Wave_Group, 120);
    lv_obj_set_align(ui_Wave_Group, LV_ALIGN_CENTER);
    lv_obj_clear_flag(ui_Wave_Group, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_radius(ui_Wave_Group, 5, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_Wave_Group, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Wave_Group, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_clip_corner(ui_Wave_Group, true, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Wave1 = lv_img_create(ui_Wave_Group);
    lv_img_set_src(ui_Wave1, &ui_img_water_2_png);
    lv_obj_set_width(ui_Wave1, 206);
    lv_obj_set_height(ui_Wave1, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Wave1, 0);
    lv_obj_set_y(ui_Wave1, 66);
    lv_obj_set_align(ui_Wave1, LV_ALIGN_TOP_RIGHT);
    lv_obj_add_flag(ui_Wave1, LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_Wave1, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_Image_Particle2 = lv_img_create(ui_Wave_Group);
    lv_img_set_src(ui_Image_Particle2, &ui_img_particle_3_png);
    lv_obj_set_height(ui_Image_Particle2, 240);
    lv_obj_set_width(ui_Image_Particle2, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_align(ui_Image_Particle2, LV_ALIGN_TOP_MID);
    lv_obj_add_flag(ui_Image_Particle2, LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_Image_Particle2, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_blend_mode(ui_Image_Particle2, LV_BLEND_MODE_ADDITIVE, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Wave2 = lv_img_create(ui_Wave_Group);
    lv_img_set_src(ui_Wave2, &ui_img_water_1_png);
    lv_obj_set_width(ui_Wave2, 206);
    lv_obj_set_height(ui_Wave2, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Wave2, 0);
    lv_obj_set_y(ui_Wave2, 70);
    lv_obj_add_flag(ui_Wave2, LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_Wave2, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_Image_Particle3 = lv_img_create(ui_Wave_Group);
    lv_img_set_src(ui_Image_Particle3, &ui_img_particle_2_png);
    lv_obj_set_height(ui_Image_Particle3, 240);
    lv_obj_set_width(ui_Image_Particle3, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_x(ui_Image_Particle3, 3);
    lv_obj_set_y(ui_Image_Particle3, 0);
    lv_obj_set_align(ui_Image_Particle3, LV_ALIGN_TOP_MID);
    lv_obj_add_flag(ui_Image_Particle3, LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_Image_Particle3, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_blend_mode(ui_Image_Particle3, LV_BLEND_MODE_ADDITIVE, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Image_Battery_BG = lv_img_create(ui_Group_Battery_Indicator);
    lv_img_set_src(ui_Image_Battery_BG, &ui_img_battery_bg_png);
    lv_obj_set_width(ui_Image_Battery_BG, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Image_Battery_BG, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_Image_Battery_BG, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_Image_Battery_BG, LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_Image_Battery_BG, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_radius(ui_Image_Battery_BG, 10, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_color(ui_Image_Battery_BG, lv_color_hex(0x438DB5), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_opa(ui_Image_Battery_BG, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui_Image_Battery_BG, 50, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_spread(ui_Image_Battery_BG, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Image_Flash = lv_img_create(ui_Group_Battery_Indicator);
    lv_img_set_src(ui_Image_Flash, &ui_img_icn_charge_png);
    lv_obj_set_width(ui_Image_Flash, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Image_Flash, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Image_Flash, -13);
    lv_obj_set_y(ui_Image_Flash, 0);
    lv_obj_set_align(ui_Image_Flash, LV_ALIGN_RIGHT_MID);
    lv_obj_add_flag(ui_Image_Flash, LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_Image_Flash, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_Group_Pin = lv_obj_create(ui_Driving);
    lv_obj_set_width(ui_Group_Pin, 260);
    lv_obj_set_height(ui_Group_Pin, 200);
    lv_obj_set_x(ui_Group_Pin, 0);
    lv_obj_set_y(ui_Group_Pin, -10);
    lv_obj_set_align(ui_Group_Pin, LV_ALIGN_RIGHT_MID);
    lv_obj_add_flag(ui_Group_Pin, LV_OBJ_FLAG_HIDDEN);     /// Flags
    lv_obj_clear_flag(ui_Group_Pin, LV_OBJ_FLAG_CLICKABLE | LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_Group_Pin, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Group_Pin, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Group_Title2 = lv_obj_create(ui_Group_Pin);
    lv_obj_set_width(ui_Group_Title2, 260);
    lv_obj_set_height(ui_Group_Title2, 46);
    lv_obj_set_align(ui_Group_Title2, LV_ALIGN_TOP_RIGHT);
    lv_obj_clear_flag(ui_Group_Title2, LV_OBJ_FLAG_CLICKABLE | LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_Group_Title2, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Group_Title2, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Title_BG2 = lv_img_create(ui_Group_Title2);
    lv_img_set_src(ui_Title_BG2, &ui_img_menu_line_png);
    lv_obj_set_width(ui_Title_BG2, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Title_BG2, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_Title_BG2, LV_ALIGN_BOTTOM_RIGHT);
    lv_obj_add_flag(ui_Title_BG2, LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_Title_BG2, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_Label_Unlock = lv_label_create(ui_Group_Title2);
    lv_obj_set_width(ui_Label_Unlock, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label_Unlock, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Label_Unlock, -34);
    lv_obj_set_y(ui_Label_Unlock, 0);
    lv_obj_set_align(ui_Label_Unlock, LV_ALIGN_RIGHT_MID);
    lv_label_set_text(ui_Label_Unlock, "Unlock Your Bike");
    lv_obj_set_style_text_color(ui_Label_Unlock, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Label_Unlock, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Label_Unlock, &ui_font_Medium, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Group_Pin1 = lv_obj_create(ui_Group_Pin);
    lv_obj_set_width(ui_Group_Pin1, 180);
    lv_obj_set_height(ui_Group_Pin1, 174);
    lv_obj_set_x(ui_Group_Pin1, -8);
    lv_obj_set_y(ui_Group_Pin1, 36);
    lv_obj_set_align(ui_Group_Pin1, LV_ALIGN_RIGHT_MID);
    lv_obj_clear_flag(ui_Group_Pin1, LV_OBJ_FLAG_CLICKABLE | LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_Group_Pin1, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Group_Pin1, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui_Group_Pin1, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui_Group_Pin1, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui_Group_Pin1, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui_Group_Pin1, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Button_Pin1 = lv_btn_create(ui_Group_Pin1);
    lv_obj_set_width(ui_Button_Pin1, 55);
    lv_obj_set_height(ui_Button_Pin1, 36);
    lv_obj_set_x(ui_Button_Pin1, -60);
    lv_obj_set_y(ui_Button_Pin1, 0);
    lv_obj_set_align(ui_Button_Pin1, LV_ALIGN_TOP_MID);
    lv_obj_add_flag(ui_Button_Pin1, LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags
    lv_obj_clear_flag(ui_Button_Pin1, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_Button_Pin1, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Button_Pin1, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_img_src(ui_Button_Pin1, &ui_img_pin_line_png, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Label_1 = lv_label_create(ui_Button_Pin1);
    lv_obj_set_width(ui_Label_1, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label_1, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_Label_1, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label_1, "1");
    lv_obj_set_style_text_color(ui_Label_1, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Label_1, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui_Label_1, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Label_1, &ui_font_Big, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Pin_Add1 = lv_img_create(ui_Button_Pin1);
    lv_img_set_src(ui_Pin_Add1, &ui_img_pin_on_png);
    lv_obj_set_width(ui_Pin_Add1, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Pin_Add1, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_Pin_Add1, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_Pin_Add1, LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_Pin_Add1, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_blend_mode(ui_Pin_Add1, LV_BLEND_MODE_ADDITIVE, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_opa(ui_Pin_Add1, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Button_Pin2 = lv_btn_create(ui_Group_Pin1);
    lv_obj_set_width(ui_Button_Pin2, 55);
    lv_obj_set_height(ui_Button_Pin2, 36);
    lv_obj_set_align(ui_Button_Pin2, LV_ALIGN_TOP_MID);
    lv_obj_add_flag(ui_Button_Pin2, LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags
    lv_obj_clear_flag(ui_Button_Pin2, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_Button_Pin2, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Button_Pin2, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_img_src(ui_Button_Pin2, &ui_img_pin_line_png, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Label_2 = lv_label_create(ui_Button_Pin2);
    lv_obj_set_width(ui_Label_2, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label_2, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_Label_2, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label_2, "2");
    lv_obj_set_style_text_color(ui_Label_2, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Label_2, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui_Label_2, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Label_2, &ui_font_Big, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Pin_Add2 = lv_img_create(ui_Button_Pin2);
    lv_img_set_src(ui_Pin_Add2, &ui_img_pin_on_png);
    lv_obj_set_width(ui_Pin_Add2, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Pin_Add2, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_Pin_Add2, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_Pin_Add2, LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_Pin_Add2, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_blend_mode(ui_Pin_Add2, LV_BLEND_MODE_ADDITIVE, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_opa(ui_Pin_Add2, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Button_Pin3 = lv_btn_create(ui_Group_Pin1);
    lv_obj_set_width(ui_Button_Pin3, 55);
    lv_obj_set_height(ui_Button_Pin3, 36);
    lv_obj_set_x(ui_Button_Pin3, 60);
    lv_obj_set_y(ui_Button_Pin3, 0);
    lv_obj_set_align(ui_Button_Pin3, LV_ALIGN_TOP_MID);
    lv_obj_add_flag(ui_Button_Pin3, LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags
    lv_obj_clear_flag(ui_Button_Pin3, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_Button_Pin3, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Button_Pin3, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_img_src(ui_Button_Pin3, &ui_img_pin_line_png, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Label_3 = lv_label_create(ui_Button_Pin3);
    lv_obj_set_width(ui_Label_3, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label_3, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_Label_3, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label_3, "3");
    lv_obj_set_style_text_color(ui_Label_3, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Label_3, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui_Label_3, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Label_3, &ui_font_Big, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Pin_Add3 = lv_img_create(ui_Button_Pin3);
    lv_img_set_src(ui_Pin_Add3, &ui_img_pin_on_png);
    lv_obj_set_width(ui_Pin_Add3, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Pin_Add3, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_Pin_Add3, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_Pin_Add3, LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_Pin_Add3, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_blend_mode(ui_Pin_Add3, LV_BLEND_MODE_ADDITIVE, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_opa(ui_Pin_Add3, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Button_Pin4 = lv_btn_create(ui_Group_Pin1);
    lv_obj_set_width(ui_Button_Pin4, 55);
    lv_obj_set_height(ui_Button_Pin4, 36);
    lv_obj_set_x(ui_Button_Pin4, -60);
    lv_obj_set_y(ui_Button_Pin4, 36);
    lv_obj_set_align(ui_Button_Pin4, LV_ALIGN_TOP_MID);
    lv_obj_add_flag(ui_Button_Pin4, LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags
    lv_obj_clear_flag(ui_Button_Pin4, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_Button_Pin4, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Button_Pin4, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_img_src(ui_Button_Pin4, &ui_img_pin_line_png, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Label_4 = lv_label_create(ui_Button_Pin4);
    lv_obj_set_width(ui_Label_4, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label_4, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_Label_4, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label_4, "4");
    lv_obj_set_style_text_color(ui_Label_4, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Label_4, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui_Label_4, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Label_4, &ui_font_Big, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Pin_Add4 = lv_img_create(ui_Button_Pin4);
    lv_img_set_src(ui_Pin_Add4, &ui_img_pin_on_png);
    lv_obj_set_width(ui_Pin_Add4, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Pin_Add4, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_Pin_Add4, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_Pin_Add4, LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_Pin_Add4, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_blend_mode(ui_Pin_Add4, LV_BLEND_MODE_ADDITIVE, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_opa(ui_Pin_Add4, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Button_Pin5 = lv_btn_create(ui_Group_Pin1);
    lv_obj_set_width(ui_Button_Pin5, 55);
    lv_obj_set_height(ui_Button_Pin5, 36);
    lv_obj_set_x(ui_Button_Pin5, 0);
    lv_obj_set_y(ui_Button_Pin5, 36);
    lv_obj_set_align(ui_Button_Pin5, LV_ALIGN_TOP_MID);
    lv_obj_add_flag(ui_Button_Pin5, LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags
    lv_obj_clear_flag(ui_Button_Pin5, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_Button_Pin5, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Button_Pin5, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_img_src(ui_Button_Pin5, &ui_img_pin_line_png, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Label_5 = lv_label_create(ui_Button_Pin5);
    lv_obj_set_width(ui_Label_5, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label_5, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_Label_5, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label_5, "5");
    lv_obj_set_style_text_color(ui_Label_5, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Label_5, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui_Label_5, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Label_5, &ui_font_Big, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Pin_Add5 = lv_img_create(ui_Button_Pin5);
    lv_img_set_src(ui_Pin_Add5, &ui_img_pin_on_png);
    lv_obj_set_width(ui_Pin_Add5, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Pin_Add5, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_Pin_Add5, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_Pin_Add5, LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_Pin_Add5, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_blend_mode(ui_Pin_Add5, LV_BLEND_MODE_ADDITIVE, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_opa(ui_Pin_Add5, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Button_Pin6 = lv_btn_create(ui_Group_Pin1);
    lv_obj_set_width(ui_Button_Pin6, 55);
    lv_obj_set_height(ui_Button_Pin6, 36);
    lv_obj_set_x(ui_Button_Pin6, 60);
    lv_obj_set_y(ui_Button_Pin6, 36);
    lv_obj_set_align(ui_Button_Pin6, LV_ALIGN_TOP_MID);
    lv_obj_add_flag(ui_Button_Pin6, LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags
    lv_obj_clear_flag(ui_Button_Pin6, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_Button_Pin6, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Button_Pin6, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_img_src(ui_Button_Pin6, &ui_img_pin_line_png, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Label_6 = lv_label_create(ui_Button_Pin6);
    lv_obj_set_width(ui_Label_6, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label_6, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_Label_6, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label_6, "6");
    lv_obj_set_style_text_color(ui_Label_6, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Label_6, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui_Label_6, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Label_6, &ui_font_Big, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Pin_Add6 = lv_img_create(ui_Button_Pin6);
    lv_img_set_src(ui_Pin_Add6, &ui_img_pin_on_png);
    lv_obj_set_width(ui_Pin_Add6, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Pin_Add6, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_Pin_Add6, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_Pin_Add6, LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_Pin_Add6, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_blend_mode(ui_Pin_Add6, LV_BLEND_MODE_ADDITIVE, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_opa(ui_Pin_Add6, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Button_Pin7 = lv_btn_create(ui_Group_Pin1);
    lv_obj_set_width(ui_Button_Pin7, 55);
    lv_obj_set_height(ui_Button_Pin7, 36);
    lv_obj_set_x(ui_Button_Pin7, -60);
    lv_obj_set_y(ui_Button_Pin7, 72);
    lv_obj_set_align(ui_Button_Pin7, LV_ALIGN_TOP_MID);
    lv_obj_add_flag(ui_Button_Pin7, LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags
    lv_obj_clear_flag(ui_Button_Pin7, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_Button_Pin7, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Button_Pin7, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_img_src(ui_Button_Pin7, &ui_img_pin_line_png, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Label_7 = lv_label_create(ui_Button_Pin7);
    lv_obj_set_width(ui_Label_7, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label_7, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_Label_7, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label_7, "7");
    lv_obj_set_style_text_color(ui_Label_7, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Label_7, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui_Label_7, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Label_7, &ui_font_Big, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Pin_Add7 = lv_img_create(ui_Button_Pin7);
    lv_img_set_src(ui_Pin_Add7, &ui_img_pin_on_png);
    lv_obj_set_width(ui_Pin_Add7, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Pin_Add7, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_Pin_Add7, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_Pin_Add7, LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_Pin_Add7, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_blend_mode(ui_Pin_Add7, LV_BLEND_MODE_ADDITIVE, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_opa(ui_Pin_Add7, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Button_Pin8 = lv_btn_create(ui_Group_Pin1);
    lv_obj_set_width(ui_Button_Pin8, 55);
    lv_obj_set_height(ui_Button_Pin8, 36);
    lv_obj_set_x(ui_Button_Pin8, 0);
    lv_obj_set_y(ui_Button_Pin8, 72);
    lv_obj_set_align(ui_Button_Pin8, LV_ALIGN_TOP_MID);
    lv_obj_add_flag(ui_Button_Pin8, LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags
    lv_obj_clear_flag(ui_Button_Pin8, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_Button_Pin8, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Button_Pin8, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_img_src(ui_Button_Pin8, &ui_img_pin_line_png, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Label_8 = lv_label_create(ui_Button_Pin8);
    lv_obj_set_width(ui_Label_8, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label_8, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_Label_8, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label_8, "8");
    lv_obj_set_style_text_color(ui_Label_8, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Label_8, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui_Label_8, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Label_8, &ui_font_Big, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Pin_Add8 = lv_img_create(ui_Button_Pin8);
    lv_img_set_src(ui_Pin_Add8, &ui_img_pin_on_png);
    lv_obj_set_width(ui_Pin_Add8, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Pin_Add8, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_Pin_Add8, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_Pin_Add8, LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_Pin_Add8, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_blend_mode(ui_Pin_Add8, LV_BLEND_MODE_ADDITIVE, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_opa(ui_Pin_Add8, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Button_Pin9 = lv_btn_create(ui_Group_Pin1);
    lv_obj_set_width(ui_Button_Pin9, 55);
    lv_obj_set_height(ui_Button_Pin9, 36);
    lv_obj_set_x(ui_Button_Pin9, 60);
    lv_obj_set_y(ui_Button_Pin9, 72);
    lv_obj_set_align(ui_Button_Pin9, LV_ALIGN_TOP_MID);
    lv_obj_add_flag(ui_Button_Pin9, LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags
    lv_obj_clear_flag(ui_Button_Pin9, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_Button_Pin9, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Button_Pin9, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_img_src(ui_Button_Pin9, &ui_img_pin_line_png, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Label_9 = lv_label_create(ui_Button_Pin9);
    lv_obj_set_width(ui_Label_9, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label_9, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_Label_9, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label_9, "9");
    lv_obj_set_style_text_color(ui_Label_9, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Label_9, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui_Label_9, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Label_9, &ui_font_Big, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Pin_Add9 = lv_img_create(ui_Button_Pin9);
    lv_img_set_src(ui_Pin_Add9, &ui_img_pin_on_png);
    lv_obj_set_width(ui_Pin_Add9, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Pin_Add9, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_Pin_Add9, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_Pin_Add9, LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_Pin_Add9, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_blend_mode(ui_Pin_Add9, LV_BLEND_MODE_ADDITIVE, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_opa(ui_Pin_Add9, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Button_PinX = lv_btn_create(ui_Group_Pin1);
    lv_obj_set_width(ui_Button_PinX, 55);
    lv_obj_set_height(ui_Button_PinX, 36);
    lv_obj_set_x(ui_Button_PinX, -60);
    lv_obj_set_y(ui_Button_PinX, 108);
    lv_obj_set_align(ui_Button_PinX, LV_ALIGN_TOP_MID);
    lv_obj_add_flag(ui_Button_PinX, LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags
    lv_obj_clear_flag(ui_Button_PinX, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_Button_PinX, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Button_PinX, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_img_src(ui_Button_PinX, &ui_img_pin_line_png, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Pin_Add10 = lv_img_create(ui_Button_PinX);
    lv_img_set_src(ui_Pin_Add10, &ui_img_pin_on_png);
    lv_obj_set_width(ui_Pin_Add10, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Pin_Add10, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_Pin_Add10, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_Pin_Add10, LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_Pin_Add10, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_blend_mode(ui_Pin_Add10, LV_BLEND_MODE_ADDITIVE, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_opa(ui_Pin_Add10, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Image_X = lv_img_create(ui_Button_PinX);
    lv_img_set_src(ui_Image_X, &ui_img_icn_x_png);
    lv_obj_set_width(ui_Image_X, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Image_X, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_Image_X, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_Image_X, LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_Image_X, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_Button_Pin0 = lv_btn_create(ui_Group_Pin1);
    lv_obj_set_width(ui_Button_Pin0, 55);
    lv_obj_set_height(ui_Button_Pin0, 36);
    lv_obj_set_x(ui_Button_Pin0, 0);
    lv_obj_set_y(ui_Button_Pin0, 108);
    lv_obj_set_align(ui_Button_Pin0, LV_ALIGN_TOP_MID);
    lv_obj_add_flag(ui_Button_Pin0, LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags
    lv_obj_clear_flag(ui_Button_Pin0, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_Button_Pin0, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Button_Pin0, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_img_src(ui_Button_Pin0, &ui_img_pin_line_png, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Label_0 = lv_label_create(ui_Button_Pin0);
    lv_obj_set_width(ui_Label_0, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label_0, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_Label_0, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label_0, "0");
    lv_obj_set_style_text_color(ui_Label_0, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Label_0, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui_Label_0, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Label_0, &ui_font_Big, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Pin_Add11 = lv_img_create(ui_Button_Pin0);
    lv_img_set_src(ui_Pin_Add11, &ui_img_pin_on_png);
    lv_obj_set_width(ui_Pin_Add11, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Pin_Add11, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_Pin_Add11, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_Pin_Add11, LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_Pin_Add11, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_blend_mode(ui_Pin_Add11, LV_BLEND_MODE_ADDITIVE, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_opa(ui_Pin_Add11, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Button_PinX1 = lv_btn_create(ui_Group_Pin1);
    lv_obj_set_width(ui_Button_PinX1, 55);
    lv_obj_set_height(ui_Button_PinX1, 36);
    lv_obj_set_x(ui_Button_PinX1, 60);
    lv_obj_set_y(ui_Button_PinX1, 108);
    lv_obj_set_align(ui_Button_PinX1, LV_ALIGN_TOP_MID);
    lv_obj_add_flag(ui_Button_PinX1, LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags
    lv_obj_clear_flag(ui_Button_PinX1, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_Button_PinX1, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Button_PinX1, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_img_src(ui_Button_PinX1, &ui_img_pin_line_png, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Pin_Add12 = lv_img_create(ui_Button_PinX1);
    lv_img_set_src(ui_Pin_Add12, &ui_img_pin_on_png);
    lv_obj_set_width(ui_Pin_Add12, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Pin_Add12, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_Pin_Add12, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_Pin_Add12, LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_Pin_Add12, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_blend_mode(ui_Pin_Add12, LV_BLEND_MODE_ADDITIVE, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_opa(ui_Pin_Add12, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Image_Ok = lv_img_create(ui_Button_PinX1);
    lv_img_set_src(ui_Image_Ok, &ui_img_icn_ok_png);
    lv_obj_set_width(ui_Image_Ok, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Image_Ok, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_Image_Ok, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_Image_Ok, LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_Image_Ok, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    lv_obj_add_event_cb(ui_BTN_BG1, ui_event_BTN_BG1, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_BTN_BG2, ui_event_BTN_BG2, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_BTN_BG3, ui_event_BTN_BG3, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_Button_Pin1, ui_event_Button_Pin1, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_Button_Pin2, ui_event_Button_Pin2, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_Button_Pin3, ui_event_Button_Pin3, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_Button_Pin4, ui_event_Button_Pin4, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_Button_Pin5, ui_event_Button_Pin5, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_Button_Pin6, ui_event_Button_Pin6, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_Button_Pin7, ui_event_Button_Pin7, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_Button_Pin8, ui_event_Button_Pin8, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_Button_Pin9, ui_event_Button_Pin9, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_Button_PinX, ui_event_Button_PinX, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_Button_Pin0, ui_event_Button_Pin0, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_Button_PinX1, ui_event_Button_PinX1, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_Driving, ui_event_Driving, LV_EVENT_ALL, NULL);

}

void ui_init(void)
{
    lv_disp_t * dispp = lv_disp_get_default();
    lv_theme_t * theme = lv_theme_basic_init(dispp);
    lv_disp_set_theme(dispp, theme);
    ui_Driving_screen_init();
    lv_disp_load_scr(ui_Driving);
}
