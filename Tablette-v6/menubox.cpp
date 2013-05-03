#include "menubox.h"

MenuBox::MenuBox(QWidget *parent) :
    QComboBox(parent)
{
    setPalette( QPalette( Qt::blue ) );
}
