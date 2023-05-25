// This file is generated by kconfig_compiler_kf5 from gssettings.kcfg.
// All changes you do to this file will be lost.

#include "gssettings.h"

#include <qglobal.h>
#include <QFile>

class GSSettingsHelper
{
  public:
    GSSettingsHelper() : q(nullptr) {}
    ~GSSettingsHelper() { delete q; q = nullptr; }
    GSSettingsHelper(const GSSettingsHelper&) = delete;
    GSSettingsHelper& operator=(const GSSettingsHelper&) = delete;
    GSSettings *q;
};
Q_GLOBAL_STATIC(GSSettingsHelper, s_globalGSSettings)
GSSettings *GSSettings::self()
{
  if (!s_globalGSSettings()->q) {
    new GSSettings;
    s_globalGSSettings()->q->read();
  }

  return s_globalGSSettings()->q;
}

GSSettings::GSSettings( )
  : KConfigSkeleton( QStringLiteral( "okular-generator-ghostscriptrc" ) )
{
  Q_ASSERT(!s_globalGSSettings()->q);
  s_globalGSSettings()->q = this;
  setCurrentGroup( QStringLiteral( "General" ) );

  KConfigSkeleton::ItemBool  *itemPlatformFonts;
  itemPlatformFonts = new KConfigSkeleton::ItemBool( currentGroup(), QStringLiteral( "PlatformFonts" ), mPlatformFonts, true );
  addItem( itemPlatformFonts, QStringLiteral( "PlatformFonts" ) );
}

GSSettings::~GSSettings()
{
  if (s_globalGSSettings.exists() && !s_globalGSSettings.isDestroyed()) {
    s_globalGSSettings()->q = nullptr;
  }
}

