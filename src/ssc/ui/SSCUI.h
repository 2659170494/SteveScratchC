/* SSCUI.c/SSCUI.h
 * �����ṩ UI �Ĳ����ӿ�
 */

#ifndef HEADER_SSC_UI_SSCUI
#define HEADER_SSC_UI_SSCUI

#include "../../Libs.h"

#include "UIEvents.h"

GtkBuilder *ssc_ui_get_builder(void);
void ssc_ui_init(GError **err);

GtkWidget *ssc_ui_get_widget_main_window(void);
GtkWidget *ssc_ui_get_widget_menu_about(void);
GtkWidget *ssc_ui_get_widget_menu_open(void);

#endif // HEADER_SSC_UI_SSCUI
