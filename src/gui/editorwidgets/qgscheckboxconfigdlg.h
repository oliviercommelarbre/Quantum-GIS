/***************************************************************************
    qgscheckboxconfigdlg.h
     --------------------------------------
    Date                 : 5.1.2014
    Copyright            : (C) 2014 Matthias Kuhn
    Email                : matthias dot kuhn at gmx dot ch
 ***************************************************************************
 *                                                                         *
 *   This program is free software; you can redistribute it and/or modify  *
 *   it under the terms of the GNU General Public License as published by  *
 *   the Free Software Foundation; either version 2 of the License, or     *
 *   (at your option) any later version.                                   *
 *                                                                         *
 ***************************************************************************/

#ifndef QGSCHECKBOXCONFIGDLG_H
#define QGSCHECKBOXCONFIGDLG_H

#include "ui_qgscheckboxconfigdlgbase.h"

#include "qgseditorconfigwidget.h"

class GUI_EXPORT QgsCheckBoxConfigDlg : public QgsEditorConfigWidget, private Ui::QgsCheckBoxConfigDlgBase
{
    Q_OBJECT

  public:
    explicit QgsCheckBoxConfigDlg( QgsVectorLayer* vl, int fieldIdx, QWidget *parent = 0 );

    // QgsEditorConfigWidget interface
  public:
    QgsEditorWidgetConfig config();
    void setConfig( const QgsEditorWidgetConfig& config );
};

#endif // QGSCHECKBOXCONFIGDLG_H