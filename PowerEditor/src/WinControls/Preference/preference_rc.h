/*
this file is part of notepad++
Copyright (C)2003 Don HO ( donho@altern.org )

This program is free software; you can redistribute it and/or
modify it under the terms of the GNU General Public License
as published by the Free Software Foundation; either
version 2 of the License, or (at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program; if not, write to the Free Software
Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.
*/

#define	IDD_PREFERENCE_BOX 6000
	#define	IDC_BUTTON_CLOSE (IDD_PREFERENCE_BOX + 1)
	

#define	IDD_PREFERENCE_BAR_BOX 6100 //(IDD_PREFERENCE_BOX + 100)
	#define	IDC_TOOLBAR_GB_STATIC (IDD_PREFERENCE_BAR_BOX + 1)
	#define	IDC_CHECK_HIDE (IDD_PREFERENCE_BAR_BOX + 2)
	#define	IDC_RADIO_SMALLICON (IDD_PREFERENCE_BAR_BOX + 3)
	#define	IDC_RADIO_BIGICON (IDD_PREFERENCE_BAR_BOX + 4)
	#define	IDC_RADIO_STANDARD (IDD_PREFERENCE_BAR_BOX + 5)
	
	#define	IDC_TABBAR_GB_STATIC (IDD_PREFERENCE_BAR_BOX + 6)
	#define	IDC_CHECK_REDUCE (IDD_PREFERENCE_BAR_BOX + 7)
	#define	IDC_CHECK_LOCK (IDD_PREFERENCE_BAR_BOX + 8)
	#define	IDC_CHECK_DRAWINACTIVE (IDD_PREFERENCE_BAR_BOX + 9)
	#define	IDC_CHECK_ORANGE (IDD_PREFERENCE_BAR_BOX + 10)
	#define	IDC_CHECK_SHOWSTATUSBAR (IDD_PREFERENCE_BAR_BOX + 11)
	#define	IDC_CHECK_ENABLETABCLOSE (IDD_PREFERENCE_BAR_BOX + 12)
	#define	IDC_CHECK_DBCLICK2CLOSE (IDD_PREFERENCE_BAR_BOX + 13)
	#define	IDC_CHECK_ENABLEDOCSWITCHER (IDD_PREFERENCE_BAR_BOX + 14)
	#define	IDC_CHECK_MAINTAININDENT (IDD_PREFERENCE_BAR_BOX + 15)
	#define	IDC_CHECK_KEEPINSAMEDIR (IDD_PREFERENCE_BAR_BOX + 16)
	#define	IDC_CHECK_STYLEMRU (IDD_PREFERENCE_BAR_BOX + 17)
	#define	IDC_CHECK_TAB_HIDE (IDD_PREFERENCE_BAR_BOX + 18)
	#define	IDC_CHECK_TAB_MULTILINE (IDD_PREFERENCE_BAR_BOX + 19)
	#define	IDC_CHECK_TAB_VERTICAL (IDD_PREFERENCE_BAR_BOX + 20)
	#define	IDC_MENUBAR_GB_STATIC (IDD_PREFERENCE_BAR_BOX + 21)
	#define	IDC_CHECK_HIDEMENUBAR (IDD_PREFERENCE_BAR_BOX + 22)

#define	IDD_PREFERENCE_MARGEIN_BOX 6200 //(IDD_PREFERENCE_BOX + 200)
	#define	IDC_FMS_GB_STATIC (IDD_PREFERENCE_MARGEIN_BOX + 1)
	#define	IDC_RADIO_SIMPLE (IDD_PREFERENCE_MARGEIN_BOX + 2)
	#define	IDC_RADIO_ARROW (IDD_PREFERENCE_MARGEIN_BOX + 3)
	#define	IDC_RADIO_CIRCLE (IDD_PREFERENCE_MARGEIN_BOX + 4)
	#define	IDC_RADIO_BOX (IDD_PREFERENCE_MARGEIN_BOX + 5)
	
	#define	IDC_CHECK_LINENUMBERMARGE (IDD_PREFERENCE_MARGEIN_BOX + 6)
	#define	IDC_CHECK_BOOKMARKMARGE (IDD_PREFERENCE_MARGEIN_BOX + 7)

	#define	IDC_CHECK_SHOWVERTICALEDGE (IDD_PREFERENCE_MARGEIN_BOX + 8)
	#define	IDC_NBCOLONE_STATIC (IDD_PREFERENCE_MARGEIN_BOX + 9)
	#define	IDC_COLONENUMBER_STATIC (IDD_PREFERENCE_MARGEIN_BOX + 10)
	
	#define	IDC_VES_GB_STATIC (IDD_PREFERENCE_MARGEIN_BOX + 11)
	#define	IDC_RADIO_LNMODE (IDD_PREFERENCE_MARGEIN_BOX + 12)
	#define	IDC_RADIO_BGMODE (IDD_PREFERENCE_MARGEIN_BOX + 13)
	#define	IDC_CHECK_CURRENTLINEHILITE (IDD_PREFERENCE_MARGEIN_BOX + 14)
	#define	IDC_COMBO_SCINTILLAVIEWCHOIX (IDD_PREFERENCE_MARGEIN_BOX + 15)

