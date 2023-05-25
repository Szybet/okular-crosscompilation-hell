/*
    Copyright (C) 2004, 2005, 2007, 2008 Nikolas Zimmermann <zimmermann@kde.org>
                  2004, 2005, 2006 Rob Buis <buis@kde.org>

    This file is part of the KDE project

    This library is free software; you can redistribute it and/or
    modify it under the terms of the GNU Library General Public
    License as published by the Free Software Foundation; either
    version 2 of the License, or (at your option) any later version.

    This library is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
    Library General Public License for more details.

    You should have received a copy of the GNU Library General Public License
    along with this library; see the file COPYING.LIB.  If not, write to
    the Free Software Foundation, Inc., 51 Franklin Street, Fifth Floor,
    Boston, MA 02110-1301, USA.
*/

#ifndef SVGClipPathElement_h
#define SVGClipPathElement_h

#if ENABLE(SVG)
#include "SVGResourceClipper.h"
#include "SVGExternalResourcesRequired.h"
#include "SVGLangSpace.h"
#include "SVGStyledTransformableElement.h"
#include "SVGTests.h"

namespace WebCore
{

class SVGClipPathElement : public SVGStyledTransformableElement,
    public SVGTests,
    public SVGLangSpace,
    public SVGExternalResourcesRequired
{
public:
    SVGClipPathElement(const QualifiedName &, Document *);
    virtual ~SVGClipPathElement();

    bool isValid() const override
    {
        return SVGTests::isValid();
    }
    bool rendererIsNeeded(RenderStyle *) override
    {
        return false;
    }

    void parseMappedAttribute(MappedAttribute *) override;
    void svgAttributeChanged(const QualifiedName &) override;
    using DOM::NodeImpl::childrenChanged;
    void childrenChanged(bool changedByParser = false, Node *beforeChange = nullptr, Node *afterChange = nullptr, int childCountDelta = 0) override;

    SVGResource *canvasResource() override;

    // KHTML ElementImpl pure virtual method
    quint32 id() const override
    {
        return SVGNames::clipPathTag.id();
    }
protected:
    const SVGElement *contextElement() const override
    {
        return this;
    }

private:
    ANIMATED_PROPERTY_FORWARD_DECLARATIONS(SVGExternalResourcesRequired, bool, ExternalResourcesRequired, externalResourcesRequired)

    ANIMATED_PROPERTY_DECLARATIONS(SVGClipPathElement, int, int, ClipPathUnits, clipPathUnits)

    RefPtr<SVGResourceClipper> m_clipper;
};

} // namespace WebCore

#endif // ENABLE(SVG)
#endif
