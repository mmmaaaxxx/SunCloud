#ifndef MENUBOX_H
#define MENUBOX_H

#include <QComboBox>

/**
 * @brief The MenuBox class Une QCOmboBox avec une couleur spécifiée pour les menus
 */
class MenuBox : public QComboBox
{
    Q_OBJECT
public:
    MenuBox(QWidget *parent = 0);

};

#endif // MENUBOX_H