#define	IDD_PREFERENCE_SETTING_BOX 6300 //(IDD_PREFERENCE_BOX + 300)
	#define	IDC_TABSETTING_GB_STATIC (IDD_PREFERENCE_SETTING_BOX + 1)
	#define	IDC_CHECK_REPLACEBYSPACE (IDD_PREFERENCE_SETTING_BOX + 2)
	#define	IDC_TABSIZE_STATIC (IDD_PREFERENCE_SETTING_BOX + 3)
	#define	IDC_HISTORY_GB_STATIC (IDD_PREFERENCE_SETTING_BOX + 4)
	#define	IDC_CHECK_DONTCHECKHISTORY (IDD_PREFERENCE_SETTING_BOX + 5)
	#define	IDC_MAXNBFILE_STATIC (IDD_PREFERENCE_SETTING_BOX + 6)
	#define	IDC_CHECK_FILEAUTODETECTION (IDD_PREFERENCE_SETTING_BOX + 7)
	#define	IDC_CHECK_MIN2SYSTRAY (IDD_PREFERENCE_SETTING_BOX + 8)
	#define	IDC_CHECK_REMEMBERSESSION (IDD_PREFERENCE_SETTING_BOX + 9)
	#define	IDC_TABSIZEVAL_STATIC (IDD_PREFERENCE_SETTING_BOX + 10)
	#define	IDC_MAXNBFILEVAL_STATIC (IDD_PREFERENCE_SETTING_BOX + 11)
	#define	IDC_FILEAUTODETECTION_STATIC (IDD_PREFERENCE_SETTING_BOX + 12)
	#define	IDC_CHECK_UPDATESILENTLY (IDD_PREFERENCE_SETTING_BOX + 13)
	#define	IDC_BACKUP_GB_STATIC (IDD_PREFERENCE_SETTING_BOX + 14)
	#define	IDC_RADIO_BKNONE (IDD_PREFERENCE_SETTING_BOX + 15)
	#define	IDC_RADIO_BKSIMPLE (IDD_PREFERENCE_SETTING_BOX + 16)
	#define	IDC_RADIO_BKVERBOSE (IDD_PREFERENCE_SETTING_BOX + 17)
	#define	IDC_CLICKABLELINK_STATIC (IDD_PREFERENCE_SETTING_BOX + 18)
	#define	IDC_CHECK_CLICKABLELINK_ENABLE (IDD_PREFERENCE_SETTING_BOX + 19)
	#define	IDC_CHECK_CLICKABLELINK_NOUNDERLINE (IDD_PREFERENCE_SETTING_BOX + 20)
	#define	IDC_EDIT_SESSIONFILEEXT (IDD_PREFERENCE_SETTING_BOX + 21)
	#define	IDC_SESSIONFILEEXT_STATIC (IDD_PREFERENCE_SETTING_BOX + 22)
	#define	IDC_CHECK_AUTOUPDATE (IDD_PREFERENCE_SETTING_BOX + 23)
	#define	IDC_DOCUMENTSWITCHER_STATIC (IDD_PREFERENCE_SETTING_BOX + 24)
	#define	IDC_CHECK_UPDATEGOTOEOF (IDD_PREFERENCE_SETTING_BOX + 25)
	#define	IDC_CHECK_ENABLSMARTHILITE (IDD_PREFERENCE_SETTING_BOX + 26)
	
