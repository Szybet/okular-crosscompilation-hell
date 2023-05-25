# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles/okularcore_autogen.dir/AutogenUsed.txt"
  "CMakeFiles/okularcore_autogen.dir/ParseCache.txt"
  "CMakeFiles/okularpart_autogen.dir/AutogenUsed.txt"
  "CMakeFiles/okularpart_autogen.dir/ParseCache.txt"
  "autotests/CMakeFiles/addremoveannotationtest_autogen.dir/AutogenUsed.txt"
  "autotests/CMakeFiles/addremoveannotationtest_autogen.dir/ParseCache.txt"
  "autotests/CMakeFiles/annotationstest_autogen.dir/AutogenUsed.txt"
  "autotests/CMakeFiles/annotationstest_autogen.dir/ParseCache.txt"
  "autotests/CMakeFiles/annotationtoolbartest_autogen.dir/AutogenUsed.txt"
  "autotests/CMakeFiles/annotationtoolbartest_autogen.dir/ParseCache.txt"
  "autotests/CMakeFiles/calculatetexttest_autogen.dir/AutogenUsed.txt"
  "autotests/CMakeFiles/calculatetexttest_autogen.dir/ParseCache.txt"
  "autotests/CMakeFiles/documenttest_autogen.dir/AutogenUsed.txt"
  "autotests/CMakeFiles/documenttest_autogen.dir/ParseCache.txt"
  "autotests/CMakeFiles/editannotationcontentstest_autogen.dir/AutogenUsed.txt"
  "autotests/CMakeFiles/editannotationcontentstest_autogen.dir/ParseCache.txt"
  "autotests/CMakeFiles/editdrawingtooldialogtest_autogen.dir/AutogenUsed.txt"
  "autotests/CMakeFiles/editdrawingtooldialogtest_autogen.dir/ParseCache.txt"
  "autotests/CMakeFiles/editformstest_autogen.dir/AutogenUsed.txt"
  "autotests/CMakeFiles/editformstest_autogen.dir/ParseCache.txt"
  "autotests/CMakeFiles/formattest_autogen.dir/AutogenUsed.txt"
  "autotests/CMakeFiles/formattest_autogen.dir/ParseCache.txt"
  "autotests/CMakeFiles/generatorstest_autogen.dir/AutogenUsed.txt"
  "autotests/CMakeFiles/generatorstest_autogen.dir/ParseCache.txt"
  "autotests/CMakeFiles/keystroketest_autogen.dir/AutogenUsed.txt"
  "autotests/CMakeFiles/keystroketest_autogen.dir/ParseCache.txt"
  "autotests/CMakeFiles/kjsfunctionstest_autogen.dir/AutogenUsed.txt"
  "autotests/CMakeFiles/kjsfunctionstest_autogen.dir/ParseCache.txt"
  "autotests/CMakeFiles/mainshelltest_autogen.dir/AutogenUsed.txt"
  "autotests/CMakeFiles/mainshelltest_autogen.dir/ParseCache.txt"
  "autotests/CMakeFiles/markdowntest_autogen.dir/AutogenUsed.txt"
  "autotests/CMakeFiles/markdowntest_autogen.dir/ParseCache.txt"
  "autotests/CMakeFiles/modifyannotationpropertiestest_autogen.dir/AutogenUsed.txt"
  "autotests/CMakeFiles/modifyannotationpropertiestest_autogen.dir/ParseCache.txt"
  "autotests/CMakeFiles/parttest_autogen.dir/AutogenUsed.txt"
  "autotests/CMakeFiles/parttest_autogen.dir/ParseCache.txt"
  "autotests/CMakeFiles/searchtest_autogen.dir/AutogenUsed.txt"
  "autotests/CMakeFiles/searchtest_autogen.dir/ParseCache.txt"
  "autotests/CMakeFiles/shelltest_autogen.dir/AutogenUsed.txt"
  "autotests/CMakeFiles/shelltest_autogen.dir/ParseCache.txt"
  "autotests/CMakeFiles/signatureformtest_autogen.dir/AutogenUsed.txt"
  "autotests/CMakeFiles/signatureformtest_autogen.dir/ParseCache.txt"
  "autotests/CMakeFiles/signunsignedfieldtest_autogen.dir/AutogenUsed.txt"
  "autotests/CMakeFiles/signunsignedfieldtest_autogen.dir/ParseCache.txt"
  "autotests/CMakeFiles/toggleactionmenutest_autogen.dir/AutogenUsed.txt"
  "autotests/CMakeFiles/toggleactionmenutest_autogen.dir/ParseCache.txt"
  "autotests/CMakeFiles/translateannotationtest_autogen.dir/AutogenUsed.txt"
  "autotests/CMakeFiles/translateannotationtest_autogen.dir/ParseCache.txt"
  "autotests/CMakeFiles/urldetecttest_autogen.dir/AutogenUsed.txt"
  "autotests/CMakeFiles/urldetecttest_autogen.dir/ParseCache.txt"
  "autotests/CMakeFiles/visibilitytest_autogen.dir/AutogenUsed.txt"
  "autotests/CMakeFiles/visibilitytest_autogen.dir/ParseCache.txt"
  "autotests/addremoveannotationtest_autogen"
  "autotests/annotationstest_autogen"
  "autotests/annotationtoolbartest_autogen"
  "autotests/calculatetexttest_autogen"
  "autotests/documenttest_autogen"
  "autotests/editannotationcontentstest_autogen"
  "autotests/editdrawingtooldialogtest_autogen"
  "autotests/editformstest_autogen"
  "autotests/formattest_autogen"
  "autotests/generatorstest_autogen"
  "autotests/keystroketest_autogen"
  "autotests/kjsfunctionstest_autogen"
  "autotests/mainshelltest_autogen"
  "autotests/markdowntest_autogen"
  "autotests/modifyannotationpropertiestest_autogen"
  "autotests/parttest_autogen"
  "autotests/searchtest_autogen"
  "autotests/shelltest_autogen"
  "autotests/signatureformtest_autogen"
  "autotests/signunsignedfieldtest_autogen"
  "autotests/toggleactionmenutest_autogen"
  "autotests/translateannotationtest_autogen"
  "autotests/urldetecttest_autogen"
  "autotests/visibilitytest_autogen"
  "generators/chm/CMakeFiles/chmgeneratortest_autogen.dir/AutogenUsed.txt"
  "generators/chm/CMakeFiles/chmgeneratortest_autogen.dir/ParseCache.txt"
  "generators/chm/CMakeFiles/okularGenerator_chmlib_autogen.dir/AutogenUsed.txt"
  "generators/chm/CMakeFiles/okularGenerator_chmlib_autogen.dir/ParseCache.txt"
  "generators/chm/chmgeneratortest_autogen"
  "generators/chm/kio-msits/CMakeFiles/kio_msits_autogen.dir/AutogenUsed.txt"
  "generators/chm/kio-msits/CMakeFiles/kio_msits_autogen.dir/ParseCache.txt"
  "generators/chm/kio-msits/kio_msits_autogen"
  "generators/chm/okularGenerator_chmlib_autogen"
  "generators/comicbook/CMakeFiles/comicbooktest_autogen.dir/AutogenUsed.txt"
  "generators/comicbook/CMakeFiles/comicbooktest_autogen.dir/ParseCache.txt"
  "generators/comicbook/CMakeFiles/okularGenerator_comicbook_autogen.dir/AutogenUsed.txt"
  "generators/comicbook/CMakeFiles/okularGenerator_comicbook_autogen.dir/ParseCache.txt"
  "generators/comicbook/CMakeFiles/okular_comicbook_autogen.dir/AutogenUsed.txt"
  "generators/comicbook/CMakeFiles/okular_comicbook_autogen.dir/ParseCache.txt"
  "generators/comicbook/comicbooktest_autogen"
  "generators/comicbook/okularGenerator_comicbook_autogen"
  "generators/comicbook/okular_comicbook_autogen"
  "generators/djvu/CMakeFiles/okularGenerator_djvu_autogen.dir/AutogenUsed.txt"
  "generators/djvu/CMakeFiles/okularGenerator_djvu_autogen.dir/ParseCache.txt"
  "generators/djvu/okularGenerator_djvu_autogen"
  "generators/dvi/CMakeFiles/okularGenerator_dvi_autogen.dir/AutogenUsed.txt"
  "generators/dvi/CMakeFiles/okularGenerator_dvi_autogen.dir/ParseCache.txt"
  "generators/dvi/okularGenerator_dvi_autogen"
  "generators/epub/CMakeFiles/epubgeneratortest_autogen.dir/AutogenUsed.txt"
  "generators/epub/CMakeFiles/epubgeneratortest_autogen.dir/ParseCache.txt"
  "generators/epub/CMakeFiles/okularGenerator_epub_autogen.dir/AutogenUsed.txt"
  "generators/epub/CMakeFiles/okularGenerator_epub_autogen.dir/ParseCache.txt"
  "generators/epub/epubgeneratortest_autogen"
  "generators/epub/okularGenerator_epub_autogen"
  "generators/fax/CMakeFiles/okularGenerator_fax_autogen.dir/AutogenUsed.txt"
  "generators/fax/CMakeFiles/okularGenerator_fax_autogen.dir/ParseCache.txt"
  "generators/fax/okularGenerator_fax_autogen"
  "generators/fictionbook/CMakeFiles/okularGenerator_fb_autogen.dir/AutogenUsed.txt"
  "generators/fictionbook/CMakeFiles/okularGenerator_fb_autogen.dir/ParseCache.txt"
  "generators/fictionbook/okularGenerator_fb_autogen"
  "generators/kimgio/CMakeFiles/kimgiotest_autogen.dir/AutogenUsed.txt"
  "generators/kimgio/CMakeFiles/kimgiotest_autogen.dir/ParseCache.txt"
  "generators/kimgio/CMakeFiles/okularGenerator_kimgio_autogen.dir/AutogenUsed.txt"
  "generators/kimgio/CMakeFiles/okularGenerator_kimgio_autogen.dir/ParseCache.txt"
  "generators/kimgio/kimgiotest_autogen"
  "generators/kimgio/okularGenerator_kimgio_autogen"
  "generators/markdown/CMakeFiles/okularGenerator_md_autogen.dir/AutogenUsed.txt"
  "generators/markdown/CMakeFiles/okularGenerator_md_autogen.dir/ParseCache.txt"
  "generators/markdown/okularGenerator_md_autogen"
  "generators/mobipocket/CMakeFiles/okularGenerator_mobi_autogen.dir/AutogenUsed.txt"
  "generators/mobipocket/CMakeFiles/okularGenerator_mobi_autogen.dir/ParseCache.txt"
  "generators/mobipocket/okularGenerator_mobi_autogen"
  "generators/plucker/CMakeFiles/okularGenerator_plucker_autogen.dir/AutogenUsed.txt"
  "generators/plucker/CMakeFiles/okularGenerator_plucker_autogen.dir/ParseCache.txt"
  "generators/plucker/okularGenerator_plucker_autogen"
  "generators/poppler/CMakeFiles/okularGenerator_poppler_autogen.dir/AutogenUsed.txt"
  "generators/poppler/CMakeFiles/okularGenerator_poppler_autogen.dir/ParseCache.txt"
  "generators/poppler/okularGenerator_poppler_autogen"
  "generators/spectre/CMakeFiles/okularGenerator_ghostview_autogen.dir/AutogenUsed.txt"
  "generators/spectre/CMakeFiles/okularGenerator_ghostview_autogen.dir/ParseCache.txt"
  "generators/spectre/okularGenerator_ghostview_autogen"
  "generators/tiff/CMakeFiles/okularGenerator_tiff_autogen.dir/AutogenUsed.txt"
  "generators/tiff/CMakeFiles/okularGenerator_tiff_autogen.dir/ParseCache.txt"
  "generators/tiff/okularGenerator_tiff_autogen"
  "generators/txt/CMakeFiles/okularGenerator_txt_autogen.dir/AutogenUsed.txt"
  "generators/txt/CMakeFiles/okularGenerator_txt_autogen.dir/ParseCache.txt"
  "generators/txt/okularGenerator_txt_autogen"
  "generators/xps/CMakeFiles/okularGenerator_xps_autogen.dir/AutogenUsed.txt"
  "generators/xps/CMakeFiles/okularGenerator_xps_autogen.dir/ParseCache.txt"
  "generators/xps/okularGenerator_xps_autogen"
  "okularcore_autogen"
  "okularpart_autogen"
  "shell/CMakeFiles/okular_autogen.dir/AutogenUsed.txt"
  "shell/CMakeFiles/okular_autogen.dir/ParseCache.txt"
  "shell/okular_autogen"
  )
endif()
