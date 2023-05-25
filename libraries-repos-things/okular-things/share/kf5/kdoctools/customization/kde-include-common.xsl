<xsl:stylesheet xmlns:xsl="http://www.w3.org/1999/XSL/Transform"
		version="1.0">

   <xsl:import href="/home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/arm-kobo-linux-gnueabihf/sysroot/usr/share/xml/docbook/xsl-stylesheets-1.79.2/html/autoidx.xsl"/>
   <xsl:import href="/home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/arm-kobo-linux-gnueabihf/sysroot/usr/share/xml/docbook/xsl-stylesheets-1.79.2/html/chunk.xsl"/>

   <xsl:param name="l10n.xml" select="document('xsl/all-l10n.xml')"/>
   <xsl:param name="local.l10n.xml" select="document(concat('xsl/',/*/@lang,'.xml'))"/>

   <xsl:template name="generate.html.title"/>
</xsl:stylesheet>