#define	IDD_PREFERENCE_NEWDOCSETTING_BOX 6400 //(IDD_PREFERENCE_BOX + 400)
	#define	IDC_FORMAT_GB_STATIC (IDD_PREFERENCE_NEWDOCSETTING_BOX + 1)
	#define	IDC_RADIO_F_WIN (IDD_PREFERENCE_NEWDOCSETTING_BOX + 2)
	#define	IDC_RADIO_F_UNIX (IDD_PREFERENCE_NEWDOCSETTING_BOX + 3)
	#define	IDC_RADIO_F_MAC (IDD_PREFERENCE_NEWDOCSETTING_BOX + 4)
	#define	IDC_ENCODING_STATIC (IDD_PREFERENCE_NEWDOCSETTING_BOX + 5)
	#define	IDC_RADIO_ANSI (IDD_PREFERENCE_NEWDOCSETTING_BOX + 6)
	#define	IDC_RADIO_UTF8SANSBOM (IDD_PREFERENCE_NEWDOCSETTING_BOX + 7)
	#define	IDC_RADIO_UTF8 (IDD_PREFERENCE_NEWDOCSETTING_BOX + 8)
	#define	IDC_RADIO_UCS2BIG (IDD_PREFERENCE_NEWDOCSETTING_BOX + 9)
	#define	IDC_RADIO_UCS2SMALL (IDD_PREFERENCE_NEWDOCSETTING_BOX + 10)
	#define	IDC_DEFAULTLANG_STATIC (IDD_PREFERENCE_NEWDOCSETTING_BOX + 11)
	#define	IDC_COMBO_DEFAULTLANG (IDD_PREFERENCE_NEWDOCSETTING_BOX + 12)

#define	IDD_PREFERENCE_LANG_BOX 6500 //(IDD_PREFERENCE_BOX + 500)
	#define	IDC_LIST_ENABLEDLANG (IDD_PREFERENCE_LANG_BOX + 1)
	#define	IDC_LIST_DISABLEDLANG (IDD_PREFERENCE_LANG_BOX + 2)
	#define	IDC_BUTTON_REMOVE (IDD_PREFERENCE_LANG_BOX + 3)
	#define	IDC_BUTTON_RESTORE (IDD_PREFERENCE_LANG_BOX + 4)
	#define	IDC_ENABLEDITEMS_STATIC (IDD_PREFERENCE_LANG_BOX + 5)
	#define	IDC_DISABLEDITEMS_STATIC (IDD_PREFERENCE_LANG_BOX + 6)

#define	IDD_PREFERENCE_PRINT_BOX 6600 //(IDD_PREFERENCE_BOX + 600)
	#define	IDC_CHECK_PRINTLINENUM	(IDD_PREFERENCE_PRINT_BOX + 1)
	#define	IDC_COLOUROPT_STATIC	(IDD_PREFERENCE_PRINT_BOX + 2)
	#define	IDC_RADIO_WYSIWYG		(IDD_PREFERENCE_PRINT_BOX + 3)
	#define	IDC_RADIO_INVERT		(IDD_PREFERENCE_PRINT_BOX + 4)
	#define	IDC_RADIO_BW			(IDD_PREFERENCE_PRINT_BOX + 5)
	#define	IDC_RADIO_NOBG			(IDD_PREFERENCE_PRINT_BOX + 6)
	#define IDC_MARGESETTINGS_STATIC  (IDD_PREFERENCE_PRINT_BOX + 7)
	#define IDC_EDIT_ML               (IDD_PREFERENCE_PRINT_BOX + 8)
	#define IDC_EDIT_MT               (IDD_PREFERENCE_PRINT_BOX + 9)
	#define IDC_EDIT_MR               (IDD_PREFERENCE_PRINT_BOX + 10)
	#define IDC_EDIT_MB               (IDD_PREFERENCE_PRINT_BOX + 11)
	#define IDC_ML_STATIC             (IDD_PREFERENCE_PRINT_BOX + 12)
	#define IDC_MT_STATIC             (IDD_PREFERENCE_PRINT_BOX + 13)
	#define IDC_MR_STATIC             (IDD_PREFERENCE_PRINT_BOX + 14)
	#define IDC_MB_STATIC             (IDD_PREFERENCE_PRINT_BOX + 15)
	
