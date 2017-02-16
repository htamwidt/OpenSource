/****************************************************************************
**
** Copyright (C) 2014 Klaralvdalens Datakonsult AB (KDAB).
** Contact: https://www.qt.io/licensing/
**
** This file is part of the Qt3D module of the Qt Toolkit.
**
** $QT_BEGIN_LICENSE:LGPL$
** Commercial License Usage
** Licensees holding valid commercial Qt licenses may use this file in
** accordance with the commercial license agreement provided with the
** Software or, alternatively, in accordance with the terms contained in
** a written agreement between you and The Qt Company. For licensing terms
** and conditions see https://www.qt.io/terms-conditions. For further
** information use the contact form at https://www.qt.io/contact-us.
**
** GNU Lesser General Public License Usage
** Alternatively, this file may be used under the terms of the GNU Lesser
** General Public License version 3 as published by the Free Software
** Foundation and appearing in the file LICENSE.LGPL3 included in the
** packaging of this file. Please review the following information to
** ensure the GNU Lesser General Public License version 3 requirements
** will be met: https://www.gnu.org/licenses/lgpl-3.0.html.
**
** GNU General Public License Usage
** Alternatively, this file may be used under the terms of the GNU
** General Public License version 2.0 or (at your option) the GNU General
** Public license version 3 or any later version approved by the KDE Free
** Qt Foundation. The licenses are as published by the Free Software
** Foundation and appearing in the file LICENSE.GPL2 and LICENSE.GPL3
** included in the packaging of this file. Please review the following
** information to ensure the GNU General Public License requirements will
** be met: https://www.gnu.org/licenses/gpl-2.0.html and
** https://www.gnu.org/licenses/gpl-3.0.html.
**
** $QT_END_LICENSE$
**
****************************************************************************/

#ifndef QT3DRENDER_RENDER_QUICK_QUICK3DSHADERDATAARRAY_P_H
#define QT3DRENDER_RENDER_QUICK_QUICK3DSHADERDATAARRAY_P_H

//
//  W A R N I N G
//  -------------
//
// This file is not part of the Qt API.  It exists for the convenience
// of other Qt classes.  This header file may change from version to
// version without notice, or even be removed.
//
// We mean it.
//

#include <Qt3DCore/qnode.h>
#include <Qt3DQuickRender/private/qt3dquickrender_global_p.h>
#include <Qt3DQuickRender/private/quick3dshaderdata_p.h>
#include <QQmlListProperty>

QT_BEGIN_NAMESPACE

namespace Qt3DRender {

class QShaderData;

namespace Render {
namespace Quick {

class Quick3DShaderDataArrayPrivate;
class Quick3DShaderData;

class QT3DQUICKRENDERSHARED_PRIVATE_EXPORT Quick3DShaderDataArray : public Qt3DCore::QNode
{
    Q_OBJECT
    Q_PROPERTY(QQmlListProperty<Qt3DRender::QShaderData> values READ valuesList)
    Q_CLASSINFO("DefaultProperty", "values")

public:
    explicit Quick3DShaderDataArray(Qt3DCore::QNode *parent = 0);
    QQmlListProperty<QShaderData> valuesList();
    QVector<QShaderData *> values() const;

private:
    static void appendValue(QQmlListProperty<QShaderData> *list, QShaderData *bar);
    static QShaderData *valueAt(QQmlListProperty<QShaderData> *list, int index);
    static int valueCount(QQmlListProperty<QShaderData> *list);
    static void clearValues(QQmlListProperty<QShaderData> *list);
    Q_DECLARE_PRIVATE(Quick3DShaderDataArray)
};

} // namespace Quick
} // namespace Render
} // namespace Qt3DRender

QT_END_NAMESPACE

Q_DECLARE_METATYPE(Qt3DRender::Render::Quick::Quick3DShaderDataArray*)

#endif // QT3DRENDER_RENDER_QUICK_QUICK3DSHADERDATAARRAY_P_H
