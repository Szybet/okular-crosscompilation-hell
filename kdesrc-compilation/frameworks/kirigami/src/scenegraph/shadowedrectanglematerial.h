/*
 *  SPDX-FileCopyrightText: 2020 Arjen Hiemstra <ahiemstra@heimr.nl>
 *
 *  SPDX-License-Identifier: LGPL-2.0-or-later
 */

#pragma once

#include <QColor>
#include <QSGMaterial>
#include <QSGMaterialShader>

/**
 * A material rendering a rectangle with a shadow.
 *
 * This material uses a distance field shader to render a rectangle with a
 * shadow below it, optionally with rounded corners.
 */
class ShadowedRectangleMaterial : public QSGMaterial
{
public:
    enum class ShaderType {
        Standard,
        LowPower,
    };

    ShadowedRectangleMaterial();

#if QT_VERSION < QT_VERSION_CHECK(6, 0, 0)
    QSGMaterialShader *createShader() const override;
#else
    QSGMaterialShader *createShader(QSGRendererInterface::RenderMode) const override;
#endif
    QSGMaterialType *type() const override;
    int compare(const QSGMaterial *other) const override;

    QVector2D aspect = QVector2D{1.0, 1.0};
    float size = 0.0;
    QVector4D radius = QVector4D{0.0, 0.0, 0.0, 0.0};
    QColor color = Qt::white;
    QColor shadowColor = Qt::black;
    QVector2D offset;
    ShaderType shaderType = ShaderType::Standard;

    static QSGMaterialType staticType;
};

class ShadowedRectangleShader : public QSGMaterialShader
{
public:
    ShadowedRectangleShader(ShadowedRectangleMaterial::ShaderType shaderType);

#if QT_VERSION < QT_VERSION_CHECK(6, 0, 0)
    char const *const *attributeNames() const override;

    void initialize() override;
    void updateState(const QSGMaterialShader::RenderState &state, QSGMaterial *newMaterial, QSGMaterial *oldMaterial) override;
#else
    bool updateUniformData(QSGMaterialShader::RenderState &state, QSGMaterial *newMaterial, QSGMaterial *oldMaterial) override;
#endif

protected:
    void setShader(ShadowedRectangleMaterial::ShaderType shaderType, const QString &shader);

#if QT_VERSION < QT_VERSION_CHECK(6, 0, 0)
private:
    int m_matrixLocation = -1;
    int m_opacityLocation = -1;
    int m_aspectLocation = -1;
    int m_sizeLocation = -1;
    int m_radiusLocation = -1;
    int m_colorLocation = -1;
    int m_shadowColorLocation = -1;
    int m_offsetLocation = -1;
#endif
};