#define	IDD_PREFERENCE_PRINT2_BOX 6700 //(IDD_PREFERENCE_BOX + 700)
	#define	IDC_EDIT_HLEFT		(IDD_PREFERENCE_PRINT2_BOX + 1)
	#define	IDC_EDIT_HMIDDLE		(IDD_PREFERENCE_PRINT2_BOX + 2)
	#define	IDC_EDIT_HRIGHT		(IDD_PREFERENCE_PRINT2_BOX + 3)
	#define	IDC_COMBO_HFONTNAME	(IDD_PREFERENCE_PRINT2_BOX + 4)
	#define	IDC_COMBO_HFONTSIZE	(IDD_PREFERENCE_PRINT2_BOX + 5)
	#define	IDC_CHECK_HBOLD	(IDD_PREFERENCE_PRINT2_BOX + 6)
	#define	IDC_CHECK_HITALIC (IDD_PREFERENCE_PRINT2_BOX + 7)
	#define	IDC_HGB_STATIC	(IDD_PREFERENCE_PRINT2_BOX + 8)
	#define	IDC_HL_STATIC	(IDD_PREFERENCE_PRINT2_BOX + 9)
	#define	IDC_HM_STATIC	(IDD_PREFERENCE_PRINT2_BOX + 10)
	#define	IDC_HR_STATIC	(IDD_PREFERENCE_PRINT2_BOX + 11)
	#define	IDC_EDIT_FLEFT	(IDD_PREFERENCE_PRINT2_BOX + 12)
	#define	IDC_EDIT_FMIDDLE	(IDD_PREFERENCE_PRINT2_BOX + 13)
	#define	IDC_EDIT_FRIGHT	(IDD_PREFERENCE_PRINT2_BOX + 14)
	#define	IDC_COMBO_FFONTNAME	(IDD_PREFERENCE_PRINT2_BOX + 15)
	#define	IDC_COMBO_FFONTSIZE	(IDD_PREFERENCE_PRINT2_BOX + 16)
	#define	IDC_CHECK_FBOLD	(IDD_PREFERENCE_PRINT2_BOX + 17)
	#define	IDC_CHECK_FITALIC	(IDD_PREFERENCE_PRINT2_BOX + 18)
	#define	IDC_FGB_STATIC	(IDD_PREFERENCE_PRINT2_BOX + 19)
	#define	IDC_FL_STATIC	(IDD_PREFERENCE_PRINT2_BOX + 20)
	#define	IDC_FM_STATIC	(IDD_PREFERENCE_PRINT2_BOX + 21)
	#define	IDC_FR_STATIC	(IDD_PREFERENCE_PRINT2_BOX + 22)
	#define IDC_BUTTON_ADDVAR  (IDD_PREFERENCE_PRINT2_BOX + 23)
	#define IDC_COMBO_VARLIST  (IDD_PREFERENCE_PRINT2_BOX + 24)
	#define IDC_VAR_STATIC    (IDD_PREFERENCE_PRINT2_BOX + 25)
	#define IDC_VIEWPANEL_STATIC  (IDD_PREFERENCE_PRINT2_BOX + 26)
	#define IDC_WHICHPART_STATIC  (IDD_PREFERENCE_PRINT2_BOX + 27)


#define	IDD_PREFERENCE_BACKUP_BOX 6800 //(IDD_PREFERENCE_BOX + 800)
	#define IDC_BACKUPDIR_GRP_STATIC  (IDD_PREFERENCE_BACKUP_BOX + 1)
	#define IDC_BACKUPDIR_CHECK  (IDD_PREFERENCE_BACKUP_BOX + 2)
	#define IDD_BACKUPDIR_STATIC  (IDD_PREFERENCE_BACKUP_BOX + 3)
	#define IDC_BACKUPDIR_USERCUSTOMDIR_GRPSTATIC  (IDD_PREFERENCE_BACKUP_BOX + 4)
	#define IDC_BACKUPDIR_EDIT  (IDD_PREFERENCE_BACKUP_BOX + 5)
	#define IDD_BACKUPDIR_BROWSE_BUTTON  (IDD_PREFERENCE_BACKUP_BOX + 6)
	#define IDD_AUTOC_GRPSTATIC  (IDD_PREFERENCE_BACKUP_BOX + 7)
	#define IDD_AUTOC_ENABLECHECK  (IDD_PREFERENCE_BACKUP_BOX + 8)
	#define IDD_AUTOC_FUNCRADIO  (IDD_PREFERENCE_BACKUP_BOX + 9)
	#define IDD_AUTOC_WORDRADIO  (IDD_PREFERENCE_BACKUP_BOX + 10)
	#define IDD_AUTOC_STATIC_FROM  (IDD_PREFERENCE_BACKUP_BOX + 11)
	#define IDD_AUTOC_STATIC_N  (IDD_PREFERENCE_BACKUP_BOX + 12)
	#define IDD_AUTOC_STATIC_CHAR  (IDD_PREFERENCE_BACKUP_BOX + 13)
	#define IDD_AUTOC_STATIC_NOTE  (IDD_PREFERENCE_BACKUP_BOX + 14)
	#define IDD_FUNC_CHECK         (IDD_PREFERENCE_BACKUP_BOX + 15)
