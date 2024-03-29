/****************************************************************************
** Copyright (c) 2019 Evgeny Teterin (nayk) <sutcedortal@gmail.com>
** All right reserved.
**
** Permission is hereby granted, free of charge, to any person obtaining
** a copy of this software and associated documentation files (the
** "Software"), to deal in the Software without restriction, including
** without limitation the rights to use, copy, modify, merge, publish,
** distribute, sublicense, and/or sell copies of the Software, and to
** permit persons to whom the Software is furnished to do so, subject to
** the following conditions:
**
** The above copyright notice and this permission notice shall be
** included in all copies or substantial portions of the Software.
**
** THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,
** EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF
** MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND
** NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE
** LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION
** OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION
** WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
**
****************************************************************************/
#ifndef NAYK_GRAPH_H
#define NAYK_GRAPH_H

#include <QtCore>
#include <QWidget>
#include <QPainter>
#include <QImage>
#include <QColor>
#include <QRgb>
//=========================================================================================================
namespace nayk {
//=========================================================================================================

//=========================================================================================================
class Graph
{
public:
    static bool drawImage(QPainter* painter, const QString &fileName, double x, double y, double width, double height);
    static bool drawImage(QPainter* painter, const QString &fileName, const QRectF &rectF);
    static bool drawImage(QPainter* painter, const QImage &image, double x, double y, double width, double height);
    static bool drawImage(QPainter* painter, const QImage &image, const QRectF &rectF);
    static bool drawRectangle(QPainter* painter, double x, double y, double width, double height,
                              const QColor &bgColor, const QColor &borderColor, double borderWidth,
                              double topRadius, double bottomRadius);
    static bool drawRectangle(QPainter* painter, const QRectF &rect,
                              const QColor &bgColor, const QColor &borderColor, double borderWidth,
                              double topRadius, double bottomRadius);
    static bool drawRectangle(QPainter* painter, double x, double y, double width, double height,
                              const QJsonArray &bgColor, const QJsonArray &borderColor, double borderWidth,
                              double topRadius, double bottomRadius);
    static bool drawRectangle(QPainter* painter, const QRectF &rect,
                              const QJsonArray &bgColor, const QJsonArray &borderColor, double borderWidth,
                              double topRadius, double bottomRadius);
    static bool drawCircle(QPainter* painter, double x, double y, double radius,
                           const QColor &bgColor, const QColor &borderColor, double borderWidth );
    static bool drawCircle(QPainter* painter, double x, double y, double radius,
                           const QJsonArray &bgColor, const QJsonArray &borderColor, double borderWidth );
    static bool drawCircle(QPainter* painter, const QPointF &centerPoint, double radius,
                           const QColor &bgColor, const QColor &borderColor, double borderWidth );
    static bool drawCircle(QPainter* painter, const QPointF &centerPoint, double radius,
                           const QJsonArray &bgColor, const QJsonArray &borderColor, double borderWidth );
    static bool drawCircle(QPainter* painter, const QPoint &centerPoint, double radius,
                           const QJsonArray &bgColor, const QJsonArray &borderColor, double borderWidth );
    static bool drawCircle(QPainter* painter, const QPoint &centerPoint, double radius,
                           const QColor &bgColor, const QColor &borderColor, double borderWidth );
    static bool drawText(QPainter* painter, double x, double y, const QString &text,
                         const QString &fontFace, double fontSize, double fontWeight, const QColor &color,
                         Qt::Alignment align = Qt::AlignLeft | Qt::AlignTop, const QColor &shadowColor = QColor(0,0,0,0),
                         int shadow_cx = 0, int shadow_cy = 0);
    static bool drawText(QPainter* painter, double x, double y, const QString &text,
                         const QString &fontFace, double fontSize, double fontWeight, const QJsonArray &color,
                         Qt::Alignment align = Qt::AlignLeft | Qt::AlignTop, const QJsonArray &shadowColor = QJsonArray(),
                         int shadow_cx = 0, int shadow_cy = 0);
    static bool drawText(QPainter* painter, QPointF pos, const QString &text,
                         const QString &fontFace, double fontSize, double fontWeight, const QColor &color,
                         Qt::Alignment align = Qt::AlignLeft | Qt::AlignTop, const QColor &shadowColor = QColor(0,0,0,0),
                         int shadow_cx = 0, int shadow_cy = 0);
    static bool drawText(QPainter* painter, QPointF pos, const QString &text,
                         const QString &fontFace, double fontSize, double fontWeight, const QJsonArray &color,
                         Qt::Alignment align = Qt::AlignLeft | Qt::AlignTop, const QJsonArray &shadowColor = QJsonArray(),
                         int shadow_cx = 0, int shadow_cy = 0);

    static QColor colorFromArray(const QJsonArray &arr);
    static QColor colorFromArray(const QByteArray &arr);
    static QColor colorFromArray(const QVector<quint8> &arr);

    //
    Graph() = delete;
};

//=========================================================================================================
} // namespace nayk

//=========================================================================================================
#endif // NAYK_GRAPH_H
