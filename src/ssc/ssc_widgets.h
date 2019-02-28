#ifndef HEADER_SSC_SSC_WIDGETS
#define HEADER_SSC_SSC_WIDGETS

#include <gtk/gtk.h>
#include <cairo.h>
#include <glib/gi18n.h>
#include "../chineseEncode.h"
#include "../config.h"
#include "lua/commandBar.h"
#include "lua/lua.h"
#include "widget/topBarMenus.h"
#include "block/blockShape.h"
#include "widget/widgetEvents.h"
#include "scratch/PaletteBuilder.h"

/** ���ڴ����ڴ����Ⱥ��� */

typedef struct sscCompoments /**< ���ڴ�� SSC ������������Թ�����ģ��ʹ�� */
{
    int isInited; /**< �Ƿ��ʼ���ɹ� */
    GtkWidget* window; /**< ������� */
    GtkWidget* stage; /**< ��̨��� */
    cairo_surface_t* stageSketchPad; /**< ��̨������� */
    GtkWidget* luaConsole; /**< Lua ����̨��� */
    GtkWidget* commandBar; /**< Lua ָ������ */
    GtkWidget* overlay; /**< ���������������ʾ�϶����� */
    GtkWidget* overlayFix; /**< ����������������ڹ̶��϶����� */
    GtkWidget* spriteList; /**< ��ɫ�б� */
    GtkWidget* codeArea; /**< ������ */
    GtkBuilder* builder; /**< UI������� */
}sscCompoments;

/** \brief ��ʼ����������������䱾��
 *
 * \return ����һ���ṹ��������б�������
 *
 */
sscCompoments* ssc_widgets_get_compoments(void);
struct sscCompoments* ssc_widgets_init();
#endif // HEADER_SSC_SSC_WIDGETS
