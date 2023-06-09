/*
 *  SPDX-FileCopyrightText: 2020 Arjen Hiemstra <ahiemstra@heimr.nl>
 *
 *  SPDX-License-Identifier: LGPL-2.0-or-later
 */

#pragma once

#include "shadowedrectanglematerial.h"

/**
 * A material rendering a rectangle with a shadow and a border.
 *
 * This material uses a distance field shader to render a rectangle with a
 * shadow below it, optionally with rounded corners and a border.
 */
class ShadowedBorderRectangleMaterial : public ShadowedRectangleMaterial
{
public:
    ShadowedBorderRectangleMaterial();

#if QT_VERSION < QT_VERSION_CHECK(6, 0, 0)
    QSGMaterialShader *createShader() const override;
#else
    QSGMaterialShader *createShader(QSGRendererInterface::RenderMode) const override;
#endif
    QSGMaterialType *type() const override;
    int compare(const QSGMaterial *other) const override;

    float borderWidth = 0.0;
    QColor borderColor = Qt::black;

    static QSGMaterialType staticType;
};

class ShadowedBorderRectangleShader : public ShadowedRectangleShader
{
public:
    ShadowedBorderRectangleShader(ShadowedRectangleMaterial::ShaderType shaderType);

#if QT_VERSION < QT_VERSION_CHECK(6, 0, 0)
    void initialize() override;
    void updateState(const QSGMaterialShader::RenderState &state, QSGMaterial *newMaterial, QSGMaterial *oldMaterial) override;

private:
    int m_borderWidthLocation = -1;
    int m_borderColorLocation = -1;
#else
    bool updateUniformData(QSGMaterialShader::RenderState &state, QSGMaterial *newMaterial, QSGMaterial *oldMaterial) override;
#endif
};
