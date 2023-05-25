#=============================================================================
# CMake - Cross Platform Makefile Generator
# SPDX-FileCopyrightText: 2000-2013 Kitware Inc., Insight Software Consortium
#
# SPDX-License-Identifier: BSD-3-Clause
#=============================================================================
import sys
import os
import re
import glob

sys.path.insert(0, r'/home/szybet/kdesrc/frameworks/extra-cmake-modules/docs/sphinx/ext')

source_suffix = '.rst'
master_doc = 'index'

project = 'Extra CMake Modules'
copyright = 'KDE Developers'
version = '5.107' # feature version
release = '5.107.0' # full version string

primary_domain = 'ecm'

exclude_patterns = []

extensions = ['ecm']

ecm_manuals = sorted(glob.glob(r'/home/szybet/kdesrc/frameworks/extra-cmake-modules/docs/manual/*.rst'))
ecm_manual_description = re.compile('^\.\. ecm-manual-description:(.*)$')
man_pages = []
for fpath in ecm_manuals:
    try:
        name, sec, rst = os.path.basename(fpath).split('.')
        desc = None
        f = open(fpath, 'r')
        for l in f:
            m = ecm_manual_description.match(l)
            if m:
                desc = m.group(1).strip()
                break
        f.close()
        if desc:
            man_pages.append(('manual/%s.%s' % (name, sec),
                              name, desc, [], int(sec)))
        else:
            sys.stderr.write("ERROR: No ecm-manual-description in '%s'\n" % fpath)
    except Exception as e:
        sys.stderr.write("ERROR: %s\n" % str(e))
man_show_urls = False

html_show_sourcelink = True
html_static_path = ['/home/szybet/kdesrc/build/frameworks/extra-cmake-modules/docs/static']
html_style = 'ecm.css'
html_theme = 'default'
html_short_title = 'ECM %s documentation' % version
html_favicon = '/home/szybet/kdesrc/frameworks/extra-cmake-modules/docs/sphinx/kde-favicon.ico'
