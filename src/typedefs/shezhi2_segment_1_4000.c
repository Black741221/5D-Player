/*
 * shezhi2.exe.c - segment 1~4000 lines
 * 包含前4000行結構與型別定義，大量PlaceHolder Class Structure
 * 此為拆解分析初步版本，包含原始反編譯碼
 */

typedef unsigned char   undefined;

typedef unsigned char    bool;
typedef unsigned char    byte;
typedef unsigned int    dword;
typedef unsigned long long    GUID;
typedef pointer32 ImageBaseOffset32;

typedef long long    longlong;
typedef unsigned char    uchar;
typedef unsigned int    uint;
typedef unsigned long    ulong;
typedef unsigned long long    ulonglong;
typedef unsigned char    undefined1;
typedef unsigned short    undefined2;
typedef unsigned int    undefined4;
typedef unsigned long long    undefined8;
typedef unsigned short    ushort;
typedef unsigned short    wchar16;
typedef short    wchar_t;
typedef unsigned short    word;
typedef struct CMFCCaptionMenuButton CMFCCaptionMenuButton, *PCMFCCaptionMenuButton;

struct CMFCCaptionMenuButton { // PlaceHolder Class Structure
};

typedef struct _AFX_EDIT_STATE _AFX_EDIT_STATE, *P_AFX_EDIT_STATE;

struct _AFX_EDIT_STATE { // PlaceHolder Class Structure
};

typedef struct CPageSetupDialog CPageSetupDialog, *PCPageSetupDialog;

struct CPageSetupDialog { // PlaceHolder Class Structure
};

typedef struct CMFCRibbonCustomizePropertyPage CMFCRibbonCustomizePropertyPage, *PCMFCRibbonCustomizePropertyPage;

struct CMFCRibbonCustomizePropertyPage { // PlaceHolder Class Structure
};

typedef struct CMFCShadowWnd CMFCShadowWnd, *PCMFCShadowWnd;

struct CMFCShadowWnd { // PlaceHolder Class Structure
};

typedef struct COlePasteSpecialDialog COlePasteSpecialDialog, *PCOlePasteSpecialDialog;

struct COlePasteSpecialDialog { // PlaceHolder Class Structure
};

typedef struct CRecentPaneContainerInfo CRecentPaneContainerInfo, *PCRecentPaneContainerInfo;

struct CRecentPaneContainerInfo { // PlaceHolder Class Structure
};

typedef struct CDWordArray CDWordArray, *PCDWordArray;

struct CDWordArray { // PlaceHolder Class Structure
};

typedef struct CMDIChildWndEx CMDIChildWndEx, *PCMDIChildWndEx;

struct CMDIChildWndEx { // PlaceHolder Class Structure
};

typedef struct _s_ESTypeList _s_ESTypeList, *P_s_ESTypeList;

typedef struct _s_ESTypeList ESTypeList;

typedef struct _s_HandlerType _s_HandlerType, *P_s_HandlerType;

typedef struct _s_HandlerType HandlerType;

typedef struct TypeDescriptor TypeDescriptor, *PTypeDescriptor;

typedef int ptrdiff_t;

struct TypeDescriptor {
    void *pVFTable;
    void *spare;
    char name[0];
};

struct _s_HandlerType {
    uint adjectives;
    struct TypeDescriptor *pType;
    ptrdiff_t dispCatchObj;
    void *addressOfHandler;
};

struct _s_ESTypeList {
    int nCount;
    HandlerType *pTypeArray;
};

typedef struct CPreviewDC CPreviewDC, *PCPreviewDC;

struct CPreviewDC { // PlaceHolder Class Structure
};

typedef struct CMFCToolBarSystemMenuButton CMFCToolBarSystemMenuButton, *PCMFCToolBarSystemMenuButton;

struct CMFCToolBarSystemMenuButton { // PlaceHolder Class Structure
};

typedef struct COleDocument COleDocument, *PCOleDocument;

struct COleDocument { // PlaceHolder Class Structure
};

typedef struct CStdioFile CStdioFile, *PCStdioFile;

struct CStdioFile { // PlaceHolder Class Structure
};

typedef struct CMFCRibbonKeyboardCustomizeDialog CMFCRibbonKeyboardCustomizeDialog, *PCMFCRibbonKeyboardCustomizeDialog;

struct CMFCRibbonKeyboardCustomizeDialog { // PlaceHolder Class Structure
};

typedef struct CSmartDockingManager CSmartDockingManager, *PCSmartDockingManager;

struct CSmartDockingManager { // PlaceHolder Class Structure
};

typedef struct CMap<unsigned_int,unsigned_int&,class_CMFCToolBarButton*,class_CMFCToolBarButton*&> CMap<unsigned_int,unsigned_int&,class_CMFCToolBarButton*,class_CMFCToolBarButton*&>, *PCMap<unsigned_int,unsigned_int&,class_CMFCToolBarButton*,class_CMFCToolBarButton*&>;

struct CMap<unsigned_int,unsigned_int&,class_CMFCToolBarButton*,class_CMFCToolBarButton*&> { // PlaceHolder Class Structure
};

typedef struct CMFCImageEditorDialog CMFCImageEditorDialog, *PCMFCImageEditorDialog;

struct CMFCImageEditorDialog { // PlaceHolder Class Structure
};

typedef struct CFrameImpl CFrameImpl, *PCFrameImpl;

struct CFrameImpl { // PlaceHolder Class Structure
};

typedef struct CMap<struct_HWND__*,struct_HWND__*,int,int> CMap<struct_HWND__*,struct_HWND__*,int,int>, *PCMap<struct_HWND__*,struct_HWND__*,int,int>;

struct CMap<struct_HWND__*,struct_HWND__*,int,int> { // PlaceHolder Class Structure
};

typedef struct CCommDlgWrapper CCommDlgWrapper, *PCCommDlgWrapper;

struct CCommDlgWrapper { // PlaceHolder Class Structure
};

typedef struct CTooltipManager CTooltipManager, *PCTooltipManager;

struct CTooltipManager { // PlaceHolder Class Structure
};

typedef struct CFindReplaceDialog CFindReplaceDialog, *PCFindReplaceDialog;

struct CFindReplaceDialog { // PlaceHolder Class Structure
};

typedef struct COleServerDoc COleServerDoc, *PCOleServerDoc;

struct COleServerDoc { // PlaceHolder Class Structure
};

typedef struct _s__RTTIBaseClassDescriptor _s__RTTIBaseClassDescriptor, *P_s__RTTIBaseClassDescriptor;

typedef struct _s__RTTIBaseClassDescriptor RTTIBaseClassDescriptor;

typedef struct PMD PMD, *PPMD;

typedef struct _s__RTTIClassHierarchyDescriptor _s__RTTIClassHierarchyDescriptor, *P_s__RTTIClassHierarchyDescriptor;

typedef struct _s__RTTIClassHierarchyDescriptor RTTIClassHierarchyDescriptor;

struct PMD {
    ptrdiff_t mdisp;
    ptrdiff_t pdisp;
    ptrdiff_t vdisp;
};

struct _s__RTTIBaseClassDescriptor {
    struct TypeDescriptor *pTypeDescriptor; // ref to TypeDescriptor (RTTI 0) for class
    dword numContainedBases; // count of extended classes in BaseClassArray (RTTI 2)
    struct PMD where; // member displacement structure
    dword attributes; // bit flags
    RTTIClassHierarchyDescriptor *pClassHierarchyDescriptor; // ref to ClassHierarchyDescriptor (RTTI 3) for class
};

struct _s__RTTIClassHierarchyDescriptor {
    dword signature;
    dword attributes; // bit flags
    dword numBaseClasses; // number of base classes (i.e. rtti1Count)
    RTTIBaseClassDescriptor **pBaseClassArray; // ref to BaseClassArray (RTTI 2)
};

typedef struct _AFX_RICHEDIT_STATE _AFX_RICHEDIT_STATE, *P_AFX_RICHEDIT_STATE;

struct _AFX_RICHEDIT_STATE { // PlaceHolder Class Structure
};

typedef struct CMDIChildWnd CMDIChildWnd, *PCMDIChildWnd;

struct CMDIChildWnd { // PlaceHolder Class Structure
};

typedef struct CCmdTarget CCmdTarget, *PCCmdTarget;

struct CCmdTarget { // PlaceHolder Class Structure
};

typedef struct CDragListBox CDragListBox, *PCDragListBox;

struct CDragListBox { // PlaceHolder Class Structure
};

typedef struct CWinAppEx CWinAppEx, *PCWinAppEx;

struct CWinAppEx { // PlaceHolder Class Structure
};

typedef struct CMFCRibbonCustomizeCategory CMFCRibbonCustomizeCategory, *PCMFCRibbonCustomizeCategory;

struct CMFCRibbonCustomizeCategory { // PlaceHolder Class Structure
};

typedef struct CList<struct_CMFCRestoredTabInfo,struct_CMFCRestoredTabInfo> CList<struct_CMFCRestoredTabInfo,struct_CMFCRestoredTabInfo>, *PCList<struct_CMFCRestoredTabInfo,struct_CMFCRestoredTabInfo>;

struct CList<struct_CMFCRestoredTabInfo,struct_CMFCRestoredTabInfo> { // PlaceHolder Class Structure
};

typedef struct CArray<class_CMFCRibbonPanel*,class_CMFCRibbonPanel*> CArray<class_CMFCRibbonPanel*,class_CMFCRibbonPanel*>, *PCArray<class_CMFCRibbonPanel*,class_CMFCRibbonPanel*>;

struct CArray<class_CMFCRibbonPanel*,class_CMFCRibbonPanel*> { // PlaceHolder Class Structure
};

typedef struct CDllIsolationWrapperBase CDllIsolationWrapperBase, *PCDllIsolationWrapperBase;

struct CDllIsolationWrapperBase { // PlaceHolder Class Structure
};

typedef struct CStatic CStatic, *PCStatic;

struct CStatic { // PlaceHolder Class Structure
};

typedef struct CMFCTabButton CMFCTabButton, *PCMFCTabButton;

struct CMFCTabButton { // PlaceHolder Class Structure
};

typedef struct CList<class_CMFCPropertyPage*,class_CMFCPropertyPage*> CList<class_CMFCPropertyPage*,class_CMFCPropertyPage*>, *PCList<class_CMFCPropertyPage*,class_CMFCPropertyPage*>;

struct CList<class_CMFCPropertyPage*,class_CMFCPropertyPage*> { // PlaceHolder Class Structure
};

typedef struct COleCntrFrameWnd COleCntrFrameWnd, *PCOleCntrFrameWnd;

struct COleCntrFrameWnd { // PlaceHolder Class Structure
};

typedef struct CCmdUI CCmdUI, *PCCmdUI;

struct CCmdUI { // PlaceHolder Class Structure
};

typedef struct CClientDC CClientDC, *PCClientDC;

struct CClientDC { // PlaceHolder Class Structure
};

typedef struct CMap<unsigned_int,unsigned_int,unsigned_int,unsigned_int> CMap<unsigned_int,unsigned_int,unsigned_int,unsigned_int>, *PCMap<unsigned_int,unsigned_int,unsigned_int,unsigned_int>;

struct CMap<unsigned_int,unsigned_int,unsigned_int,unsigned_int> { // PlaceHolder Class Structure
};

typedef struct CMFCImageEditorPaletteBar CMFCImageEditorPaletteBar, *PCMFCImageEditorPaletteBar;

struct CMFCImageEditorPaletteBar { // PlaceHolder Class Structure
};

typedef struct COleDropSource COleDropSource, *PCOleDropSource;

struct COleDropSource { // PlaceHolder Class Structure
};

typedef struct CMFCRibbonConstructor CMFCRibbonConstructor, *PCMFCRibbonConstructor;

struct CMFCRibbonConstructor { // PlaceHolder Class Structure
};

typedef struct _s_TryBlockMapEntry _s_TryBlockMapEntry, *P_s_TryBlockMapEntry;

typedef struct _s_TryBlockMapEntry TryBlockMapEntry;

typedef int __ehstate_t;

struct _s_TryBlockMapEntry {
    __ehstate_t tryLow;
    __ehstate_t tryHigh;
    __ehstate_t catchHigh;
    int nCatches;
    HandlerType *pHandlerArray;
};

typedef struct CSyncObject CSyncObject, *PCSyncObject;

struct CSyncObject { // PlaceHolder Class Structure
};

typedef struct CMFCControlBarImpl CMFCControlBarImpl, *PCMFCControlBarImpl;

struct CMFCControlBarImpl { // PlaceHolder Class Structure
};

typedef struct CDataSourceControl CDataSourceControl, *PCDataSourceControl;

struct CDataSourceControl { // PlaceHolder Class Structure
};

typedef struct CMap<class_ATL::CStringT<char,class_StrTraitMFC<char,class_ATL::ChTraitsCRT<char>_>_>,char_const*,class_CObList*,class_CObList*> CMap<class_ATL::CStringT<char,class_StrTraitMFC<char,class_ATL::ChTraitsCRT<char>_>_>,char_const*,class_CObList*,class_CObList*>, *PCMap<class_ATL::CStringT<char,class_StrTraitMFC<char,class_ATL::ChTraitsCRT<char>_>_>,char_const*,class_CObList*,class_CObList*>;

struct CMap<class_ATL::CStringT<char,class_StrTraitMFC<char,class_ATL::ChTraitsCRT<char>_>_>,char_const*,class_CObList*,class_CObList*> { // PlaceHolder Class Structure
};

typedef struct CSmartDockingGroupGuidesWnd CSmartDockingGroupGuidesWnd, *PCSmartDockingGroupGuidesWnd;

struct CSmartDockingGroupGuidesWnd { // PlaceHolder Class Structure
};

typedef struct CReBar CReBar, *PCReBar;

struct CReBar { // PlaceHolder Class Structure
};

typedef struct IMAGE_RESOURCE_DIRECTORY_ENTRY_DirectoryStruct IMAGE_RESOURCE_DIRECTORY_ENTRY_DirectoryStruct, *PIMAGE_RESOURCE_DIRECTORY_ENTRY_DirectoryStruct;

struct IMAGE_RESOURCE_DIRECTORY_ENTRY_DirectoryStruct {
    dword OffsetToDirectory;
    dword DataIsDirectory;
};

typedef struct CArray<class_CMFCRibbonCategory*,class_CMFCRibbonCategory*> CArray<class_CMFCRibbonCategory*,class_CMFCRibbonCategory*>, *PCArray<class_CMFCRibbonCategory*,class_CMFCRibbonCategory*>;

struct CArray<class_CMFCRibbonCategory*,class_CMFCRibbonCategory*> { // PlaceHolder Class Structure
};

typedef struct CArray<unsigned_long,unsigned_long> CArray<unsigned_long,unsigned_long>, *PCArray<unsigned_long,unsigned_long>;

struct CArray<unsigned_long,unsigned_long> { // PlaceHolder Class Structure
};

typedef struct COleControlSiteFactory COleControlSiteFactory, *PCOleControlSiteFactory;

struct COleControlSiteFactory { // PlaceHolder Class Structure
};

typedef struct CMapPtrToWord CMapPtrToWord, *PCMapPtrToWord;

struct CMapPtrToWord { // PlaceHolder Class Structure
};

typedef struct CMFCToolBarMenuButtonsButton CMFCToolBarMenuButtonsButton, *PCMFCToolBarMenuButtonsButton;

struct CMFCToolBarMenuButtonsButton { // PlaceHolder Class Structure
};

typedef struct CFontDialog CFontDialog, *PCFontDialog;

struct CFontDialog { // PlaceHolder Class Structure
};

typedef struct CMFCPropertySheetCategoryInfo CMFCPropertySheetCategoryInfo, *PCMFCPropertySheetCategoryInfo;

struct CMFCPropertySheetCategoryInfo { // PlaceHolder Class Structure
};

typedef struct CMFCTabCtrl CMFCTabCtrl, *PCMFCTabCtrl;

struct CMFCTabCtrl { // PlaceHolder Class Structure
};

typedef struct CEnumArray CEnumArray, *PCEnumArray;

struct CEnumArray { // PlaceHolder Class Structure
};

typedef struct CImageList CImageList, *PCImageList;

struct CImageList { // PlaceHolder Class Structure
};

typedef struct COleStreamFile COleStreamFile, *PCOleStreamFile;

struct COleStreamFile { // PlaceHolder Class Structure
};

typedef struct CCriticalSection CCriticalSection, *PCCriticalSection;

struct CCriticalSection { // PlaceHolder Class Structure
};

typedef struct CDocManager CDocManager, *PCDocManager;

struct CDocManager { // PlaceHolder Class Structure
};

typedef struct CMFCShadowRenderer CMFCShadowRenderer, *PCMFCShadowRenderer;

struct CMFCShadowRenderer { // PlaceHolder Class Structure
};

typedef struct CDockSite CDockSite, *PCDockSite;

struct CDockSite { // PlaceHolder Class Structure
};

typedef struct CObList CObList, *PCObList;

struct CObList { // PlaceHolder Class Structure
};

typedef struct COleLinksDialog COleLinksDialog, *PCOleLinksDialog;

struct COleLinksDialog { // PlaceHolder Class Structure
};

typedef struct CPrintingDialog CPrintingDialog, *PCPrintingDialog;

struct CPrintingDialog { // PlaceHolder Class Structure
};

typedef struct CRecentDockSiteInfo CRecentDockSiteInfo, *PCRecentDockSiteInfo;

struct CRecentDockSiteInfo { // PlaceHolder Class Structure
};

typedef struct CDockContext CDockContext, *PCDockContext;

struct CDockContext { // PlaceHolder Class Structure
};

typedef struct CMiniDockFrameWnd CMiniDockFrameWnd, *PCMiniDockFrameWnd;

struct CMiniDockFrameWnd { // PlaceHolder Class Structure
};

typedef struct CMFCImagePaintArea CMFCImagePaintArea, *PCMFCImagePaintArea;

struct CMFCImagePaintArea { // PlaceHolder Class Structure
};

typedef struct CMFCStandardColorsPropertyPage CMFCStandardColorsPropertyPage, *PCMFCStandardColorsPropertyPage;

struct CMFCStandardColorsPropertyPage { // PlaceHolder Class Structure
};

typedef struct CMFCRibbonGalleryMenuButton CMFCRibbonGalleryMenuButton, *PCMFCRibbonGalleryMenuButton;

struct CMFCRibbonGalleryMenuButton { // PlaceHolder Class Structure
};

typedef struct CEvent CEvent, *PCEvent;

struct CEvent { // PlaceHolder Class Structure
};

typedef struct CMDIFrameWnd CMDIFrameWnd, *PCMDIFrameWnd;

struct CMDIFrameWnd { // PlaceHolder Class Structure
};

typedef struct CArray<struct_HWND__*,struct_HWND__*> CArray<struct_HWND__*,struct_HWND__*>, *PCArray<struct_HWND__*,struct_HWND__*>;

struct CArray<struct_HWND__*,struct_HWND__*> { // PlaceHolder Class Structure
};

typedef struct COleConvertDialog COleConvertDialog, *PCOleConvertDialog;

struct COleConvertDialog { // PlaceHolder Class Structure
};

typedef struct CMFCToolBarsListCheckBox CMFCToolBarsListCheckBox, *PCMFCToolBarsListCheckBox;

struct CMFCToolBarsListCheckBox { // PlaceHolder Class Structure
};

typedef struct CMFCCustomizeButton CMFCCustomizeButton, *PCMFCCustomizeButton;

struct CMFCCustomizeButton { // PlaceHolder Class Structure
};

typedef struct CPen CPen, *PCPen;

struct CPen { // PlaceHolder Class Structure
};

typedef struct CList<unsigned_int,unsigned_int&> CList<unsigned_int,unsigned_int&>, *PCList<unsigned_int,unsigned_int&>;

struct CList<unsigned_int,unsigned_int&> { // PlaceHolder Class Structure
};

typedef struct _AFX_COLOR_STATE _AFX_COLOR_STATE, *P_AFX_COLOR_STATE;

struct _AFX_COLOR_STATE { // PlaceHolder Class Structure
};

typedef struct COleDataSource COleDataSource, *PCOleDataSource;

struct COleDataSource { // PlaceHolder Class Structure
};

typedef struct CComCtlWrapper CComCtlWrapper, *PCComCtlWrapper;

struct CComCtlWrapper { // PlaceHolder Class Structure
};

typedef struct CMFCRibbonStatusBar CMFCRibbonStatusBar, *PCMFCRibbonStatusBar;

struct CMFCRibbonStatusBar { // PlaceHolder Class Structure
};

typedef struct CList<class_CMFCRibbonCustomizeCategory*,class_CMFCRibbonCustomizeCategory*> CList<class_CMFCRibbonCustomizeCategory*,class_CMFCRibbonCustomizeCategory*>, *PCList<class_CMFCRibbonCustomizeCategory*,class_CMFCRibbonCustomizeCategory*>;

struct CList<class_CMFCRibbonCustomizeCategory*,class_CMFCRibbonCustomizeCategory*> { // PlaceHolder Class Structure
};

typedef ulonglong __uint64;

typedef struct CMFCToolBarImages CMFCToolBarImages, *PCMFCToolBarImages;

struct CMFCToolBarImages { // PlaceHolder Class Structure
};

typedef struct CDrawingManager CDrawingManager, *PCDrawingManager;

struct CDrawingManager { // PlaceHolder Class Structure
};

typedef struct CProgressCtrl CProgressCtrl, *PCProgressCtrl;

struct CProgressCtrl { // PlaceHolder Class Structure
};

typedef struct CDockBar CDockBar, *PCDockBar;

struct CDockBar { // PlaceHolder Class Structure
};

typedef struct CHeaderCtrl CHeaderCtrl, *PCHeaderCtrl;

struct CHeaderCtrl { // PlaceHolder Class Structure
};

typedef struct CPtrList CPtrList, *PCPtrList;

struct CPtrList { // PlaceHolder Class Structure
};

typedef struct CPaneFrameWnd CPaneFrameWnd, *PCPaneFrameWnd;

struct CPaneFrameWnd { // PlaceHolder Class Structure
};

typedef struct CMFCToolBarsOptionsPropertyPage CMFCToolBarsOptionsPropertyPage, *PCMFCToolBarsOptionsPropertyPage;

struct CMFCToolBarsOptionsPropertyPage { // PlaceHolder Class Structure
};

typedef struct CList<class_IControlSiteFactory*,class_IControlSiteFactory*> CList<class_IControlSiteFactory*,class_IControlSiteFactory*>, *PCList<class_IControlSiteFactory*,class_IControlSiteFactory*>;

struct CList<class_IControlSiteFactory*,class_IControlSiteFactory*> { // PlaceHolder Class Structure
};

typedef struct CList<struct_HWND__*,struct_HWND__*> CList<struct_HWND__*,struct_HWND__*>, *PCList<struct_HWND__*,struct_HWND__*>;

struct CList<struct_HWND__*,struct_HWND__*> { // PlaceHolder Class Structure
};

typedef struct CMFCToolBarsCommandsPropertyPage CMFCToolBarsCommandsPropertyPage, *PCMFCToolBarsCommandsPropertyPage;

struct CMFCToolBarsCommandsPropertyPage { // PlaceHolder Class Structure
};

typedef struct CDockingManager CDockingManager, *PCDockingManager;

struct CDockingManager { // PlaceHolder Class Structure
};

typedef struct CMFCToolBarsToolsPropertyPage CMFCToolBarsToolsPropertyPage, *PCMFCToolBarsToolsPropertyPage;

struct CMFCToolBarsToolsPropertyPage { // PlaceHolder Class Structure
};

typedef struct CSmartDockingGroupGuide CSmartDockingGroupGuide, *PCSmartDockingGroupGuide;

struct CSmartDockingGroupGuide { // PlaceHolder Class Structure
};

typedef struct CTypedPtrArray<class_CObArray,class_CMFCCaptionButton*> CTypedPtrArray<class_CObArray,class_CMFCCaptionButton*>, *PCTypedPtrArray<class_CObArray,class_CMFCCaptionButton*>;

struct CTypedPtrArray<class_CObArray,class_CMFCCaptionButton*> { // PlaceHolder Class Structure
};

typedef struct CMFCFilterChunkValueImpl CMFCFilterChunkValueImpl, *PCMFCFilterChunkValueImpl;

struct CMFCFilterChunkValueImpl { // PlaceHolder Class Structure
};

typedef struct CSpinButtonCtrl CSpinButtonCtrl, *PCSpinButtonCtrl;

struct CSpinButtonCtrl { // PlaceHolder Class Structure
};

typedef struct _s_UnwindMapEntry _s_UnwindMapEntry, *P_s_UnwindMapEntry;

typedef struct _s_UnwindMapEntry UnwindMapEntry;

struct _s_UnwindMapEntry {
    __ehstate_t toState;
    void (*action)(void);
};

typedef struct CListBox CListBox, *PCListBox;

struct CListBox { // PlaceHolder Class Structure
};

typedef struct CMap<unsigned_int,unsigned_int,struct_HWND__*,struct_HWND__*> CMap<unsigned_int,unsigned_int,struct_HWND__*,struct_HWND__*>, *PCMap<unsigned_int,unsigned_int,struct_HWND__*,struct_HWND__*>;

struct CMap<unsigned_int,unsigned_int,struct_HWND__*,struct_HWND__*> { // PlaceHolder Class Structure
};

typedef struct CBasePane CBasePane, *PCBasePane;

struct CBasePane { // PlaceHolder Class Structure
};

typedef struct CArray<class_CSize,class_CSize> CArray<class_CSize,class_CSize>, *PCArray<class_CSize,class_CSize>;

struct CArray<class_CSize,class_CSize> { // PlaceHolder Class Structure
};

typedef struct CFile CFile, *PCFile;

struct CFile { // PlaceHolder Class Structure
};

typedef struct CArray<class_CMFCVisualManagerBitmapCache::CMFCVisualManagerBitmapCacheItem*,class_CMFCVisualManagerBitmapCache::CMFCVisualManagerBitmapCacheItem*> CArray<class_CMFCVisualManagerBitmapCache::CMFCVisualManagerBitmapCacheItem*,class_CMFCVisualManagerBitmapCache::CMFCVisualManagerBitmapCacheItem*>, *PCArray<class_CMFCVisualManagerBitmapCache::CMFCVisualManagerBitmapCacheItem*,class_CMFCVisualManagerBitmapCache::CMFCVisualManagerBitmapCacheItem*>;

struct CArray<class_CMFCVisualManagerBitmapCache::CMFCVisualManagerBitmapCacheItem*,class_CMFCVisualManagerBitmapCache::CMFCVisualManagerBitmapCacheItem*> { // PlaceHolder Class Structure
};

typedef struct CMFCRibbonLabel CMFCRibbonLabel, *PCMFCRibbonLabel;

struct CMFCRibbonLabel { // PlaceHolder Class Structure
};

typedef struct CInnerUnknown CInnerUnknown, *PCInnerUnknown;

struct CInnerUnknown { // PlaceHolder Class Structure
};

typedef struct CMap<unsigned_int,unsigned_int,class_CMFCRibbonStatusBarPane*,class_CMFCRibbonStatusBarPane*> CMap<unsigned_int,unsigned_int,class_CMFCRibbonStatusBarPane*,class_CMFCRibbonStatusBarPane*>, *PCMap<unsigned_int,unsigned_int,class_CMFCRibbonStatusBarPane*,class_CMFCRibbonStatusBarPane*>;

struct CMap<unsigned_int,unsigned_int,class_CMFCRibbonStatusBarPane*,class_CMFCRibbonStatusBarPane*> { // PlaceHolder Class Structure
};

typedef struct CArray<class_CMFCRibbonBaseElement*,class_CMFCRibbonBaseElement*> CArray<class_CMFCRibbonBaseElement*,class_CMFCRibbonBaseElement*>, *PCArray<class_CMFCRibbonBaseElement*,class_CMFCRibbonBaseElement*>;

struct CArray<class_CMFCRibbonBaseElement*,class_CMFCRibbonBaseElement*> { // PlaceHolder Class Structure
};

typedef struct CList<struct_tagPOINT,struct_tagPOINT> CList<struct_tagPOINT,struct_tagPOINT>, *PCList<struct_tagPOINT,struct_tagPOINT>;

struct CList<struct_tagPOINT,struct_tagPOINT> { // PlaceHolder Class Structure
};

typedef struct CSimpleException CSimpleException, *PCSimpleException;

struct CSimpleException { // PlaceHolder Class Structure
};

typedef struct CMFCToolBarCmdUI CMFCToolBarCmdUI, *PCMFCToolBarCmdUI;

struct CMFCToolBarCmdUI { // PlaceHolder Class Structure
};

typedef struct CMFCRibbonKeyTip CMFCRibbonKeyTip, *PCMFCRibbonKeyTip;

struct CMFCRibbonKeyTip { // PlaceHolder Class Structure
};

typedef struct CMFCLinkCtrl CMFCLinkCtrl, *PCMFCLinkCtrl;

struct CMFCLinkCtrl { // PlaceHolder Class Structure
};

typedef struct CList<unsigned_int,unsigned_int> CList<unsigned_int,unsigned_int>, *PCList<unsigned_int,unsigned_int>;

struct CList<unsigned_int,unsigned_int> { // PlaceHolder Class Structure
};

typedef struct CMFCToolBarsCustomizeDialog CMFCToolBarsCustomizeDialog, *PCMFCToolBarsCustomizeDialog;

struct CMFCToolBarsCustomizeDialog { // PlaceHolder Class Structure
};

typedef struct CMFCTabDropTarget CMFCTabDropTarget, *PCMFCTabDropTarget;

struct CMFCTabDropTarget { // PlaceHolder Class Structure
};

typedef struct _s_FuncInfo _s_FuncInfo, *P_s_FuncInfo;

struct _s_FuncInfo {
    uint magicNumber_and_bbtFlags;
    __ehstate_t maxState;
    UnwindMapEntry *pUnwindMap;
    uint nTryBlocks;
    TryBlockMapEntry *pTryBlockMap;
    uint nIPMapEntries;
    void *pIPToStateMap;
    ESTypeList *pESTypeList;
    int EHFlags;
};

typedef struct CMFCRibbonStatusBarCustomizeButton CMFCRibbonStatusBarCustomizeButton, *PCMFCRibbonStatusBarCustomizeButton;

struct CMFCRibbonStatusBarCustomizeButton { // PlaceHolder Class Structure
};

typedef struct CMFCRibbonBaseElement CMFCRibbonBaseElement, *PCMFCRibbonBaseElement;

struct CMFCRibbonBaseElement { // PlaceHolder Class Structure
};

typedef struct CIPAddressCtrl CIPAddressCtrl, *PCIPAddressCtrl;

struct CIPAddressCtrl { // PlaceHolder Class Structure
};

typedef struct CArray<class_CMFCRibbonInfo::XElement*,class_CMFCRibbonInfo::XElement*> CArray<class_CMFCRibbonInfo::XElement*,class_CMFCRibbonInfo::XElement*>, *PCArray<class_CMFCRibbonInfo::XElement*,class_CMFCRibbonInfo::XElement*>;

struct CArray<class_CMFCRibbonInfo::XElement*,class_CMFCRibbonInfo::XElement*> { // PlaceHolder Class Structure
};

typedef struct CArray<int,int_const&> CArray<int,int_const&>, *PCArray<int,int_const&>;

struct CArray<int,int_const&> { // PlaceHolder Class Structure
};

typedef struct CMFCBaseToolBar CMFCBaseToolBar, *PCMFCBaseToolBar;

struct CMFCBaseToolBar { // PlaceHolder Class Structure
};

typedef struct CSharedFile CSharedFile, *PCSharedFile;

struct CSharedFile { // PlaceHolder Class Structure
};

typedef struct CList<class_CPropertyPage*,class_CPropertyPage*> CList<class_CPropertyPage*,class_CPropertyPage*>, *PCList<class_CPropertyPage*,class_CPropertyPage*>;

struct CList<class_CPropertyPage*,class_CPropertyPage*> { // PlaceHolder Class Structure
};

typedef struct CWinApp CWinApp, *PCWinApp;

struct CWinApp { // PlaceHolder Class Structure
};

typedef struct CMFCToolBarsMenuPropertyPage CMFCToolBarsMenuPropertyPage, *PCMFCToolBarsMenuPropertyPage;

struct CMFCToolBarsMenuPropertyPage { // PlaceHolder Class Structure
};

typedef struct CArray<class_CMFCRibbonInfo::XRibbonInfoParser*,class_CMFCRibbonInfo::XRibbonInfoParser*> CArray<class_CMFCRibbonInfo::XRibbonInfoParser*,class_CMFCRibbonInfo::XRibbonInfoParser*>, *PCArray<class_CMFCRibbonInfo::XRibbonInfoParser*,class_CMFCRibbonInfo::XRibbonInfoParser*>;

struct CArray<class_CMFCRibbonInfo::XRibbonInfoParser*,class_CMFCRibbonInfo::XRibbonInfoParser*> { // PlaceHolder Class Structure
};

typedef struct CMFCToolBarButtonsListButton CMFCToolBarButtonsListButton, *PCMFCToolBarButtonsListButton;

struct CMFCToolBarButtonsListButton { // PlaceHolder Class Structure
};

typedef struct CMFCToolBarsKeyboardPropertyPage CMFCToolBarsKeyboardPropertyPage, *PCMFCToolBarsKeyboardPropertyPage;

struct CMFCToolBarsKeyboardPropertyPage { // PlaceHolder Class Structure
};

typedef struct CMFCVisualManagerBitmapCache CMFCVisualManagerBitmapCache, *PCMFCVisualManagerBitmapCache;

struct CMFCVisualManagerBitmapCache { // PlaceHolder Class Structure
};

typedef struct COleUILinkInfo COleUILinkInfo, *PCOleUILinkInfo;

struct COleUILinkInfo { // PlaceHolder Class Structure
};

typedef struct CArray<class_CMFCRibbonInfo::XCategory*,class_CMFCRibbonInfo::XCategory*> CArray<class_CMFCRibbonInfo::XCategory*,class_CMFCRibbonInfo::XCategory*>, *PCArray<class_CMFCRibbonInfo::XCategory*,class_CMFCRibbonInfo::XCategory*>;

struct CArray<class_CMFCRibbonInfo::XCategory*,class_CMFCRibbonInfo::XCategory*> { // PlaceHolder Class Structure
};

typedef struct CMFCOutlookBarPaneAdapter CMFCOutlookBarPaneAdapter, *PCMFCOutlookBarPaneAdapter;

struct CMFCOutlookBarPaneAdapter { // PlaceHolder Class Structure
};

typedef struct CMFCOutlookBarToolBar CMFCOutlookBarToolBar, *PCMFCOutlookBarToolBar;

struct CMFCOutlookBarToolBar { // PlaceHolder Class Structure
};

typedef struct CMFCPropertyGridColorProperty CMFCPropertyGridColorProperty, *PCMFCPropertyGridColorProperty;

struct CMFCPropertyGridColorProperty { // PlaceHolder Class Structure
};

typedef struct CMirrorFile CMirrorFile, *PCMirrorFile;

struct CMirrorFile { // PlaceHolder Class Structure
};

typedef struct CMFCTasksPaneToolBar CMFCTasksPaneToolBar, *PCMFCTasksPaneToolBar;

struct CMFCTasksPaneToolBar { // PlaceHolder Class Structure
};

typedef struct CCellObj CCellObj, *PCCellObj;

struct CCellObj { // PlaceHolder Class Structure
};

typedef struct COleDocIPFrameWndEx COleDocIPFrameWndEx, *PCOleDocIPFrameWndEx;

struct COleDocIPFrameWndEx { // PlaceHolder Class Structure
};

typedef struct CFormView CFormView, *PCFormView;

struct CFormView { // PlaceHolder Class Structure
};

typedef struct CRichEditCtrl CRichEditCtrl, *PCRichEditCtrl;

struct CRichEditCtrl { // PlaceHolder Class Structure
};

typedef struct CPaintDC CPaintDC, *PCPaintDC;

struct CPaintDC { // PlaceHolder Class Structure
};

typedef struct CMFCColorBarCmdUI CMFCColorBarCmdUI, *PCMFCColorBarCmdUI;

struct CMFCColorBarCmdUI { // PlaceHolder Class Structure
};

typedef struct CDockablePaneAdapter CDockablePaneAdapter, *PCDockablePaneAdapter;

struct CDockablePaneAdapter { // PlaceHolder Class Structure
};

typedef struct CMFCRibbonQuickAccessToolBar CMFCRibbonQuickAccessToolBar, *PCMFCRibbonQuickAccessToolBar;

struct CMFCRibbonQuickAccessToolBar { // PlaceHolder Class Structure
};

typedef struct CMapPtrToPtr CMapPtrToPtr, *PCMapPtrToPtr;

struct CMapPtrToPtr { // PlaceHolder Class Structure
};

typedef struct CMFCVisualManagerOfficeXP CMFCVisualManagerOfficeXP, *PCMFCVisualManagerOfficeXP;

struct CMFCVisualManagerOfficeXP { // PlaceHolder Class Structure
};

typedef struct CFullScreenToolbar CFullScreenToolbar, *PCFullScreenToolbar;

struct CFullScreenToolbar { // PlaceHolder Class Structure
};

typedef struct CNewTypeDlg CNewTypeDlg, *PCNewTypeDlg;

struct CNewTypeDlg { // PlaceHolder Class Structure
};

typedef struct CEnumFormatEtc CEnumFormatEtc, *PCEnumFormatEtc;

struct CEnumFormatEtc { // PlaceHolder Class Structure
};

typedef struct CMap<class_ATL::CStringT<char,class_StrTraitMFC<char,class_ATL::ChTraitsCRT<char>_>_>,char_const*,struct_HMENU__*,struct_HMENU__*> CMap<class_ATL::CStringT<char,class_StrTraitMFC<char,class_ATL::ChTraitsCRT<char>_>_>,char_const*,struct_HMENU__*,struct_HMENU__*>, *PCMap<class_ATL::CStringT<char,class_StrTraitMFC<char,class_ATL::ChTraitsCRT<char>_>_>,char_const*,struct_HMENU__*,struct_HMENU__*>;

struct CMap<class_ATL::CStringT<char,class_StrTraitMFC<char,class_ATL::ChTraitsCRT<char>_>_>,char_const*,struct_HMENU__*,struct_HMENU__*> { // PlaceHolder Class Structure
};

typedef struct CColorDialog CColorDialog, *PCColorDialog;

struct CColorDialog { // PlaceHolder Class Structure
};

typedef struct CArray<class_CMFCRibbonInfo::XPanel*,class_CMFCRibbonInfo::XPanel*> CArray<class_CMFCRibbonInfo::XPanel*,class_CMFCRibbonInfo::XPanel*>, *PCArray<class_CMFCRibbonInfo::XPanel*,class_CMFCRibbonInfo::XPanel*>;

struct CArray<class_CMFCRibbonInfo::XPanel*,class_CMFCRibbonInfo::XPanel*> { // PlaceHolder Class Structure
};

typedef struct CMetaFileDC CMetaFileDC, *PCMetaFileDC;

struct CMetaFileDC { // PlaceHolder Class Structure
};

typedef struct CMFCColorMenuButton CMFCColorMenuButton, *PCMFCColorMenuButton;

struct CMFCColorMenuButton { // PlaceHolder Class Structure
};

typedef struct CMap<class_CDocument*,class_CDocument*,class_ATL::CStringT<char,class_StrTraitMFC<char,class_ATL::ChTraitsCRT<char>_>_>,char_const*> CMap<class_CDocument*,class_CDocument*,class_ATL::CStringT<char,class_StrTraitMFC<char,class_ATL::ChTraitsCRT<char>_>_>,char_const*>, *PCMap<class_CDocument*,class_CDocument*,class_ATL::CStringT<char,class_StrTraitMFC<char,class_ATL::ChTraitsCRT<char>_>_>,char_const*>;

struct CMap<class_CDocument*,class_CDocument*,class_ATL::CStringT<char,class_StrTraitMFC<char,class_ATL::ChTraitsCRT<char>_>_>,char_const*> { // PlaceHolder Class Structure
};

typedef struct CMFCOutlookBarPaneButton CMFCOutlookBarPaneButton, *PCMFCOutlookBarPaneButton;

struct CMFCOutlookBarPaneButton { // PlaceHolder Class Structure
};

typedef struct CArray<long,long> CArray<long,long>, *PCArray<long,long>;

struct CArray<long,long> { // PlaceHolder Class Structure
};

typedef struct CMFCColorBar CMFCColorBar, *PCMFCColorBar;

struct CMFCColorBar { // PlaceHolder Class Structure
};

typedef struct CMFCRibbonQuickAccessCustomizeButton CMFCRibbonQuickAccessCustomizeButton, *PCMFCRibbonQuickAccessCustomizeButton;

struct CMFCRibbonQuickAccessCustomizeButton { // PlaceHolder Class Structure
};

typedef struct CXMLParser CXMLParser, *PCXMLParser;

struct CXMLParser { // PlaceHolder Class Structure
};

typedef struct CFullScreenImpl CFullScreenImpl, *PCFullScreenImpl;

struct CFullScreenImpl { // PlaceHolder Class Structure
};

typedef struct CArray<class_CMFCRibbonKeyTip*,class_CMFCRibbonKeyTip*> CArray<class_CMFCRibbonKeyTip*,class_CMFCRibbonKeyTip*>, *PCArray<class_CMFCRibbonKeyTip*,class_CMFCRibbonKeyTip*>;

struct CArray<class_CMFCRibbonKeyTip*,class_CMFCRibbonKeyTip*> { // PlaceHolder Class Structure
};

typedef struct CMFCRibbonDefaultPanelButton CMFCRibbonDefaultPanelButton, *PCMFCRibbonDefaultPanelButton;

struct CMFCRibbonDefaultPanelButton { // PlaceHolder Class Structure
};

typedef struct CMFCRibbonPanelMenuBar CMFCRibbonPanelMenuBar, *PCMFCRibbonPanelMenuBar;

struct CMFCRibbonPanelMenuBar { // PlaceHolder Class Structure
};

typedef struct CControlSiteFactoryMgr CControlSiteFactoryMgr, *PCControlSiteFactoryMgr;

struct CControlSiteFactoryMgr { // PlaceHolder Class Structure
};

typedef struct CArchiveException CArchiveException, *PCArchiveException;

struct CArchiveException { // PlaceHolder Class Structure
};

typedef struct CStringList CStringList, *PCStringList;

struct CStringList { // PlaceHolder Class Structure
};

typedef struct CMFCPropertyGridProperty CMFCPropertyGridProperty, *PCMFCPropertyGridProperty;

struct CMFCPropertyGridProperty { // PlaceHolder Class Structure
};

typedef struct CMFCToolBar CMFCToolBar, *PCMFCToolBar;

struct CMFCToolBar { // PlaceHolder Class Structure
};

typedef struct COleCntrFrameWndEx COleCntrFrameWndEx, *PCOleCntrFrameWndEx;

struct COleCntrFrameWndEx { // PlaceHolder Class Structure
};

typedef struct CMFCMenuButton CMFCMenuButton, *PCMFCMenuButton;

struct CMFCMenuButton { // PlaceHolder Class Structure
};

typedef struct CMFCControlContainer CMFCControlContainer, *PCMFCControlContainer;

struct CMFCControlContainer { // PlaceHolder Class Structure
};

typedef struct CArray<class_CVariantBoolPair,class_CVariantBoolPair_const&> CArray<class_CVariantBoolPair,class_CVariantBoolPair_const&>, *PCArray<class_CVariantBoolPair,class_CVariantBoolPair_const&>;

struct CArray<class_CVariantBoolPair,class_CVariantBoolPair_const&> { // PlaceHolder Class Structure
};

typedef struct CSemaphore CSemaphore, *PCSemaphore;

struct CSemaphore { // PlaceHolder Class Structure
};

typedef struct CMFCRibbonEdit CMFCRibbonEdit, *PCMFCRibbonEdit;

struct CMFCRibbonEdit { // PlaceHolder Class Structure
};

typedef struct CMFCColorPopupMenu CMFCColorPopupMenu, *PCMFCColorPopupMenu;

struct CMFCColorPopupMenu { // PlaceHolder Class Structure
};

typedef struct CList<unsigned_long,unsigned_long> CList<unsigned_long,unsigned_long>, *PCList<unsigned_long,unsigned_long>;

struct CList<unsigned_long,unsigned_long> { // PlaceHolder Class Structure
};

typedef struct CWordArray CWordArray, *PCWordArray;

struct CWordArray { // PlaceHolder Class Structure
};

typedef struct CMapWordToOb CMapWordToOb, *PCMapWordToOb;

struct CMapWordToOb { // PlaceHolder Class Structure
};

typedef struct CMFCRibbonCmdUI CMFCRibbonCmdUI, *PCMFCRibbonCmdUI;

struct CMFCRibbonCmdUI { // PlaceHolder Class Structure
};

typedef struct CComboBoxEx CComboBoxEx, *PCComboBoxEx;

struct CComboBoxEx { // PlaceHolder Class Structure
};

typedef struct CScrollBar CScrollBar, *PCScrollBar;

struct CScrollBar { // PlaceHolder Class Structure
};

typedef struct CMFCRibbonUndoButton CMFCRibbonUndoButton, *PCMFCRibbonUndoButton;

struct CMFCRibbonUndoButton { // PlaceHolder Class Structure
};

typedef struct CWindowDC CWindowDC, *PCWindowDC;

struct CWindowDC { // PlaceHolder Class Structure
};

typedef struct CToolBar CToolBar, *PCToolBar;

struct CToolBar { // PlaceHolder Class Structure
};

typedef struct CDialogEx CDialogEx, *PCDialogEx;

struct CDialogEx { // PlaceHolder Class Structure
};

typedef struct CKeyboardManager CKeyboardManager, *PCKeyboardManager;

struct CKeyboardManager { // PlaceHolder Class Structure
};

typedef struct CMFCAcceleratorKeyAssignCtrl CMFCAcceleratorKeyAssignCtrl, *PCMFCAcceleratorKeyAssignCtrl;

struct CMFCAcceleratorKeyAssignCtrl { // PlaceHolder Class Structure
};

typedef struct CEnumUnknown CEnumUnknown, *PCEnumUnknown;

struct CEnumUnknown { // PlaceHolder Class Structure
};

typedef struct COleControlLock COleControlLock, *PCOleControlLock;

struct COleControlLock { // PlaceHolder Class Structure
};

typedef struct CSmartDockingStandaloneGuideWnd CSmartDockingStandaloneGuideWnd, *PCSmartDockingStandaloneGuideWnd;

struct CSmartDockingStandaloneGuideWnd { // PlaceHolder Class Structure
};

typedef struct CMFCCaptionButtonEx CMFCCaptionButtonEx, *PCMFCCaptionButtonEx;

struct CMFCCaptionButtonEx { // PlaceHolder Class Structure
};

typedef struct CTasksPaneMenuButton CTasksPaneMenuButton, *PCTasksPaneMenuButton;

struct CTasksPaneMenuButton { // PlaceHolder Class Structure
};

typedef struct CMiniFrameWnd CMiniFrameWnd, *PCMiniFrameWnd;

struct CMiniFrameWnd { // PlaceHolder Class Structure
};

typedef struct CMFCDropDownToolBar CMFCDropDownToolBar, *PCMFCDropDownToolBar;

struct CMFCDropDownToolBar { // PlaceHolder Class Structure
};

typedef struct CMFCShellTreeCtrl CMFCShellTreeCtrl, *PCMFCShellTreeCtrl;

struct CMFCShellTreeCtrl { // PlaceHolder Class Structure
};

typedef struct CMFCColorDialog CMFCColorDialog, *PCMFCColorDialog;

struct CMFCColorDialog { // PlaceHolder Class Structure
};

typedef struct CMFCPropertyPage CMFCPropertyPage, *PCMFCPropertyPage;

struct CMFCPropertyPage { // PlaceHolder Class Structure
};

typedef struct COleChangeIconDialog COleChangeIconDialog, *PCOleChangeIconDialog;

struct COleChangeIconDialog { // PlaceHolder Class Structure
};

typedef struct CMFCColorButton CMFCColorButton, *PCMFCColorButton;

struct CMFCColorButton { // PlaceHolder Class Structure
};

typedef struct CFileException CFileException, *PCFileException;

struct CFileException { // PlaceHolder Class Structure
};

typedef struct CMap<unsigned_int,unsigned_int,unsigned_long,unsigned_long> CMap<unsigned_int,unsigned_int,unsigned_long,unsigned_long>, *PCMap<unsigned_int,unsigned_int,unsigned_long,unsigned_long>;

struct CMap<unsigned_int,unsigned_int,unsigned_long,unsigned_long> { // PlaceHolder Class Structure
};

typedef struct CCheckListBox CCheckListBox, *PCCheckListBox;

struct CCheckListBox { // PlaceHolder Class Structure
};

typedef struct _AFX_DEBUG_STATE _AFX_DEBUG_STATE, *P_AFX_DEBUG_STATE;

struct _AFX_DEBUG_STATE { // PlaceHolder Class Structure
};

typedef struct CMFCPropertyGridFileProperty CMFCPropertyGridFileProperty, *PCMFCPropertyGridFileProperty;

struct CMFCPropertyGridFileProperty { // PlaceHolder Class Structure
};

typedef struct CPtrArray CPtrArray, *PCPtrArray;

struct CPtrArray { // PlaceHolder Class Structure
};

typedef struct COleDispatchException COleDispatchException, *PCOleDispatchException;

struct COleDispatchException { // PlaceHolder Class Structure
};

typedef struct CArchiveStream CArchiveStream, *PCArchiveStream;

struct CArchiveStream { // PlaceHolder Class Structure
};

typedef struct CMFCToolTipCtrl CMFCToolTipCtrl, *PCMFCToolTipCtrl;

struct CMFCToolTipCtrl { // PlaceHolder Class Structure
};

typedef struct CDocObjectServerItem CDocObjectServerItem, *PCDocObjectServerItem;

struct CDocObjectServerItem { // PlaceHolder Class Structure
};

typedef struct CMapStringToString CMapStringToString, *PCMapStringToString;

struct CMapStringToString { // PlaceHolder Class Structure
};

typedef struct CTestCmdUI CTestCmdUI, *PCTestCmdUI;

struct CTestCmdUI { // PlaceHolder Class Structure
};

typedef struct CMFCColorPickerCtrl CMFCColorPickerCtrl, *PCMFCColorPickerCtrl;

struct CMFCColorPickerCtrl { // PlaceHolder Class Structure
};

typedef struct CList<class_CMFCButton*,class_CMFCButton*> CList<class_CMFCButton*,class_CMFCButton*>, *PCList<class_CMFCButton*,class_CMFCButton*>;

struct CList<class_CMFCButton*,class_CMFCButton*> { // PlaceHolder Class Structure
};

typedef struct CDialogImpl CDialogImpl, *PCDialogImpl;

struct CDialogImpl { // PlaceHolder Class Structure
};

typedef struct CMFCStatusBarCmdUI CMFCStatusBarCmdUI, *PCMFCStatusBarCmdUI;

struct CMFCStatusBarCmdUI { // PlaceHolder Class Structure
};

typedef struct CMemDC CMemDC, *PCMemDC;

struct CMemDC { // PlaceHolder Class Structure
};

typedef struct CControlBar CControlBar, *PCControlBar;

struct CControlBar { // PlaceHolder Class Structure
};

typedef struct COleUpdateDialog COleUpdateDialog, *PCOleUpdateDialog;

struct COleUpdateDialog { // PlaceHolder Class Structure
};

typedef struct CEditView CEditView, *PCEditView;

struct CEditView { // PlaceHolder Class Structure
};

typedef struct CGdiObject CGdiObject, *PCGdiObject;

struct CGdiObject { // PlaceHolder Class Structure
};

typedef struct CMFCProperySheetListBox CMFCProperySheetListBox, *PCMFCProperySheetListBox;

struct CMFCProperySheetListBox { // PlaceHolder Class Structure
};

typedef struct CListCtrl CListCtrl, *PCListCtrl;

struct CListCtrl { // PlaceHolder Class Structure
};

typedef struct CUserToolsManager CUserToolsManager, *PCUserToolsManager;

struct CUserToolsManager { // PlaceHolder Class Structure
};

typedef struct CMemFile CMemFile, *PCMemFile;

struct CMemFile { // PlaceHolder Class Structure
};

typedef struct CMFCOutlookBarPaneList CMFCOutlookBarPaneList, *PCMFCOutlookBarPaneList;

struct CMFCOutlookBarPaneList { // PlaceHolder Class Structure
};

typedef struct COleDialog COleDialog, *PCOleDialog;

struct COleDialog { // PlaceHolder Class Structure
};

typedef struct CHelpComboBoxButton CHelpComboBoxButton, *PCHelpComboBoxButton;

struct CHelpComboBoxButton { // PlaceHolder Class Structure
};

typedef struct COleDropTarget COleDropTarget, *PCOleDropTarget;

struct COleDropTarget { // PlaceHolder Class Structure
};

typedef struct CMFCMousePropertyPage CMFCMousePropertyPage, *PCMFCMousePropertyPage;

struct CMFCMousePropertyPage { // PlaceHolder Class Structure
};

typedef struct CTreeCtrl CTreeCtrl, *PCTreeCtrl;

struct CTreeCtrl { // PlaceHolder Class Structure
};

typedef struct CMFCRibbonRecentFilesList CMFCRibbonRecentFilesList, *PCMFCRibbonRecentFilesList;

struct CMFCRibbonRecentFilesList { // PlaceHolder Class Structure
};

typedef struct CScrollView CScrollView, *PCScrollView;

struct CScrollView { // PlaceHolder Class Structure
};

typedef struct CMFCOutlookBarPane CMFCOutlookBarPane, *PCMFCOutlookBarPane;

struct CMFCOutlookBarPane { // PlaceHolder Class Structure
};

typedef struct CMFCTasksPanePropertyPage CMFCTasksPanePropertyPage, *PCMFCTasksPanePropertyPage;

struct CMFCTasksPanePropertyPage { // PlaceHolder Class Structure
};

typedef struct CDialog CDialog, *PCDialog;

struct CDialog { // PlaceHolder Class Structure
};

typedef struct CMFCDisableMenuAnimation CMFCDisableMenuAnimation, *PCMFCDisableMenuAnimation;

struct CMFCDisableMenuAnimation { // PlaceHolder Class Structure
};

typedef struct _s__RTTICompleteObjectLocator _s__RTTICompleteObjectLocator, *P_s__RTTICompleteObjectLocator;

struct _s__RTTICompleteObjectLocator {
    dword signature;
    dword offset; // offset of vbtable within class
    dword cdOffset; // constructor displacement offset
    struct TypeDescriptor *pTypeDescriptor; // ref to TypeDescriptor (RTTI 0) for class
    RTTIClassHierarchyDescriptor *pClassDescriptor; // ref to ClassHierarchyDescriptor (RTTI 3)
};

typedef struct CPngImage CPngImage, *PCPngImage;

struct CPngImage { // PlaceHolder Class Structure
};

typedef struct CMFCZoomKernel CMFCZoomKernel, *PCMFCZoomKernel;

struct CMFCZoomKernel { // PlaceHolder Class Structure
};

typedef struct CScreenWnd CScreenWnd, *PCScreenWnd;

struct CScreenWnd { // PlaceHolder Class Structure
};

typedef struct CFileDialog CFileDialog, *PCFileDialog;

struct CFileDialog { // PlaceHolder Class Structure
};

typedef struct CList<class_CMFCRibbonBaseElement*,class_CMFCRibbonBaseElement*> CList<class_CMFCRibbonBaseElement*,class_CMFCRibbonBaseElement*>, *PCList<class_CMFCRibbonBaseElement*,class_CMFCRibbonBaseElement*>;

struct CList<class_CMFCRibbonBaseElement*,class_CMFCRibbonBaseElement*> { // PlaceHolder Class Structure
};

typedef struct CBitmapButton CBitmapButton, *PCBitmapButton;

struct CBitmapButton { // PlaceHolder Class Structure
};

typedef struct CMFCCmdUsageCount CMFCCmdUsageCount, *PCMFCCmdUsageCount;

struct CMFCCmdUsageCount { // PlaceHolder Class Structure
};

typedef struct COleObjectFactory COleObjectFactory, *PCOleObjectFactory;

struct COleObjectFactory { // PlaceHolder Class Structure
};

typedef struct CMenuHash CMenuHash, *PCMenuHash;

struct CMenuHash { // PlaceHolder Class Structure
};

typedef struct CMFCListCtrl CMFCListCtrl, *PCMFCListCtrl;

struct CMFCListCtrl { // PlaceHolder Class Structure
};

typedef struct CTasksPaneHistoryButton CTasksPaneHistoryButton, *PCTasksPaneHistoryButton;

struct CTasksPaneHistoryButton { // PlaceHolder Class Structure
};

typedef struct CToolCmdUI CToolCmdUI, *PCToolCmdUI;

struct CToolCmdUI { // PlaceHolder Class Structure
};

typedef struct COleLinkingDoc COleLinkingDoc, *PCOleLinkingDoc;

struct COleLinkingDoc { // PlaceHolder Class Structure
};

typedef struct CMFCToolBarFontComboBox CMFCToolBarFontComboBox, *PCMFCToolBarFontComboBox;

struct CMFCToolBarFontComboBox { // PlaceHolder Class Structure
};

typedef struct CMFCRibbonFontComboBox CMFCRibbonFontComboBox, *PCMFCRibbonFontComboBox;

struct CMFCRibbonFontComboBox { // PlaceHolder Class Structure
};

typedef struct CMFCTasksPaneToolBarCmdUI CMFCTasksPaneToolBarCmdUI, *PCMFCTasksPaneToolBarCmdUI;

struct CMFCTasksPaneToolBarCmdUI { // PlaceHolder Class Structure
};

typedef struct CRecentFileList CRecentFileList, *PCRecentFileList;

struct CRecentFileList { // PlaceHolder Class Structure
};

typedef struct CDialogBar CDialogBar, *PCDialogBar;

struct CDialogBar { // PlaceHolder Class Structure
};

typedef struct CAnimateCtrl CAnimateCtrl, *PCAnimateCtrl;

struct CAnimateCtrl { // PlaceHolder Class Structure
};

typedef struct COutlookOptionsDlg COutlookOptionsDlg, *PCOutlookOptionsDlg;

struct COutlookOptionsDlg { // PlaceHolder Class Structure
};

typedef struct CMFCPropertySheetTabCtrl CMFCPropertySheetTabCtrl, *PCMFCPropertySheetTabCtrl;

struct CMFCPropertySheetTabCtrl { // PlaceHolder Class Structure
};

typedef struct CPreviewViewEx CPreviewViewEx, *PCPreviewViewEx;

struct CPreviewViewEx { // PlaceHolder Class Structure
};

typedef struct CTypeLibCacheMap CTypeLibCacheMap, *PCTypeLibCacheMap;

struct CTypeLibCacheMap { // PlaceHolder Class Structure
};

typedef struct _CTypedPtrList<class_CPtrList,struct_COleControlSiteOrWnd*> _CTypedPtrList<class_CPtrList,struct_COleControlSiteOrWnd*>, *P_CTypedPtrList<class_CPtrList,struct_COleControlSiteOrWnd*>;

struct _CTypedPtrList<class_CPtrList,struct_COleControlSiteOrWnd*> { // PlaceHolder Class Structure
};

typedef struct CAfxStringMgr CAfxStringMgr, *PCAfxStringMgr;

struct CAfxStringMgr { // PlaceHolder Class Structure
};

typedef struct CMFCCustomizeMenuButton CMFCCustomizeMenuButton, *PCMFCCustomizeMenuButton;

struct CMFCCustomizeMenuButton { // PlaceHolder Class Structure
};

typedef struct CArray<class_CMFCRibbonContextCaption*,class_CMFCRibbonContextCaption*> CArray<class_CMFCRibbonContextCaption*,class_CMFCRibbonContextCaption*>, *PCArray<class_CMFCRibbonContextCaption*,class_CMFCRibbonContextCaption*>;

struct CArray<class_CMFCRibbonContextCaption*,class_CMFCRibbonContextCaption*> { // PlaceHolder Class Structure
};

typedef struct CMFCRibbonInfoLoader CMFCRibbonInfoLoader, *PCMFCRibbonInfoLoader;

struct CMFCRibbonInfoLoader { // PlaceHolder Class Structure
};

typedef struct COutlookCustomizeButton COutlookCustomizeButton, *PCOutlookCustomizeButton;

struct COutlookCustomizeButton { // PlaceHolder Class Structure
};

typedef struct CVSListBoxEditCtrl CVSListBoxEditCtrl, *PCVSListBoxEditCtrl;

struct CVSListBoxEditCtrl { // PlaceHolder Class Structure
};

typedef struct CLIENT_ID CLIENT_ID, *PCLIENT_ID;

struct CLIENT_ID {
    void *UniqueProcess;
    void *UniqueThread;
};

typedef struct CList<struct__ITEMIDLIST*,struct__ITEMIDLIST*> CList<struct__ITEMIDLIST*,struct__ITEMIDLIST*>, *PCList<struct__ITEMIDLIST*,struct__ITEMIDLIST*>;

struct CList<struct__ITEMIDLIST*,struct__ITEMIDLIST*> { // PlaceHolder Class Structure
};

typedef struct CMap<int,int,unsigned_int,unsigned_int> CMap<int,int,unsigned_int,unsigned_int>, *PCMap<int,int,unsigned_int,unsigned_int>;

struct CMap<int,int,unsigned_int,unsigned_int> { // PlaceHolder Class Structure
};

typedef struct CShellWrapper CShellWrapper, *PCShellWrapper;

struct CShellWrapper { // PlaceHolder Class Structure
};

typedef struct CList<struct_AFX_AUTOHIDE_DOCKSITE_SAVE_INFO,struct_AFX_AUTOHIDE_DOCKSITE_SAVE_INFO&> CList<struct_AFX_AUTOHIDE_DOCKSITE_SAVE_INFO,struct_AFX_AUTOHIDE_DOCKSITE_SAVE_INFO&>, *PCList<struct_AFX_AUTOHIDE_DOCKSITE_SAVE_INFO,struct_AFX_AUTOHIDE_DOCKSITE_SAVE_INFO&>;

struct CList<struct_AFX_AUTOHIDE_DOCKSITE_SAVE_INFO,struct_AFX_AUTOHIDE_DOCKSITE_SAVE_INFO&> { // PlaceHolder Class Structure
};

typedef struct CButton CButton, *PCButton;

struct CButton { // PlaceHolder Class Structure
};

typedef struct COleIPFrameWndEx COleIPFrameWndEx, *PCOleIPFrameWndEx;

struct COleIPFrameWndEx { // PlaceHolder Class Structure
};

typedef struct CMFCToolBarColorButton CMFCToolBarColorButton, *PCMFCToolBarColorButton;

struct CMFCToolBarColorButton { // PlaceHolder Class Structure
};

typedef struct CTasksPaneNavigateButton CTasksPaneNavigateButton, *PCTasksPaneNavigateButton;

struct CTasksPaneNavigateButton { // PlaceHolder Class Structure
};

typedef struct CMFCToolBarFontSizeComboBox CMFCToolBarFontSizeComboBox, *PCMFCToolBarFontSizeComboBox;

struct CMFCToolBarFontSizeComboBox { // PlaceHolder Class Structure
};

typedef struct CSliderCtrl CSliderCtrl, *PCSliderCtrl;

struct CSliderCtrl { // PlaceHolder Class Structure
};

typedef struct CFrameWndEx CFrameWndEx, *PCFrameWndEx;

struct CFrameWndEx { // PlaceHolder Class Structure
};

typedef struct CMap<unsigned_int,unsigned_int,class_CPane*,class_CPane*> CMap<unsigned_int,unsigned_int,class_CPane*,class_CPane*>, *PCMap<unsigned_int,unsigned_int,class_CPane*,class_CPane*>;

struct CMap<unsigned_int,unsigned_int,class_CPane*,class_CPane*> { // PlaceHolder Class Structure
};

typedef struct CMFCRibbonCollector CMFCRibbonCollector, *PCMFCRibbonCollector;

struct CMFCRibbonCollector { // PlaceHolder Class Structure
};

typedef struct CMFCToolBarDropTarget CMFCToolBarDropTarget, *PCMFCToolBarDropTarget;

struct CMFCToolBarDropTarget { // PlaceHolder Class Structure
};

typedef struct CMap<unsigned_int,unsigned_int,struct_HICON__*,struct_HICON__*> CMap<unsigned_int,unsigned_int,struct_HICON__*,struct_HICON__*>, *PCMap<unsigned_int,unsigned_int,struct_HICON__*,struct_HICON__*>;

struct CMap<unsigned_int,unsigned_int,struct_HICON__*,struct_HICON__*> { // PlaceHolder Class Structure
};

typedef struct CObArray CObArray, *PCObArray;

struct CObArray { // PlaceHolder Class Structure
};

typedef struct CMFCRibbonColorMenuButton CMFCRibbonColorMenuButton, *PCMFCRibbonColorMenuButton;

struct CMFCRibbonColorMenuButton { // PlaceHolder Class Structure
};

typedef struct CVSToolsListBox CVSToolsListBox, *PCVSToolsListBox;

struct CVSToolsListBox { // PlaceHolder Class Structure
};

typedef struct _s_FuncInfo FuncInfo;

typedef struct CVSListBox CVSListBox, *PCVSListBox;

struct CVSListBox { // PlaceHolder Class Structure
};

typedef struct CMFCBaseVisualManager CMFCBaseVisualManager, *PCMFCBaseVisualManager;

struct CMFCBaseVisualManager { // PlaceHolder Class Structure
};

typedef struct CMFCWindowsManagerDialog CMFCWindowsManagerDialog, *PCMFCWindowsManagerDialog;

struct CMFCWindowsManagerDialog { // PlaceHolder Class Structure
};

typedef struct CArray<unsigned_int,unsigned_int> CArray<unsigned_int,unsigned_int>, *PCArray<unsigned_int,unsigned_int>;

struct CArray<unsigned_int,unsigned_int> { // PlaceHolder Class Structure
};

typedef struct COleException COleException, *PCOleException;

struct COleException { // PlaceHolder Class Structure
};

typedef struct CMFCPopupMenuBar CMFCPopupMenuBar, *PCMFCPopupMenuBar;

struct CMFCPopupMenuBar { // PlaceHolder Class Structure
};

typedef struct CComboBox CComboBox, *PCComboBox;

struct CComboBox { // PlaceHolder Class Structure
};

typedef struct CChevronOwnerDrawMenu CChevronOwnerDrawMenu, *PCChevronOwnerDrawMenu;

struct CChevronOwnerDrawMenu { // PlaceHolder Class Structure
};

typedef struct CCtrlView CCtrlView, *PCCtrlView;

struct CCtrlView { // PlaceHolder Class Structure
};

typedef struct CByteArray CByteArray, *PCByteArray;

struct CByteArray { // PlaceHolder Class Structure
};

typedef struct CMFCToolBarsCommandsListBox CMFCToolBarsCommandsListBox, *PCMFCToolBarsCommandsListBox;

struct CMFCToolBarsCommandsListBox { // PlaceHolder Class Structure
};

typedef struct CRibbonUndoLabel CRibbonUndoLabel, *PCRibbonUndoLabel;

struct CRibbonUndoLabel { // PlaceHolder Class Structure
};

typedef struct CMFCCustomColorsPropertyPage CMFCCustomColorsPropertyPage, *PCMFCCustomColorsPropertyPage;

struct CMFCCustomColorsPropertyPage { // PlaceHolder Class Structure
};

typedef union IMAGE_RESOURCE_DIRECTORY_ENTRY_DirectoryUnion IMAGE_RESOURCE_DIRECTORY_ENTRY_DirectoryUnion, *PIMAGE_RESOURCE_DIRECTORY_ENTRY_DirectoryUnion;

union IMAGE_RESOURCE_DIRECTORY_ENTRY_DirectoryUnion {
    dword OffsetToData;
    struct IMAGE_RESOURCE_DIRECTORY_ENTRY_DirectoryStruct IMAGE_RESOURCE_DIRECTORY_ENTRY_DirectoryStruct;
};

typedef struct CCommonDialog CCommonDialog, *PCCommonDialog;

struct CCommonDialog { // PlaceHolder Class Structure
};

typedef struct CMDIClientAreaWnd CMDIClientAreaWnd, *PCMDIClientAreaWnd;

struct CMDIClientAreaWnd { // PlaceHolder Class Structure
};

typedef struct CMap<unsigned_int,unsigned_int,class_CObList*,class_CObList*> CMap<unsigned_int,unsigned_int,class_CObList*,class_CObList*>, *PCMap<unsigned_int,unsigned_int,class_CObList*,class_CObList*>;

struct CMap<unsigned_int,unsigned_int,class_CObList*,class_CObList*> { // PlaceHolder Class Structure
};

typedef struct CMap<struct_HICON__*,struct_HICON__*,int,int> CMap<struct_HICON__*,struct_HICON__*,int,int>, *PCMap<struct_HICON__*,struct_HICON__*,int,int>;

struct CMap<struct_HICON__*,struct_HICON__*,int,int> { // PlaceHolder Class Structure
};

typedef struct type_info type_info, *Ptype_info;

struct type_info { // PlaceHolder Class Structure
};

typedef struct CList<class_CMDIChildWndEx*,class_CMDIChildWndEx*> CList<class_CMDIChildWndEx*,class_CMDIChildWndEx*>, *PCList<class_CMDIChildWndEx*,class_CMDIChildWndEx*>;

struct CList<class_CMDIChildWndEx*,class_CMDIChildWndEx*> { // PlaceHolder Class Structure
};

typedef struct CMFCComObject<class_ATL::CAccessibleProxy> CMFCComObject<class_ATL::CAccessibleProxy>, *PCMFCComObject<class_ATL::CAccessibleProxy>;

struct CMFCComObject<class_ATL::CAccessibleProxy> { // PlaceHolder Class Structure
};

typedef struct CArray<class_CMFCRibbonInfo::XContext*,class_CMFCRibbonInfo::XContext*> CArray<class_CMFCRibbonInfo::XContext*,class_CMFCRibbonInfo::XContext*>, *PCArray<class_CMFCRibbonInfo::XContext*,class_CMFCRibbonInfo::XContext*>;

struct CArray<class_CMFCRibbonInfo::XContext*,class_CMFCRibbonInfo::XContext*> { // PlaceHolder Class Structure
};

typedef struct CMFCVisualManagerOffice2003 CMFCVisualManagerOffice2003, *PCMFCVisualManagerOffice2003;

struct CMFCVisualManagerOffice2003 { // PlaceHolder Class Structure
};

typedef struct CMFCVisualManagerOffice2007 CMFCVisualManagerOffice2007, *PCMFCVisualManagerOffice2007;

struct CMFCVisualManagerOffice2007 { // PlaceHolder Class Structure
};

typedef struct CMFCTasksPane CMFCTasksPane, *PCMFCTasksPane;

struct CMFCTasksPane { // PlaceHolder Class Structure
};

typedef struct CMap<class_ATL::CStringT<char,class_StrTraitMFC<char,class_ATL::ChTraitsCRT<char>_>_>,char_const*,bool,bool> CMap<class_ATL::CStringT<char,class_StrTraitMFC<char,class_ATL::ChTraitsCRT<char>_>_>,char_const*,bool,bool>, *PCMap<class_ATL::CStringT<char,class_StrTraitMFC<char,class_ATL::ChTraitsCRT<char>_>_>,char_const*,bool,bool>;

struct CMap<class_ATL::CStringT<char,class_StrTraitMFC<char,class_ATL::ChTraitsCRT<char>_>_>,char_const*,bool,bool> { // PlaceHolder Class Structure
};

typedef struct CXMLParserCollection CXMLParserCollection, *PCXMLParserCollection;

struct CXMLParserCollection { // PlaceHolder Class Structure
};

typedef struct CMap<class_ATL::CStringT<char,class_StrTraitMFC<char,class_ATL::ChTraitsCRT<char>_>_>,char_const*,int,int> CMap<class_ATL::CStringT<char,class_StrTraitMFC<char,class_ATL::ChTraitsCRT<char>_>_>,char_const*,int,int>, *PCMap<class_ATL::CStringT<char,class_StrTraitMFC<char,class_ATL::ChTraitsCRT<char>_>_>,char_const*,int,int>;

struct CMap<class_ATL::CStringT<char,class_StrTraitMFC<char,class_ATL::ChTraitsCRT<char>_>_>,char_const*,int,int> { // PlaceHolder Class Structure
};

typedef struct COleCmdUI COleCmdUI, *PCOleCmdUI;

struct COleCmdUI { // PlaceHolder Class Structure
};

typedef struct COleDocIPFrameWnd COleDocIPFrameWnd, *PCOleDocIPFrameWnd;

struct COleDocIPFrameWnd { // PlaceHolder Class Structure
};

typedef struct CMDIFrameWndEx CMDIFrameWndEx, *PCMDIFrameWndEx;

struct CMDIFrameWndEx { // PlaceHolder Class Structure
};

typedef struct _s__RTTICompleteObjectLocator RTTICompleteObjectLocator;

typedef struct CMFCReBar CMFCReBar, *PCMFCReBar;

struct CMFCReBar { // PlaceHolder Class Structure
};

typedef struct CMFCFontInfo CMFCFontInfo, *PCMFCFontInfo;

struct CMFCFontInfo { // PlaceHolder Class Structure
};

typedef struct CPrintDialog CPrintDialog, *PCPrintDialog;

struct CPrintDialog { // PlaceHolder Class Structure
};

typedef struct CStringArray CStringArray, *PCStringArray;

struct CStringArray { // PlaceHolder Class Structure
};

typedef struct CMFCRibbonApplicationButton CMFCRibbonApplicationButton, *PCMFCRibbonApplicationButton;

struct CMFCRibbonApplicationButton { // PlaceHolder Class Structure
};

typedef struct CMFCTasksPaneFrameWnd CMFCTasksPaneFrameWnd, *PCMFCTasksPaneFrameWnd;

struct CMFCTasksPaneFrameWnd { // PlaceHolder Class Structure
};

typedef struct CMap<unsigned_int,unsigned_int,struct_HMENU__*,struct_HMENU__*> CMap<unsigned_int,unsigned_int,struct_HMENU__*,struct_HMENU__*>, *PCMap<unsigned_int,unsigned_int,struct_HMENU__*,struct_HMENU__*>;

struct CMap<unsigned_int,unsigned_int,struct_HMENU__*,struct_HMENU__*> { // PlaceHolder Class Structure
};

typedef struct CMFCDropDownToolbarButton CMFCDropDownToolbarButton, *PCMFCDropDownToolbarButton;

struct CMFCDropDownToolbarButton { // PlaceHolder Class Structure
};

typedef struct CFolderPickerDialog CFolderPickerDialog, *PCFolderPickerDialog;

struct CFolderPickerDialog { // PlaceHolder Class Structure
};

typedef struct CMFCShowAllButton CMFCShowAllButton, *PCMFCShowAllButton;

struct CMFCShowAllButton { // PlaceHolder Class Structure
};

typedef struct CMultiPaneFrameWnd CMultiPaneFrameWnd, *PCMultiPaneFrameWnd;

struct CMultiPaneFrameWnd { // PlaceHolder Class Structure
};

typedef struct CMFCPropertyGridFontProperty CMFCPropertyGridFontProperty, *PCMFCPropertyGridFontProperty;

struct CMFCPropertyGridFontProperty { // PlaceHolder Class Structure
};

typedef struct CMap<struct_HMENU__*,struct_HMENU__*&,void*,void*&> CMap<struct_HMENU__*,struct_HMENU__*&,void*,void*&>, *PCMap<struct_HMENU__*,struct_HMENU__*&,void*,void*&>;

struct CMap<struct_HMENU__*,struct_HMENU__*&,void*,void*&> { // PlaceHolder Class Structure
};

typedef struct CMenuTearOffManager CMenuTearOffManager, *PCMenuTearOffManager;

struct CMenuTearOffManager { // PlaceHolder Class Structure
};

typedef struct CPane CPane, *PCPane;

struct CPane { // PlaceHolder Class Structure
};

typedef struct CRectTracker CRectTracker, *PCRectTracker;

struct CRectTracker { // PlaceHolder Class Structure
};

typedef struct CTypedPtrArray<class_CObArray,class_CBitmap*> CTypedPtrArray<class_CObArray,class_CBitmap*>, *PCTypedPtrArray<class_CObArray,class_CBitmap*>;

struct CTypedPtrArray<class_CObArray,class_CBitmap*> { // PlaceHolder Class Structure
};

typedef struct CMapStringToOb CMapStringToOb, *PCMapStringToOb;

struct CMapStringToOb { // PlaceHolder Class Structure
};

typedef struct CArray<class_CMFCRibbonInfo::XElementButtonGallery::XGalleryGroup*,class_CMFCRibbonInfo::XElementButtonGallery::XGalleryGroup*> CArray<class_CMFCRibbonInfo::XElementButtonGallery::XGalleryGroup*,class_CMFCRibbonInfo::XElementButtonGallery::XGalleryGroup*>, *PCArray<class_CMFCRibbonInfo::XElementButtonGallery::XGalleryGroup*,class_CMFCRibbonInfo::XElementButtonGallery::XGalleryGroup*>;

struct CArray<class_CMFCRibbonInfo::XElementButtonGallery::XGalleryGroup*,class_CMFCRibbonInfo::XElementButtonGallery::XGalleryGroup*> { // PlaceHolder Class Structure
};

typedef struct CMFCFontComboBox CMFCFontComboBox, *PCMFCFontComboBox;

struct CMFCFontComboBox { // PlaceHolder Class Structure
};

typedef struct CList<class_CMFCPropertySheetCategoryInfo*,class_CMFCPropertySheetCategoryInfo*> CList<class_CMFCPropertySheetCategoryInfo*,class_CMFCPropertySheetCategoryInfo*>, *PCList<class_CMFCPropertySheetCategoryInfo*,class_CMFCPropertySheetCategoryInfo*>;

struct CList<class_CMFCPropertySheetCategoryInfo*,class_CMFCPropertySheetCategoryInfo*> { // PlaceHolder Class Structure
};

typedef struct CMap<unsigned_int,unsigned_int,int,int> CMap<unsigned_int,unsigned_int,int,int>, *PCMap<unsigned_int,unsigned_int,int,int>;

struct CMap<unsigned_int,unsigned_int,int,int> { // PlaceHolder Class Structure
};

typedef struct CDocObjectServer CDocObjectServer, *PCDocObjectServer;

struct CDocObjectServer { // PlaceHolder Class Structure
};

typedef struct CSmartDockingStandaloneGuide CSmartDockingStandaloneGuide, *PCSmartDockingStandaloneGuide;

struct CSmartDockingStandaloneGuide { // PlaceHolder Class Structure
};

typedef struct CMFCToolBarButtonCustomizeDialog CMFCToolBarButtonCustomizeDialog, *PCMFCToolBarButtonCustomizeDialog;

struct CMFCToolBarButtonCustomizeDialog { // PlaceHolder Class Structure
};

typedef struct CPropertySheet CPropertySheet, *PCPropertySheet;

struct CPropertySheet { // PlaceHolder Class Structure
};

typedef struct CMFCPropertyGridToolTipCtrl CMFCPropertyGridToolTipCtrl, *PCMFCPropertyGridToolTipCtrl;

struct CMFCPropertyGridToolTipCtrl { // PlaceHolder Class Structure
};

typedef struct CXMLParserRoot CXMLParserRoot, *PCXMLParserRoot;

struct CXMLParserRoot { // PlaceHolder Class Structure
};

typedef struct COleDocObjectItem COleDocObjectItem, *PCOleDocObjectItem;

struct COleDocObjectItem { // PlaceHolder Class Structure
};

typedef struct CMFCOutlookBar CMFCOutlookBar, *PCMFCOutlookBar;

struct CMFCOutlookBar { // PlaceHolder Class Structure
};

typedef struct CMFCMaskedEdit CMFCMaskedEdit, *PCMFCMaskedEdit;

struct CMFCMaskedEdit { // PlaceHolder Class Structure
};

typedef struct CMFCDragFrameImpl CMFCDragFrameImpl, *PCMFCDragFrameImpl;

struct CMFCDragFrameImpl { // PlaceHolder Class Structure
};

typedef struct CMap<class_CWnd*,class_CWnd*,class_CImageList*,class_CImageList*> CMap<class_CWnd*,class_CWnd*,class_CImageList*,class_CImageList*>, *PCMap<class_CWnd*,class_CWnd*,class_CImageList*,class_CImageList*>;

struct CMap<class_CWnd*,class_CWnd*,class_CImageList*,class_CImageList*> { // PlaceHolder Class Structure
};

typedef struct COleBusyDialog COleBusyDialog, *PCOleBusyDialog;

struct COleBusyDialog { // PlaceHolder Class Structure
};

typedef struct CGlobalUtils CGlobalUtils, *PCGlobalUtils;

struct CGlobalUtils { // PlaceHolder Class Structure
};

typedef struct CMFCPrintPreviewToolBar CMFCPrintPreviewToolBar, *PCMFCPrintPreviewToolBar;

struct CMFCPrintPreviewToolBar { // PlaceHolder Class Structure
};

typedef struct CMFCRibbonSpinButtonCtrl CMFCRibbonSpinButtonCtrl, *PCMFCRibbonSpinButtonCtrl;

struct CMFCRibbonSpinButtonCtrl { // PlaceHolder Class Structure
};

typedef struct CMFCDropDownListBox CMFCDropDownListBox, *PCMFCDropDownListBox;

struct CMFCDropDownListBox { // PlaceHolder Class Structure
};

typedef struct CMFCRibbonMiniToolBar CMFCRibbonMiniToolBar, *PCMFCRibbonMiniToolBar;

struct CMFCRibbonMiniToolBar { // PlaceHolder Class Structure
};

typedef struct CMFCToolBarDropSource CMFCToolBarDropSource, *PCMFCToolBarDropSource;

struct CMFCToolBarDropSource { // PlaceHolder Class Structure
};

typedef struct CMFCToolBarEditCtrl CMFCToolBarEditCtrl, *PCMFCToolBarEditCtrl;

struct CMFCToolBarEditCtrl { // PlaceHolder Class Structure
};

typedef struct CMFCOutlookBarScrollButton CMFCOutlookBarScrollButton, *PCMFCOutlookBarScrollButton;

struct CMFCOutlookBarScrollButton { // PlaceHolder Class Structure
};

typedef struct COleInsertDialog COleInsertDialog, *PCOleInsertDialog;

struct COleInsertDialog { // PlaceHolder Class Structure
};

typedef struct CMFCAcceleratorKey CMFCAcceleratorKey, *PCMFCAcceleratorKey;

struct CMFCAcceleratorKey { // PlaceHolder Class Structure
};

typedef struct _AFX_CHECKLIST_STATE _AFX_CHECKLIST_STATE, *P_AFX_CHECKLIST_STATE;

struct _AFX_CHECKLIST_STATE { // PlaceHolder Class Structure
};

typedef struct CDummyDockablePane CDummyDockablePane, *PCDummyDockablePane;

struct CDummyDockablePane { // PlaceHolder Class Structure
};

typedef struct CMapStringToPtr CMapStringToPtr, *PCMapStringToPtr;

struct CMapStringToPtr { // PlaceHolder Class Structure
};

typedef struct CList<struct_HWND__*,struct_HWND__*&> CList<struct_HWND__*,struct_HWND__*&>, *PCList<struct_HWND__*,struct_HWND__*&>;

struct CList<struct_HWND__*,struct_HWND__*&> { // PlaceHolder Class Structure
};

typedef struct CSmartDockingHighlighterWnd CSmartDockingHighlighterWnd, *PCSmartDockingHighlighterWnd;

struct CSmartDockingHighlighterWnd { // PlaceHolder Class Structure
};

typedef struct CArray<enum_CArchive::LoadArrayObjType,enum_CArchive::LoadArrayObjType_const&> CArray<enum_CArchive::LoadArrayObjType,enum_CArchive::LoadArrayObjType_const&>, *PCArray<enum_CArchive::LoadArrayObjType,enum_CArchive::LoadArrayObjType_const&>;

struct CArray<enum_CArchive::LoadArrayObjType,enum_CArchive::LoadArrayObjType_const&> { // PlaceHolder Class Structure
};

typedef struct CMFCRibbonCustomizeDialog CMFCRibbonCustomizeDialog, *PCMFCRibbonCustomizeDialog;

struct CMFCRibbonCustomizeDialog { // PlaceHolder Class Structure
};

typedef struct CMFCDropDownFrame CMFCDropDownFrame, *PCMFCDropDownFrame;

struct CMFCDropDownFrame { // PlaceHolder Class Structure
};

typedef struct CMap<class_ATL::CStringT<char,class_StrTraitMFC<char,class_ATL::ChTraitsCRT<char>_>_>,char_const*,class_ATL::CStringT<char,class_StrTraitMFC<char,class_ATL::ChTraitsCRT<char>_>_>,char_const*> CMap<class_ATL::CStringT<char,class_StrTraitMFC<char,class_ATL::ChTraitsCRT<char>_>_>,char_const*,class_ATL::CStringT<char,class_StrTraitMFC<char,class_ATL::ChTraitsCRT<char>_>_>,char_const*>, *PCMap<class_ATL::CStringT<char,class_StrTraitMFC<char,class_ATL::ChTraitsCRT<char>_>_>,char_const*,class_ATL::CStringT<char,class_StrTraitMFC<char,class_ATL::ChTraitsCRT<char>_>_>,char_const*>;

struct CMap<class_ATL::CStringT<char,class_StrTraitMFC<char,class_ATL::ChTraitsCRT<char>_>_>,char_const*,class_ATL::CStringT<char,class_StrTraitMFC<char,class_ATL::ChTraitsCRT<char>_>_>,char_const*> { // PlaceHolder Class Structure
};

typedef struct CMFCToolBarNameDialog CMFCToolBarNameDialog, *PCMFCToolBarNameDialog;

struct CMFCToolBarNameDialog { // PlaceHolder Class Structure
};

typedef struct CMFCColorPropertySheet CMFCColorPropertySheet, *PCMFCColorPropertySheet;

struct CMFCColorPropertySheet { // PlaceHolder Class Structure
};

typedef struct COleFrameHook COleFrameHook, *PCOleFrameHook;

struct COleFrameHook { // PlaceHolder Class Structure
};

typedef struct COleDispatchImpl COleDispatchImpl, *PCOleDispatchImpl;

struct COleDispatchImpl { // PlaceHolder Class Structure
};

typedef struct CMap<int,int,int,int> CMap<int,int,int,int>, *PCMap<int,int,int,int>;

struct CMap<int,int,int,int> { // PlaceHolder Class Structure
};

typedef struct CHotKeyCtrl CHotKeyCtrl, *PCHotKeyCtrl;

struct CHotKeyCtrl { // PlaceHolder Class Structure
};

typedef struct CStatusBarCtrl CStatusBarCtrl, *PCStatusBarCtrl;

struct CStatusBarCtrl { // PlaceHolder Class Structure
};

typedef struct CArray<class_CMFCRibbonInfo::XQAT::XQATItem,class_CMFCRibbonInfo::XQAT::XQATItem> CArray<class_CMFCRibbonInfo::XQAT::XQATItem,class_CMFCRibbonInfo::XQAT::XQATItem>, *PCArray<class_CMFCRibbonInfo::XQAT::XQATItem,class_CMFCRibbonInfo::XQAT::XQATItem>;

struct CArray<class_CMFCRibbonInfo::XQAT::XQATItem,class_CMFCRibbonInfo::XQAT::XQATItem> { // PlaceHolder Class Structure
};

typedef struct _AFX_MOUSEANCHORWND _AFX_MOUSEANCHORWND, *P_AFX_MOUSEANCHORWND;

struct _AFX_MOUSEANCHORWND { // PlaceHolder Class Structure
};

typedef struct CUIntArray CUIntArray, *PCUIntArray;

struct CUIntArray { // PlaceHolder Class Structure
};

typedef struct CMFCToolBarsListPropertyPage CMFCToolBarsListPropertyPage, *PCMFCToolBarsListPropertyPage;

struct CMFCToolBarsListPropertyPage { // PlaceHolder Class Structure
};

typedef ulong DWORD;

typedef DWORD ULONG;

typedef ushort WORD;

typedef WORD CLIPFORMAT;

typedef wchar_t WCHAR;

typedef WCHAR OLECHAR;

typedef OLECHAR *LPCOLESTR;

typedef OLECHAR *LPOLESTR;

typedef void *HMETAFILEPICT;

typedef long _Once_t;

typedef struct _RTL_CRITICAL_SECTION _RTL_CRITICAL_SECTION, *P_RTL_CRITICAL_SECTION;

typedef struct _RTL_CRITICAL_SECTION RTL_CRITICAL_SECTION;

typedef RTL_CRITICAL_SECTION CRITICAL_SECTION;

typedef CRITICAL_SECTION _Rmtx;

typedef struct _RTL_CRITICAL_SECTION_DEBUG _RTL_CRITICAL_SECTION_DEBUG, *P_RTL_CRITICAL_SECTION_DEBUG;

typedef struct _RTL_CRITICAL_SECTION_DEBUG *PRTL_CRITICAL_SECTION_DEBUG;

typedef long LONG;

typedef void *HANDLE;

typedef ulong ULONG_PTR;

typedef struct _LIST_ENTRY _LIST_ENTRY, *P_LIST_ENTRY;

typedef struct _LIST_ENTRY LIST_ENTRY;

struct _RTL_CRITICAL_SECTION {
    PRTL_CRITICAL_SECTION_DEBUG DebugInfo;
    LONG LockCount;
    LONG RecursionCount;
    HANDLE OwningThread;
    HANDLE LockSemaphore;
    ULONG_PTR SpinCount;
};

struct _LIST_ENTRY {
    struct _LIST_ENTRY *Flink;
    struct _LIST_ENTRY *Blink;
};

struct _RTL_CRITICAL_SECTION_DEBUG {
    WORD Type;
    WORD CreatorBackTraceIndex;
    struct _RTL_CRITICAL_SECTION *CriticalSection;
    LIST_ENTRY ProcessLocksList;
    DWORD EntryCount;
    DWORD ContentionCount;
    DWORD Flags;
    WORD CreatorBackTraceIndexHigh;
    WORD SpareWORD;
};

typedef struct _iobuf _iobuf, *P_iobuf;

typedef struct _iobuf FILE;

struct _iobuf {
    char *_ptr;
    int _cnt;
    char *_base;
    int _flag;
    int _file;
    int _charbuf;
    int _bufsiz;
    char *_tmpfname;
};

typedef struct exception exception, *Pexception;

struct exception { // PlaceHolder Class Structure
};

typedef struct _Iostream_error_category _Iostream_error_category, *P_Iostream_error_category;

struct _Iostream_error_category { // PlaceHolder Class Structure
};

typedef struct bad_alloc bad_alloc, *Pbad_alloc;

struct bad_alloc { // PlaceHolder Class Structure
};

typedef struct _System_error_category _System_error_category, *P_System_error_category;

struct _System_error_category { // PlaceHolder Class Structure
};

typedef struct error_category error_category, *Perror_category;

struct error_category { // PlaceHolder Class Structure
};

typedef struct bad_exception bad_exception, *Pbad_exception;

struct bad_exception { // PlaceHolder Class Structure
};

typedef struct _Generic_error_category _Generic_error_category, *P_Generic_error_category;

struct _Generic_error_category { // PlaceHolder Class Structure
};

typedef struct CItemDataSource CItemDataSource, *PCItemDataSource;

struct CItemDataSource { // PlaceHolder Class Structure
};

typedef struct IMAGE_DOS_HEADER IMAGE_DOS_HEADER, *PIMAGE_DOS_HEADER;

struct IMAGE_DOS_HEADER {
    char e_magic[2]; // Magic number
    word e_cblp; // Bytes of last page
    word e_cp; // Pages in file
    word e_crlc; // Relocations
    word e_cparhdr; // Size of header in paragraphs
    word e_minalloc; // Minimum extra paragraphs needed
    word e_maxalloc; // Maximum extra paragraphs needed
    word e_ss; // Initial (relative) SS value
    word e_sp; // Initial SP value
    word e_csum; // Checksum
    word e_ip; // Initial IP value
    word e_cs; // Initial (relative) CS value
    word e_lfarlc; // File address of relocation table
    word e_ovno; // Overlay number
    word e_res[4][4]; // Reserved words
    word e_oemid; // OEM identifier (for e_oeminfo)
    word e_oeminfo; // OEM information; e_oemid specific
    word e_res2[10][10]; // Reserved words
    dword e_lfanew; // File address of new exe header
    byte e_program[64]; // Actual DOS program
};

typedef struct tagLC_STRINGS tagLC_STRINGS, *PtagLC_STRINGS;

typedef struct tagLC_STRINGS *LPLC_STRINGS;

struct tagLC_STRINGS {
    wchar_t szLanguage[64];
    wchar_t szCountry[64];
    wchar_t szCodePage[16];
    wchar_t szLocaleName[85];
};

typedef struct _IMAGELIST _IMAGELIST, *P_IMAGELIST;

typedef struct _IMAGELIST *HIMAGELIST;

struct _IMAGELIST {
};

typedef uint UINT;

typedef ULONG_PTR DWORD_PTR;

typedef void (TIMECALLBACK)(UINT, UINT, DWORD_PTR, DWORD_PTR, DWORD_PTR);

typedef TIMECALLBACK *LPTIMECALLBACK;

typedef UINT MMRESULT;

typedef struct setloc_struct setloc_struct, *Psetloc_struct;

typedef int BOOL;

typedef struct _is_ctype_compatible _is_ctype_compatible, *P_is_ctype_compatible;

struct _is_ctype_compatible {
    ulong id;
    int is_clike;
};

struct setloc_struct {
    wchar_t *pchLanguage;
    wchar_t *pchCountry;
    int iLocState;
    int iPrimaryLen;
    BOOL bAbbrevLanguage;
    BOOL bAbbrevCountry;
    UINT _cachecp;
    wchar_t _cachein[131];
    wchar_t _cacheout[131];
    struct _is_ctype_compatible _Loc_c[5];
    wchar_t _cacheLocaleName[85];
};

typedef struct _tiddata _tiddata, *P_tiddata;

typedef uint uintptr_t;

typedef struct threadmbcinfostruct threadmbcinfostruct, *Pthreadmbcinfostruct;

typedef struct threadmbcinfostruct *pthreadmbcinfo;

typedef struct threadlocaleinfostruct threadlocaleinfostruct, *Pthreadlocaleinfostruct;

typedef struct threadlocaleinfostruct *pthreadlocinfo;

typedef struct setloc_struct _setloc_struct;

typedef struct localerefcount localerefcount, *Plocalerefcount;

typedef struct localerefcount locrefcount;

typedef struct lconv lconv, *Plconv;

typedef struct __lc_time_data __lc_time_data, *P__lc_time_data;

struct lconv {
    char *decimal_point;
    char *thousands_sep;
    char *grouping;
    char *int_curr_symbol;
    char *currency_symbol;
    char *mon_decimal_point;
    char *mon_thousands_sep;
    char *mon_grouping;
    char *positive_sign;
    char *negative_sign;
    char int_frac_digits;
    char frac_digits;
    char p_cs_precedes;
    char p_sep_by_space;
    char n_cs_precedes;
    char n_sep_by_space;
    char p_sign_posn;
    char n_sign_posn;
    wchar_t *_W_decimal_point;
    wchar_t *_W_thousands_sep;
    wchar_t *_W_int_curr_symbol;
    wchar_t *_W_currency_symbol;
    wchar_t *_W_mon_decimal_point;
    wchar_t *_W_mon_thousands_sep;
    wchar_t *_W_positive_sign;
    wchar_t *_W_negative_sign;
};

struct threadmbcinfostruct {
    int refcount;
    int mbcodepage;
    int ismbcodepage;
    ushort mbulinfo[6];
    uchar mbctype[257];
    uchar mbcasemap[256];
    wchar_t *mblocalename;
};

struct localerefcount {
    char *locale;
    wchar_t *wlocale;
    int *refcount;
    int *wrefcount;
};

struct threadlocaleinfostruct {
    int refcount;
    uint lc_codepage;
    uint lc_collate_cp;
    uint lc_time_cp;
    locrefcount lc_category[6];
    int lc_clike;
    int mb_cur_max;
    int *lconv_intl_refcount;
    int *lconv_num_refcount;
    int *lconv_mon_refcount;
    struct lconv *lconv;
    int *ctype1_refcount;
    ushort *ctype1;
    ushort *pctype;
    uchar *pclmap;
    uchar *pcumap;
    struct __lc_time_data *lc_time_curr;
    wchar_t *locale_name[6];
};

struct _tiddata {
    ulong _tid;
    uintptr_t _thandle;
    int _terrno;
    ulong _tdoserrno;
    uint _fpds;
    ulong _holdrand;
    char *_token;
    wchar_t *_wtoken;
    uchar *_mtoken;
    char *_errmsg;
    wchar_t *_werrmsg;
    char *_namebuf0;
    wchar_t *_wnamebuf0;
    char *_namebuf1;
    wchar_t *_wnamebuf1;
    char *_asctimebuf;
    wchar_t *_wasctimebuf;
    void *_gmtimebuf;
    char *_cvtbuf;
    uchar _con_ch_buf[5];
    ushort _ch_buf_used;
    void *_initaddr;
    void *_initarg;
    void *_pxcptacttab;
    void *_tpxcptinfoptrs;
    int _tfpecode;
    pthreadmbcinfo ptmbcinfo;
    pthreadlocinfo ptlocinfo;
    int _ownlocale;
    ulong _NLG_dwCode;
    void *_terminate;
    void *_unexpected;
    void *_translator;
    void *_purecall;
    void *_curexception;
    void *_curcontext;
    int _ProcessingThrow;
    void *_curexcspec;
    void *_pFrameInfoChain;
    _setloc_struct _setloc_data;
    void *_reserved1;
    void *_reserved2;
    void *_reserved3;
    void *_reserved4;
    void *_reserved5;
    int _cxxReThrow;
    ulong __initDomain;
    int _initapartment;
};

struct __lc_time_data {
    char *wday_abbr[7];
    char *wday[7];
    char *month_abbr[12];
    char *month[12];
    char *ampm[2];
    char *ww_sdatefmt;
    char *ww_ldatefmt;
    char *ww_timefmt;
    int ww_caltype;
    int refcount;
    wchar_t *_W_wday_abbr[7];
    wchar_t *_W_wday[7];
    wchar_t *_W_month_abbr[12];
    wchar_t *_W_month[12];
    wchar_t *_W_ampm[2];
    wchar_t *_W_ww_sdatefmt;
    wchar_t *_W_ww_ldatefmt;
    wchar_t *_W_ww_timefmt;
    wchar_t *_W_ww_locale_name;
};

typedef struct _tiddata *_ptiddata;

typedef struct CVariantBoolConverter CVariantBoolConverter, *PCVariantBoolConverter;

struct CVariantBoolConverter { // PlaceHolder Structure
};

typedef struct tagREBARINFO tagREBARINFO, *PtagREBARINFO;

struct tagREBARINFO { // PlaceHolder Structure
};

typedef struct CAutoHideDockSite CAutoHideDockSite, *PCAutoHideDockSite;

struct CAutoHideDockSite { // PlaceHolder Structure
};

typedef struct CMFCCaptionBar CMFCCaptionBar, *PCMFCCaptionBar;

struct CMFCCaptionBar { // PlaceHolder Structure
};

typedef struct _AFX_MARGINS _AFX_MARGINS, *P_AFX_MARGINS;

struct _AFX_MARGINS { // PlaceHolder Structure
};

typedef struct IChapteredRowset IChapteredRowset, *PIChapteredRowset;

struct IChapteredRowset { // PlaceHolder Structure
};

typedef struct IXMLDOMElement IXMLDOMElement, *PIXMLDOMElement;

struct IXMLDOMElement { // PlaceHolder Structure
};

typedef struct CTagManager CTagManager, *PCTagManager;

struct CTagManager { // PlaceHolder Structure
};

typedef struct COleCurrency COleCurrency, *PCOleCurrency;

struct COleCurrency { // PlaceHolder Structure
};

typedef struct tagNMHDR tagNMHDR, *PtagNMHDR;

struct tagNMHDR { // PlaceHolder Structure
};

typedef struct CFrameWnd CFrameWnd, *PCFrameWnd;

struct CFrameWnd { // PlaceHolder Structure
};

typedef struct CAtlTraceModuleInfo CAtlTraceModuleInfo, *PCAtlTraceModuleInfo;

struct CAtlTraceModuleInfo { // PlaceHolder Structure
};

typedef struct tagNCCALCSIZE_PARAMS tagNCCALCSIZE_PARAMS, *PtagNCCALCSIZE_PARAMS;

struct tagNCCALCSIZE_PARAMS { // PlaceHolder Structure
};

typedef struct IOleDocumentView IOleDocumentView, *PIOleDocumentView;

struct IOleDocumentView { // PlaceHolder Structure
};

typedef struct CPrintPreviewState CPrintPreviewState, *PCPrintPreviewState;

struct CPrintPreviewState { // PlaceHolder Structure
};

typedef struct tagAFXDrawState tagAFXDrawState, *PtagAFXDrawState;

struct tagAFXDrawState { // PlaceHolder Structure
};

typedef struct CTypeLibCache CTypeLibCache, *PCTypeLibCache;

struct CTypeLibCache { // PlaceHolder Structure
};

typedef struct CMFCToolBarEditBoxButton CMFCToolBarEditBoxButton, *PCMFCToolBarEditBoxButton;

struct CMFCToolBarEditBoxButton { // PlaceHolder Structure
};

typedef struct CMFCRestoredTabInfo CMFCRestoredTabInfo, *PCMFCRestoredTabInfo;

struct CMFCRestoredTabInfo { // PlaceHolder Structure
};

typedef struct tagTVSORTCB tagTVSORTCB, *PtagTVSORTCB;

struct tagTVSORTCB { // PlaceHolder Structure
};

typedef struct tagLVFINDINFOA tagLVFINDINFOA, *PtagLVFINDINFOA;

struct tagLVFINDINFOA { // PlaceHolder Structure
};

typedef struct tagTCITEMA tagTCITEMA, *PtagTCITEMA;

struct tagTCITEMA { // PlaceHolder Structure
};

typedef struct CArchive CArchive, *PCArchive;

struct CArchive { // PlaceHolder Structure
};

typedef struct CMFCBaseTabCtrl CMFCBaseTabCtrl, *PCMFCBaseTabCtrl;

struct CMFCBaseTabCtrl { // PlaceHolder Structure
};

typedef struct tagEXCEPINFO tagEXCEPINFO, *PtagEXCEPINFO;

struct tagEXCEPINFO { // PlaceHolder Structure
};

typedef struct COleControlContainer COleControlContainer, *PCOleControlContainer;

struct COleControlContainer { // PlaceHolder Structure
};

typedef struct IAccessible IAccessible, *PIAccessible;

struct IAccessible { // PlaceHolder Structure
};

typedef struct IAccessibleProxy IAccessibleProxy, *PIAccessibleProxy;

struct IAccessibleProxy { // PlaceHolder Structure
};

typedef struct CPoint CPoint, *PCPoint;

struct CPoint { // PlaceHolder Structure
};

typedef struct EHRegistrationNode EHRegistrationNode, *PEHRegistrationNode;

struct EHRegistrationNode { // PlaceHolder Structure
};

typedef struct pairNode pairNode, *PpairNode;

struct pairNode { // PlaceHolder Structure
};

typedef struct CDataBoundProperty CDataBoundProperty, *PCDataBoundProperty;

struct CDataBoundProperty { // PlaceHolder Structure
};

typedef struct CBrush CBrush, *PCBrush;

struct CBrush { // PlaceHolder Structure
};

typedef struct CSmartDockingInfo CSmartDockingInfo, *PCSmartDockingInfo;

struct CSmartDockingInfo { // PlaceHolder Structure
};

typedef struct tagLICINFO tagLICINFO, *PtagLICINFO;

struct tagLICINFO { // PlaceHolder Structure
};

typedef struct CFixedAllocNoSync CFixedAllocNoSync, *PCFixedAllocNoSync;

struct CFixedAllocNoSync { // PlaceHolder Structure
};

typedef struct CFont CFont, *PCFont;

struct CFont { // PlaceHolder Structure
};

typedef struct _PSP _PSP, *P_PSP;

struct _PSP { // PlaceHolder Structure
};

typedef struct CToolInfo CToolInfo, *PCToolInfo;

struct CToolInfo { // PlaceHolder Structure
};

typedef struct CAtlAllocator CAtlAllocator, *PCAtlAllocator;

struct CAtlAllocator { // PlaceHolder Structure
};

typedef struct IAccessibleServer IAccessibleServer, *PIAccessibleServer;

struct IAccessibleServer { // PlaceHolder Structure
};

typedef struct CMFCControlRendererInfo CMFCControlRendererInfo, *PCMFCControlRendererInfo;

struct CMFCControlRendererInfo { // PlaceHolder Structure
};

typedef struct TBREPLACEBITMAP TBREPLACEBITMAP, *PTBREPLACEBITMAP;

struct TBREPLACEBITMAP { // PlaceHolder Structure
};

typedef struct _PROPSHEETHEADERA_V2 _PROPSHEETHEADERA_V2, *P_PROPSHEETHEADERA_V2;

struct _PROPSHEETHEADERA_V2 { // PlaceHolder Structure
};

typedef struct IXMLDOMNodeList IXMLDOMNodeList, *PIXMLDOMNodeList;

struct IXMLDOMNodeList { // PlaceHolder Structure
};

typedef struct IContinueCallback IContinueCallback, *PIContinueCallback;

struct IContinueCallback { // PlaceHolder Structure
};

typedef struct CPreviewView CPreviewView, *PCPreviewView;

struct CPreviewView { // PlaceHolder Structure
};

typedef struct CTypedSimpleList<struct_CThreadData*> CTypedSimpleList<struct_CThreadData*>, *PCTypedSimpleList<struct_CThreadData*>;

struct CTypedSimpleList<struct_CThreadData*> { // PlaceHolder Structure
};

typedef struct CPaneContainerManager CPaneContainerManager, *PCPaneContainerManager;

struct CPaneContainerManager { // PlaceHolder Structure
};

typedef struct CUserTool CUserTool, *PCUserTool;

struct CUserTool { // PlaceHolder Structure
};

typedef struct CDocument CDocument, *PCDocument;

struct CDocument { // PlaceHolder Structure
};

typedef struct tagTOOLINFOA tagTOOLINFOA, *PtagTOOLINFOA;

struct tagTOOLINFOA { // PlaceHolder Structure
};

typedef struct CMFCRibbonCategory CMFCRibbonCategory, *PCMFCRibbonCategory;

struct CMFCRibbonCategory { // PlaceHolder Structure
};

typedef struct CMDITabProxyWnd CMDITabProxyWnd, *PCMDITabProxyWnd;

struct CMDITabProxyWnd { // PlaceHolder Structure
};

typedef struct tagLOGFONTW tagLOGFONTW, *PtagLOGFONTW;

struct tagLOGFONTW { // PlaceHolder Structure
};

typedef struct COleIPFrameWnd COleIPFrameWnd, *PCOleIPFrameWnd;

struct COleIPFrameWnd { // PlaceHolder Structure
};

typedef struct IRichEditOleCallback IRichEditOleCallback, *PIRichEditOleCallback;

struct IRichEditOleCallback { // PlaceHolder Structure
};

typedef struct CMFCToolBarMenuButton CMFCToolBarMenuButton, *PCMFCToolBarMenuButton;

struct CMFCToolBarMenuButton { // PlaceHolder Structure
};

typedef struct CPaneDivider CPaneDivider, *PCPaneDivider;

struct CPaneDivider { // PlaceHolder Structure
};

typedef struct tagTVITEMA tagTVITEMA, *PtagTVITEMA;

struct tagTVITEMA { // PlaceHolder Structure
};

typedef enum tagOLEUIPASTEFLAG {
} tagOLEUIPASTEFLAG;

typedef struct UDATE UDATE, *PUDATE;

struct UDATE { // PlaceHolder Structure
};

typedef struct CAtlTraceModule CAtlTraceModule, *PCAtlTraceModule;

struct CAtlTraceModule { // PlaceHolder Structure
};

typedef struct CMFCRibbonButtonsGroup CMFCRibbonButtonsGroup, *PCMFCRibbonButtonsGroup;

struct CMFCRibbonButtonsGroup { // PlaceHolder Structure
};

typedef struct tagDEC tagDEC, *PtagDEC;

struct tagDEC { // PlaceHolder Structure
};

typedef struct _punctuation _punctuation, *P_punctuation;

struct _punctuation { // PlaceHolder Structure
};

typedef struct _AFX_PROPPAGEFONTINFO _AFX_PROPPAGEFONTINFO, *P_AFX_PROPPAGEFONTINFO;

struct _AFX_PROPPAGEFONTINFO { // PlaceHolder Structure
};

typedef struct CMFCPropertyGridCtrl CMFCPropertyGridCtrl, *PCMFCPropertyGridCtrl;

struct CMFCPropertyGridCtrl { // PlaceHolder Structure
};

typedef struct IXMLDOMDocument IXMLDOMDocument, *PIXMLDOMDocument;

struct IXMLDOMDocument { // PlaceHolder Structure
};

typedef struct CMFCToolBarComboBoxButton CMFCToolBarComboBoxButton, *PCMFCToolBarComboBoxButton;

struct CMFCToolBarComboBoxButton { // PlaceHolder Structure
};

typedef struct CBitmap CBitmap, *PCBitmap;

struct CBitmap { // PlaceHolder Structure
};

typedef struct CMFCAutoHideButton CMFCAutoHideButton, *PCMFCAutoHideButton;

struct CMFCAutoHideButton { // PlaceHolder Structure
};

typedef struct _AFX_SHELLITEMINFO _AFX_SHELLITEMINFO, *P_AFX_SHELLITEMINFO;

struct _AFX_SHELLITEMINFO { // PlaceHolder Structure
};

typedef enum tagCHUNK_BREAKTYPE {
} tagCHUNK_BREAKTYPE;

typedef struct _editstream _editstream, *P_editstream;

struct _editstream { // PlaceHolder Structure
};

typedef struct CMFCRibbonContextCaption CMFCRibbonContextCaption, *PCMFCRibbonContextCaption;

struct CMFCRibbonContextCaption { // PlaceHolder Structure
};

typedef struct AFX_MSGMAP_ENTRY AFX_MSGMAP_ENTRY, *PAFX_MSGMAP_ENTRY;

struct AFX_MSGMAP_ENTRY { // PlaceHolder Structure
};

typedef struct DLGITEMTEMPLATE DLGITEMTEMPLATE, *PDLGITEMTEMPLATE;

struct DLGITEMTEMPLATE { // PlaceHolder Structure
};

typedef struct CTabCtrl CTabCtrl, *PCTabCtrl;

struct CTabCtrl { // PlaceHolder Structure
};

typedef struct IXMLDOMDocument2 IXMLDOMDocument2, *PIXMLDOMDocument2;

struct IXMLDOMDocument2 { // PlaceHolder Structure
};

typedef struct ITypeLib ITypeLib, *PITypeLib;

struct ITypeLib { // PlaceHolder Structure
};

typedef struct CDockState CDockState, *PCDockState;

struct CDockState { // PlaceHolder Structure
};

typedef enum _EXCEPTION_DISPOSITION {
} _EXCEPTION_DISPOSITION;

typedef struct CContextMenuManager CContextMenuManager, *PCContextMenuManager;

struct CContextMenuManager { // PlaceHolder Structure
};

typedef struct COleChangeSourceDialog COleChangeSourceDialog, *PCOleChangeSourceDialog;

struct COleChangeSourceDialog { // PlaceHolder Structure
};

typedef struct AFX_EXCEPTION_LINK AFX_EXCEPTION_LINK, *PAFX_EXCEPTION_LINK;

struct AFX_EXCEPTION_LINK { // PlaceHolder Structure
};

typedef struct __POSITION __POSITION, *P__POSITION;

struct __POSITION { // PlaceHolder Structure
};

typedef struct tagCOMBOBOXEXITEMA tagCOMBOBOXEXITEMA, *PtagCOMBOBOXEXITEMA;

struct tagCOMBOBOXEXITEMA { // PlaceHolder Structure
};

typedef struct tagDBTIMESTAMP tagDBTIMESTAMP, *PtagDBTIMESTAMP;

struct tagDBTIMESTAMP { // PlaceHolder Structure
};

typedef struct CAtlTraceCategory CAtlTraceCategory, *PCAtlTraceCategory;

struct CAtlTraceCategory { // PlaceHolder Structure
};

typedef enum AFX_HELP_TYPE {
} AFX_HELP_TYPE;

typedef struct tagPAGESET tagPAGESET, *PtagPAGESET;

struct tagPAGESET { // PlaceHolder Structure
};

typedef struct IOleLink IOleLink, *PIOleLink;

struct IOleLink { // PlaceHolder Structure
};

typedef struct tagTEXTMETRICW tagTEXTMETRICW, *PtagTEXTMETRICW;

struct tagTEXTMETRICW { // PlaceHolder Structure
};

typedef struct CLinkCtrl CLinkCtrl, *PCLinkCtrl;

struct CLinkCtrl { // PlaceHolder Structure
};

typedef struct CDataRecoveryHandler CDataRecoveryHandler, *PCDataRecoveryHandler;

struct CDataRecoveryHandler { // PlaceHolder Structure
};

typedef struct CWinThread CWinThread, *PCWinThread;

struct CWinThread { // PlaceHolder Structure
};

typedef struct CTypedPtrList<class_CPtrList,struct_COleControlSiteOrWnd*> CTypedPtrList<class_CPtrList,struct_COleControlSiteOrWnd*>, *PCTypedPtrList<class_CPtrList,struct_COleControlSiteOrWnd*>;

struct CTypedPtrList<class_CPtrList,struct_COleControlSiteOrWnd*> { // PlaceHolder Structure
};

typedef struct CSplitterWnd CSplitterWnd, *PCSplitterWnd;

struct CSplitterWnd { // PlaceHolder Structure
};

typedef struct tagSTAT_CHUNK tagSTAT_CHUNK, *PtagSTAT_CHUNK;

struct tagSTAT_CHUNK { // PlaceHolder Structure
};

typedef struct CMouseManager CMouseManager, *PCMouseManager;

struct CMouseManager { // PlaceHolder Structure
};

typedef struct CPaneContainerGC CPaneContainerGC, *PCPaneContainerGC;

struct CPaneContainerGC { // PlaceHolder Structure
};

typedef struct AFX_EVENT AFX_EVENT, *PAFX_EVENT;

struct AFX_EVENT { // PlaceHolder Structure
};

typedef enum tagFDE_OVERWRITE_RESPONSE {
} tagFDE_OVERWRITE_RESPONSE;

typedef struct tagDBPROPSET tagDBPROPSET, *PtagDBPROPSET;

struct tagDBPROPSET { // PlaceHolder Structure
};

typedef struct CHandleMap CHandleMap, *PCHandleMap;

struct CHandleMap { // PlaceHolder Structure
};

typedef struct CPropertyPage CPropertyPage, *PCPropertyPage;

struct CPropertyPage { // PlaceHolder Structure
};

typedef struct COccManager COccManager, *PCOccManager;

struct COccManager { // PlaceHolder Structure
};

typedef struct CMemoryState CMemoryState, *PCMemoryState;

struct CMemoryState { // PlaceHolder Structure
};

typedef struct CTypedSimpleList<struct_CRuntimeClass*> CTypedSimpleList<struct_CRuntimeClass*>, *PCTypedSimpleList<struct_CRuntimeClass*>;

struct CTypedSimpleList<struct_CRuntimeClass*> { // PlaceHolder Structure
};

typedef struct AFX_MODULE_THREAD_STATE AFX_MODULE_THREAD_STATE, *PAFX_MODULE_THREAD_STATE;

struct AFX_MODULE_THREAD_STATE { // PlaceHolder Structure
};

typedef undefined ...;

typedef struct CMFCRibbonCheckBox CMFCRibbonCheckBox, *PCMFCRibbonCheckBox;

struct CMFCRibbonCheckBox { // PlaceHolder Structure
};

typedef struct CMFCTabInfo CMFCTabInfo, *PCMFCTabInfo;

struct CMFCTabInfo { // PlaceHolder Structure
};

typedef struct CToolBarCtrl CToolBarCtrl, *PCToolBarCtrl;

struct CToolBarCtrl { // PlaceHolder Structure
};

typedef struct CMFCToolBarButton CMFCToolBarButton, *PCMFCToolBarButton;

struct CMFCToolBarButton { // PlaceHolder Structure
};

typedef struct IRichEditOle IRichEditOle, *PIRichEditOle;

struct IRichEditOle { // PlaceHolder Structure
};

typedef struct CMFCRibbonProgressBar CMFCRibbonProgressBar, *PCMFCRibbonProgressBar;

struct CMFCRibbonProgressBar { // PlaceHolder Structure
};

typedef struct IPropertyDescriptionList IPropertyDescriptionList, *PIPropertyDescriptionList;

struct IPropertyDescriptionList { // PlaceHolder Structure
};

typedef struct tagDBNOTIFYREASON tagDBNOTIFYREASON, *PtagDBNOTIFYREASON;

struct tagDBNOTIFYREASON { // PlaceHolder Structure
};

typedef struct __type_info_node __type_info_node, *P__type_info_node;

struct __type_info_node { // PlaceHolder Structure
};

typedef struct _s_CatchableType _s_CatchableType, *P_s_CatchableType;

struct _s_CatchableType { // PlaceHolder Structure
};

typedef struct tagTVHITTESTINFO tagTVHITTESTINFO, *PtagTVHITTESTINFO;

struct tagTVHITTESTINFO { // PlaceHolder Structure
};

typedef struct COleServerItem COleServerItem, *PCOleServerItem;

struct COleServerItem { // PlaceHolder Structure
};

typedef struct CArray<class_CMFCRibbonInfo::XImage*,class_CMFCRibbonInfo::XImage*> CArray<class_CMFCRibbonInfo::XImage*,class_CMFCRibbonInfo::XImage*>, *PCArray<class_CMFCRibbonInfo::XImage*,class_CMFCRibbonInfo::XImage*>;

struct CArray<class_CMFCRibbonInfo::XImage*,class_CMFCRibbonInfo::XImage*> { // PlaceHolder Structure
};

typedef struct CMFCTasksPaneTaskGroup CMFCTasksPaneTaskGroup, *PCMFCTasksPaneTaskGroup;

struct CMFCTasksPaneTaskGroup { // PlaceHolder Structure
};

typedef struct _formatrange _formatrange, *P_formatrange;

struct _formatrange { // PlaceHolder Structure
};

typedef struct CDockingPanesRow CDockingPanesRow, *PCDockingPanesRow;

struct CDockingPanesRow { // PlaceHolder Structure
};

typedef struct IEnumOleDocumentViews IEnumOleDocumentViews, *PIEnumOleDocumentViews;

struct IEnumOleDocumentViews { // PlaceHolder Structure
};

typedef struct _tagOLECMD _tagOLECMD, *P_tagOLECMD;

struct _tagOLECMD { // PlaceHolder Structure
};

typedef struct IOleCache IOleCache, *PIOleCache;

struct IOleCache { // PlaceHolder Structure
};

typedef struct tagLVBKIMAGEA tagLVBKIMAGEA, *PtagLVBKIMAGEA;

struct tagLVBKIMAGEA { // PlaceHolder Structure
};

typedef struct AFX_EVENTSINKMAP_ENTRY AFX_EVENTSINKMAP_ENTRY, *PAFX_EVENTSINKMAP_ENTRY;

struct AFX_EVENTSINKMAP_ENTRY { // PlaceHolder Structure
};

typedef struct CPrintDialogEx CPrintDialogEx, *PCPrintDialogEx;

struct CPrintDialogEx { // PlaceHolder Structure
};

typedef struct tagSAFEARRAY tagSAFEARRAY, *PtagSAFEARRAY;

struct tagSAFEARRAY { // PlaceHolder Structure
};

typedef struct CProcessLocalObject CProcessLocalObject, *PCProcessLocalObject;

struct CProcessLocalObject { // PlaceHolder Structure
};

typedef struct CMFCShellListCtrl CMFCShellListCtrl, *PCMFCShellListCtrl;

struct CMFCShellListCtrl { // PlaceHolder Structure
};

typedef struct CFileStatus CFileStatus, *PCFileStatus;

struct CFileStatus { // PlaceHolder Structure
};

typedef struct CSettingsStoreSP CSettingsStoreSP, *PCSettingsStoreSP;

struct CSettingsStoreSP { // PlaceHolder Structure
};

typedef struct CMFCSpinButtonCtrl CMFCSpinButtonCtrl, *PCMFCSpinButtonCtrl;

struct CMFCSpinButtonCtrl { // PlaceHolder Structure
};

typedef struct _charrange _charrange, *P_charrange;

struct _charrange { // PlaceHolder Structure
};

typedef struct IOleDocumentSite IOleDocumentSite, *PIOleDocumentSite;

struct IOleDocumentSite { // PlaceHolder Structure
};

typedef struct CPlex CPlex, *PCPlex;

struct CPlex { // PlaceHolder Structure
};

typedef struct CReBarCtrl CReBarCtrl, *PCReBarCtrl;

struct CReBarCtrl { // PlaceHolder Structure
};

typedef struct CMDITabInfo CMDITabInfo, *PCMDITabInfo;

struct CMDITabInfo { // PlaceHolder Structure
};

typedef struct tagCHOOSEFONTA tagCHOOSEFONTA, *PtagCHOOSEFONTA;

struct tagCHOOSEFONTA { // PlaceHolder Structure
};

typedef struct IFileDialogCustomize IFileDialogCustomize, *PIFileDialogCustomize;

struct IFileDialogCustomize { // PlaceHolder Structure
};

typedef struct _HD_LAYOUT _HD_LAYOUT, *P_HD_LAYOUT;

struct _HD_LAYOUT { // PlaceHolder Structure
};

typedef struct COleSafeArray COleSafeArray, *PCOleSafeArray;

struct COleSafeArray { // PlaceHolder Structure
};

typedef struct CProcessLocal<class_COccManager> CProcessLocal<class_COccManager>, *PCProcessLocal<class_COccManager>;

struct CProcessLocal<class_COccManager> { // PlaceHolder Structure
};

typedef struct COleControlSite COleControlSite, *PCOleControlSite;

struct COleControlSite { // PlaceHolder Structure
};

typedef enum STPFLAG {
} STPFLAG;

typedef struct tagREBARBANDINFOA tagREBARBANDINFOA, *PtagREBARBANDINFOA;

struct tagREBARBANDINFOA { // PlaceHolder Structure
};

typedef struct CMenu CMenu, *PCMenu;

struct CMenu { // PlaceHolder Structure
};

typedef struct tagNONCLIENTMETRICSA tagNONCLIENTMETRICSA, *PtagNONCLIENTMETRICSA;

struct tagNONCLIENTMETRICSA { // PlaceHolder Structure
};

typedef struct CMFCPropertySheet CMFCPropertySheet, *PCMFCPropertySheet;

struct CMFCPropertySheet { // PlaceHolder Structure
};

typedef struct IDispatch IDispatch, *PIDispatch;

struct IDispatch { // PlaceHolder Structure
};

typedef struct CCreateContext CCreateContext, *PCCreateContext;

struct CCreateContext { // PlaceHolder Structure
};

typedef struct CRibbonCategoryScroll CRibbonCategoryScroll, *PCRibbonCategoryScroll;

struct CRibbonCategoryScroll { // PlaceHolder Structure
};

typedef struct CObject CObject, *PCObject;

struct CObject { // PlaceHolder Structure
};

typedef struct CMFCToolBarInfo CMFCToolBarInfo, *PCMFCToolBarInfo;

struct CMFCToolBarInfo { // PlaceHolder Structure
};

typedef struct CDlgGroupRadioButtonIterator CDlgGroupRadioButtonIterator, *PCDlgGroupRadioButtonIterator;

struct CDlgGroupRadioButtonIterator { // PlaceHolder Structure
};

typedef struct CMFCToolBarComboBoxEdit CMFCToolBarComboBoxEdit, *PCMFCToolBarComboBoxEdit;

struct CMFCToolBarComboBoxEdit { // PlaceHolder Structure
};

typedef struct UnDecorator UnDecorator, *PUnDecorator;

struct UnDecorator { // PlaceHolder Structure
};

typedef struct tagPSDA tagPSDA, *PtagPSDA;

struct tagPSDA { // PlaceHolder Structure
};

typedef struct tagCREATESTRUCTA tagCREATESTRUCTA, *PtagCREATESTRUCTA;

struct tagCREATESTRUCTA { // PlaceHolder Structure
};

typedef struct _TBBUTTON _TBBUTTON, *P_TBBUTTON;

struct _TBBUTTON { // PlaceHolder Structure
};

typedef struct CDC CDC, *PCDC;

struct CDC { // PlaceHolder Structure
};

typedef struct tagPOINTF tagPOINTF, *PtagPOINTF;

struct tagPOINTF { // PlaceHolder Structure
};

typedef struct CMFCTasksPaneTask CMFCTasksPaneTask, *PCMFCTasksPaneTask;

struct CMFCTasksPaneTask { // PlaceHolder Structure
};

typedef struct CProcessLocal<struct__AFX_PROPPAGEFONTINFO> CProcessLocal<struct__AFX_PROPPAGEFONTINFO>, *PCProcessLocal<struct__AFX_PROPPAGEFONTINFO>;

struct CProcessLocal<struct__AFX_PROPPAGEFONTINFO> { // PlaceHolder Structure
};

typedef struct CDataExchange CDataExchange, *PCDataExchange;

struct CDataExchange { // PlaceHolder Structure
};

typedef enum Tokens {
} Tokens;

typedef struct CMFCRibbonCommandsListBox CMFCRibbonCommandsListBox, *PCMFCRibbonCommandsListBox;

struct CMFCRibbonCommandsListBox { // PlaceHolder Structure
};

typedef struct _DLLVERSIONINFO _DLLVERSIONINFO, *P_DLLVERSIONINFO;

struct _DLLVERSIONINFO { // PlaceHolder Structure
};

typedef struct tagWINDOWPOS tagWINDOWPOS, *PtagWINDOWPOS;

struct tagWINDOWPOS { // PlaceHolder Structure
};

typedef struct CMFCRibbonMainPanel CMFCRibbonMainPanel, *PCMFCRibbonMainPanel;

struct CMFCRibbonMainPanel { // PlaceHolder Structure
};

typedef struct _CrtMemState _CrtMemState, *P_CrtMemState;

struct _CrtMemState { // PlaceHolder Structure
};

typedef struct AFX_DISPMAP AFX_DISPMAP, *PAFX_DISPMAP;

struct AFX_DISPMAP { // PlaceHolder Structure
};

typedef struct CMFCRibbonLinkCtrl CMFCRibbonLinkCtrl, *PCMFCRibbonLinkCtrl;

struct CMFCRibbonLinkCtrl { // PlaceHolder Structure
};

typedef struct CDocItem CDocItem, *PCDocItem;

struct CDocItem { // PlaceHolder Structure
};

typedef struct AUX_DATA AUX_DATA, *PAUX_DATA;

struct AUX_DATA { // PlaceHolder Structure
};

typedef struct IRowsetInfo IRowsetInfo, *PIRowsetInfo;

struct IRowsetInfo { // PlaceHolder Structure
};

typedef struct ITaskbarList ITaskbarList, *PITaskbarList;

struct ITaskbarList { // PlaceHolder Structure
};

typedef struct tagENUMLOGFONTEXA tagENUMLOGFONTEXA, *PtagENUMLOGFONTEXA;

struct tagENUMLOGFONTEXA { // PlaceHolder Structure
};

typedef struct IXMLDOMText IXMLDOMText, *PIXMLDOMText;

struct IXMLDOMText { // PlaceHolder Structure
};

typedef struct CMFCPopupMenu CMFCPopupMenu, *PCMFCPopupMenu;

struct CMFCPopupMenu { // PlaceHolder Structure
};

typedef struct CProcessLocal<class__AFX_HTMLHELP_STATE> CProcessLocal<class__AFX_HTMLHELP_STATE>, *PCProcessLocal<class__AFX_HTMLHELP_STATE>;

struct CProcessLocal<class__AFX_HTMLHELP_STATE> { // PlaceHolder Structure
};

typedef enum tagOLEGETMONIKER {
} tagOLEGETMONIKER;

typedef struct CMFCRibbonRichEditCtrl CMFCRibbonRichEditCtrl, *PCMFCRibbonRichEditCtrl;

struct CMFCRibbonRichEditCtrl { // PlaceHolder Structure
};

typedef enum AFX_DOCK_TYPE {
} AFX_DOCK_TYPE;

typedef struct _RTC_ALLOCA_NODE _RTC_ALLOCA_NODE, *P_RTC_ALLOCA_NODE;

struct _RTC_ALLOCA_NODE { // PlaceHolder Structure
};

typedef struct AFX_MAINTAIN_STATE2 AFX_MAINTAIN_STATE2, *PAFX_MAINTAIN_STATE2;

struct AFX_MAINTAIN_STATE2 { // PlaceHolder Structure
};

typedef enum _undonameid {
} _undonameid;

typedef struct ITypeInfo ITypeInfo, *PITypeInfo;

struct ITypeInfo { // PlaceHolder Structure
};

typedef struct CMFCRibbonMainPanelButton CMFCRibbonMainPanelButton, *PCMFCRibbonMainPanelButton;

struct CMFCRibbonMainPanelButton { // PlaceHolder Structure
};

typedef struct tagTCHITTESTINFO tagTCHITTESTINFO, *PtagTCHITTESTINFO;

struct tagTCHITTESTINFO { // PlaceHolder Structure
};

typedef struct CNoTrackObject CNoTrackObject, *PCNoTrackObject;

struct CNoTrackObject { // PlaceHolder Structure
};

typedef struct CThreadData CThreadData, *PCThreadData;

struct CThreadData { // PlaceHolder Structure
};

typedef struct _RB_HITTESTINFO _RB_HITTESTINFO, *P_RB_HITTESTINFO;

struct _RB_HITTESTINFO { // PlaceHolder Structure
};

typedef struct CMFCRibbonStatusBarPane CMFCRibbonStatusBarPane, *PCMFCRibbonStatusBarPane;

struct CMFCRibbonStatusBarPane { // PlaceHolder Structure
};

typedef struct CMFCRibbonSeparator CMFCRibbonSeparator, *PCMFCRibbonSeparator;

struct CMFCRibbonSeparator { // PlaceHolder Structure
};

typedef struct CatchGuardRN CatchGuardRN, *PCatchGuardRN;

struct CatchGuardRN { // PlaceHolder Structure
};

typedef struct _AFX_OLESYMBOLTABLE _AFX_OLESYMBOLTABLE, *P_AFX_OLESYMBOLTABLE;

struct _AFX_OLESYMBOLTABLE { // PlaceHolder Structure
};

typedef struct AFX_SIZEPARENTPARAMS AFX_SIZEPARENTPARAMS, *PAFX_SIZEPARENTPARAMS;

struct AFX_SIZEPARENTPARAMS { // PlaceHolder Structure
};

typedef struct CDockablePane CDockablePane, *PCDockablePane;

struct CDockablePane { // PlaceHolder Structure
};

typedef struct _AFX_OCC_DIALOG_INFO _AFX_OCC_DIALOG_INFO, *P_AFX_OCC_DIALOG_INFO;

struct _AFX_OCC_DIALOG_INFO { // PlaceHolder Structure
};

typedef struct CSmartDockingGroupGuidesManager CSmartDockingGroupGuidesManager, *PCSmartDockingGroupGuidesManager;

struct CSmartDockingGroupGuidesManager { // PlaceHolder Structure
};

typedef struct TBBUTTONINFOA TBBUTTONINFOA, *PTBBUTTONINFOA;

struct TBBUTTONINFOA { // PlaceHolder Structure
};

typedef struct IFileOpenDialog IFileOpenDialog, *PIFileOpenDialog;

struct IFileOpenDialog { // PlaceHolder Structure
};

typedef struct CPushRoutingFrame CPushRoutingFrame, *PCPushRoutingFrame;

struct CPushRoutingFrame { // PlaceHolder Structure
};

typedef enum tagOLECLOSE {
} tagOLECLOSE;

typedef struct AFX_COM AFX_COM, *PAFX_COM;

struct AFX_COM { // PlaceHolder Structure
};

typedef struct CMFCRibbonButton CMFCRibbonButton, *PCMFCRibbonButton;

struct CMFCRibbonButton { // PlaceHolder Structure
};

typedef struct IOleItemContainer IOleItemContainer, *PIOleItemContainer;

struct IOleItemContainer { // PlaceHolder Structure
};

typedef struct CRuntimeClass CRuntimeClass, *PCRuntimeClass;

struct CRuntimeClass { // PlaceHolder Structure
};

typedef struct IShellItemArray IShellItemArray, *PIShellItemArray;

struct IShellItemArray { // PlaceHolder Structure
};

typedef struct tagSTYLESTRUCT tagSTYLESTRUCT, *PtagSTYLESTRUCT;

struct tagSTYLESTRUCT { // PlaceHolder Structure
};

typedef struct CLongBinary CLongBinary, *PCLongBinary;

struct CLongBinary { // PlaceHolder Structure
};

typedef struct tagMEASUREITEMSTRUCT tagMEASUREITEMSTRUCT, *PtagMEASUREITEMSTRUCT;

struct tagMEASUREITEMSTRUCT { // PlaceHolder Structure
};

typedef struct IEnumVARIANT IEnumVARIANT, *PIEnumVARIANT;

struct IEnumVARIANT { // PlaceHolder Structure
};

typedef struct COleVariant COleVariant, *PCOleVariant;

struct COleVariant { // PlaceHolder Structure
};

typedef struct tagDISPPARAMS tagDISPPARAMS, *PtagDISPPARAMS;

struct tagDISPPARAMS { // PlaceHolder Structure
};

typedef struct CMFCStatusBar CMFCStatusBar, *PCMFCStatusBar;

struct CMFCStatusBar { // PlaceHolder Structure
};

typedef struct CRgn CRgn, *PCRgn;

struct CRgn { // PlaceHolder Structure
};

typedef struct CHARFORMAT2A CHARFORMAT2A, *PCHARFORMAT2A;

struct CHARFORMAT2A { // PlaceHolder Structure
};

typedef struct PARAFORMAT2 PARAFORMAT2, *PPARAFORMAT2;

struct PARAFORMAT2 { // PlaceHolder Structure
};

typedef struct tagNEWTEXTMETRICA tagNEWTEXTMETRICA, *PtagNEWTEXTMETRICA;

struct tagNEWTEXTMETRICA { // PlaceHolder Structure
};

typedef struct COleDispatchDriver COleDispatchDriver, *PCOleDispatchDriver;

struct COleDispatchDriver { // PlaceHolder Structure
};

typedef struct AFX_EXCEPTION_CONTEXT AFX_EXCEPTION_CONTEXT, *PAFX_EXCEPTION_CONTEXT;

struct AFX_EXCEPTION_CONTEXT { // PlaceHolder Structure
};

typedef struct CMFCControlRenderer CMFCControlRenderer, *PCMFCControlRenderer;

struct CMFCControlRenderer { // PlaceHolder Structure
};

typedef struct CException CException, *PCException;

struct CException { // PlaceHolder Structure
};

typedef struct IAccessor IAccessor, *PIAccessor;

struct IAccessor { // PlaceHolder Structure
};

typedef enum tagOLERENDER {
} tagOLERENDER;

typedef struct _AFX_HTMLHELP_STATE _AFX_HTMLHELP_STATE, *P_AFX_HTMLHELP_STATE;

struct _AFX_HTMLHELP_STATE { // PlaceHolder Structure
};

typedef struct _COLORMAP _COLORMAP, *P_COLORMAP;

struct _COLORMAP { // PlaceHolder Structure
};

typedef struct _paraformat _paraformat, *P_paraformat;

struct _paraformat { // PlaceHolder Structure
};

typedef struct CSettingsStore CSettingsStore, *PCSettingsStore;

struct CSettingsStore { // PlaceHolder Structure
};

typedef struct CMFCMenuBar CMFCMenuBar, *PCMFCMenuBar;

struct CMFCMenuBar { // PlaceHolder Structure
};

typedef enum AFX_SMARTDOCK_THEME {
} AFX_SMARTDOCK_THEME;

typedef struct IXMLDOMProcessingInstruction IXMLDOMProcessingInstruction, *PIXMLDOMProcessingInstruction;

struct IXMLDOMProcessingInstruction { // PlaceHolder Structure
};

typedef struct CEdit CEdit, *PCEdit;

struct CEdit { // PlaceHolder Structure
};

typedef struct tagTRACKMOUSEEVENT tagTRACKMOUSEEVENT, *PtagTRACKMOUSEEVENT;

struct tagTRACKMOUSEEVENT { // PlaceHolder Structure
};

typedef struct _IMAGELISTDRAWPARAMS _IMAGELISTDRAWPARAMS, *P_IMAGELISTDRAWPARAMS;

struct _IMAGELISTDRAWPARAMS { // PlaceHolder Structure
};

typedef struct tagENUMLOGFONTA tagENUMLOGFONTA, *PtagENUMLOGFONTA;

struct tagENUMLOGFONTA { // PlaceHolder Structure
};

typedef struct _HD_HITTESTINFO _HD_HITTESTINFO, *P_HD_HITTESTINFO;

struct _HD_HITTESTINFO { // PlaceHolder Structure
};

typedef enum OLE_OBJTYPE {
} OLE_OBJTYPE;

typedef struct CVSListBoxBase CVSListBoxBase, *PCVSListBoxBase;

struct CVSListBoxBase { // PlaceHolder Structure
};

typedef struct CTabbedPane CTabbedPane, *PCTabbedPane;

struct CTabbedPane { // PlaceHolder Structure
};

typedef struct CMFCRibbonQuickAccessToolBarDefaultState CMFCRibbonQuickAccessToolBarDefaultState, *PCMFCRibbonQuickAccessToolBarDefaultState;

struct CMFCRibbonQuickAccessToolBarDefaultState { // PlaceHolder Structure
};

typedef struct tagCOMPAREITEMSTRUCT tagCOMPAREITEMSTRUCT, *PtagCOMPAREITEMSTRUCT;

struct tagCOMPAREITEMSTRUCT { // PlaceHolder Structure
};

typedef struct TBINSERTMARK TBINSERTMARK, *PTBINSERTMARK;

struct TBINSERTMARK { // PlaceHolder Structure
};

typedef enum tagOLEUPDATE {
} tagOLEUPDATE;

typedef struct tagHELPINFO tagHELPINFO, *PtagHELPINFO;

struct tagHELPINFO { // PlaceHolder Structure
};

typedef struct CView CView, *PCView;

struct CView { // PlaceHolder Structure
};

typedef struct CMFCButton CMFCButton, *PCMFCButton;

struct CMFCButton { // PlaceHolder Structure
};

typedef struct IXMLDOMNode IXMLDOMNode, *PIXMLDOMNode;

struct IXMLDOMNode { // PlaceHolder Structure
};

typedef struct CDumpContext CDumpContext, *PCDumpContext;

struct CDumpContext { // PlaceHolder Structure
};

typedef struct AFX_GLOBAL_DATA AFX_GLOBAL_DATA, *PAFX_GLOBAL_DATA;

struct AFX_GLOBAL_DATA { // PlaceHolder Structure
};

typedef struct _IMAGEINFO _IMAGEINFO, *P_IMAGEINFO;

struct _IMAGEINFO { // PlaceHolder Structure
};

typedef struct CMFCScanliner CMFCScanliner, *PCMFCScanliner;

struct CMFCScanliner { // PlaceHolder Structure
};

typedef struct CList<struct_CRuntimeClass*,struct_CRuntimeClass*> CList<struct_CRuntimeClass*,struct_CRuntimeClass*>, *PCList<struct_CRuntimeClass*,struct_CRuntimeClass*>;

struct CList<struct_CRuntimeClass*,struct_CRuntimeClass*> { // PlaceHolder Structure
};

typedef struct tagTVINSERTSTRUCTA tagTVINSERTSTRUCTA, *PtagTVINSERTSTRUCTA;

struct tagTVINSERTSTRUCTA { // PlaceHolder Structure
};

typedef struct tagLVCOLUMNA tagLVCOLUMNA, *PtagLVCOLUMNA;

struct tagLVCOLUMNA { // PlaceHolder Structure
};

typedef struct IXMLDOMParseError IXMLDOMParseError, *PIXMLDOMParseError;

struct IXMLDOMParseError { // PlaceHolder Structure
};

typedef struct IRowset IRowset, *PIRowset;

struct IRowset { // PlaceHolder Structure
};

typedef struct CSplitterWndEx CSplitterWndEx, *PCSplitterWndEx;

struct CSplitterWndEx { // PlaceHolder Structure
};

typedef struct CProcessLocal<class__AFX_DEBUG_STATE> CProcessLocal<class__AFX_DEBUG_STATE>, *PCProcessLocal<class__AFX_DEBUG_STATE>;

struct CProcessLocal<class__AFX_DEBUG_STATE> { // PlaceHolder Structure
};

typedef struct CShellManager CShellManager, *PCShellManager;

struct CShellManager { // PlaceHolder Structure
};

typedef struct CMFCAutoHideBar CMFCAutoHideBar, *PCMFCAutoHideBar;

struct CMFCAutoHideBar { // PlaceHolder Structure
};

typedef struct CMFCRibbonSlider CMFCRibbonSlider, *PCMFCRibbonSlider;

struct CMFCRibbonSlider { // PlaceHolder Structure
};

typedef enum CDCONTROLSTATEF {
} CDCONTROLSTATEF;

typedef struct DName DName, *PDName;

struct DName { // PlaceHolder Structure
};

typedef struct CPaneContainer CPaneContainer, *PCPaneContainer;

struct CPaneContainer { // PlaceHolder Structure
};

typedef struct CTypedPtrListIterator<class_CPtrList,struct_COleControlSiteOrWnd*> CTypedPtrListIterator<class_CPtrList,struct_COleControlSiteOrWnd*>, *PCTypedPtrListIterator<class_CPtrList,struct_COleControlSiteOrWnd*>;

struct CTypedPtrListIterator<class_CPtrList,struct_COleControlSiteOrWnd*> { // PlaceHolder Structure
};

typedef enum tagSERVERCALL {
} tagSERVERCALL;

typedef struct IControlSiteFactory IControlSiteFactory, *PIControlSiteFactory;

struct IControlSiteFactory { // PlaceHolder Structure
};

typedef struct TranslatorGuardRN TranslatorGuardRN, *PTranslatorGuardRN;

struct TranslatorGuardRN { // PlaceHolder Structure
};

typedef struct CRect CRect, *PCRect;

struct CRect { // PlaceHolder Structure
};

typedef struct IFileSaveDialog IFileSaveDialog, *PIFileSaveDialog;

struct IFileSaveDialog { // PlaceHolder Structure
};

typedef struct CProcessLocal<class__AFX_BASE_MODULE_STATE> CProcessLocal<class__AFX_BASE_MODULE_STATE>, *PCProcessLocal<class__AFX_BASE_MODULE_STATE>;

struct CProcessLocal<class__AFX_BASE_MODULE_STATE> { // PlaceHolder Structure
};

typedef struct tagCHOOSECOLORA tagCHOOSECOLORA, *PtagCHOOSECOLORA;

struct tagCHOOSECOLORA { // PlaceHolder Structure
};

typedef struct CToolBarData CToolBarData, *PCToolBarData;

struct CToolBarData { // PlaceHolder Structure
};

typedef struct CList<class_CMFCPropertyGridProperty*,class_CMFCPropertyGridProperty*> CList<class_CMFCPropertyGridProperty*,class_CMFCPropertyGridProperty*>, *PCList<class_CMFCPropertyGridProperty*,class_CMFCPropertyGridProperty*>;

struct CList<class_CMFCPropertyGridProperty*,class_CMFCPropertyGridProperty*> { // PlaceHolder Structure
};

typedef struct IShellItem IShellItem, *PIShellItem;

struct IShellItem { // PlaceHolder Structure
};

typedef struct _Init_atexit _Init_atexit, *P_Init_atexit;

struct _Init_atexit { // PlaceHolder Structure
};

typedef struct _tagpropertykey _tagpropertykey, *P_tagpropertykey;

struct _tagpropertykey { // PlaceHolder Structure
};

typedef struct CFileFind CFileFind, *PCFileFind;

struct CFileFind { // PlaceHolder Structure
};

typedef struct tagSAFEARRAYBOUND tagSAFEARRAYBOUND, *PtagSAFEARRAYBOUND;

struct tagSAFEARRAYBOUND { // PlaceHolder Structure
};

typedef struct CThreadLocal<class_AFX_MODULE_THREAD_STATE> CThreadLocal<class_AFX_MODULE_THREAD_STATE>, *PCThreadLocal<class_AFX_MODULE_THREAD_STATE>;

struct CThreadLocal<class_AFX_MODULE_THREAD_STATE> { // PlaceHolder Structure
};

typedef struct CArray<int,int> CArray<int,int>, *PCArray<int,int>;

struct CArray<int,int> { // PlaceHolder Structure
};

typedef struct CMFCRibbonTab CMFCRibbonTab, *PCMFCRibbonTab;

struct CMFCRibbonTab { // PlaceHolder Structure
};

typedef struct _TREEITEM _TREEITEM, *P_TREEITEM;

struct _TREEITEM { // PlaceHolder Structure
};

typedef struct CPalette CPalette, *PCPalette;

struct CPalette { // PlaceHolder Structure
};

typedef struct AFX_DOCKSITE_INFO AFX_DOCKSITE_INFO, *PAFX_DOCKSITE_INFO;

struct AFX_DOCKSITE_INFO { // PlaceHolder Structure
};

typedef struct CMFCRibbonColorButton CMFCRibbonColorButton, *PCMFCRibbonColorButton;

struct CMFCRibbonColorButton { // PlaceHolder Structure
};

typedef struct _tagOLECMDTEXT _tagOLECMDTEXT, *P_tagOLECMDTEXT;

struct _tagOLECMDTEXT { // PlaceHolder Structure
};

typedef struct COleControlModule COleControlModule, *PCOleControlModule;

struct COleControlModule { // PlaceHolder Structure
};

typedef struct CGestureConfig CGestureConfig, *PCGestureConfig;

struct CGestureConfig { // PlaceHolder Structure
};

typedef struct _AFX_BASE_MODULE_STATE _AFX_BASE_MODULE_STATE, *P_AFX_BASE_MODULE_STATE;

struct _AFX_BASE_MODULE_STATE { // PlaceHolder Structure
};

typedef struct tagVARIANT tagVARIANT, *PtagVARIANT;

struct tagVARIANT { // PlaceHolder Structure
};

typedef struct CMFCEditBrowseCtrl CMFCEditBrowseCtrl, *PCMFCEditBrowseCtrl;

struct CMFCEditBrowseCtrl { // PlaceHolder Structure
};

typedef struct CMFCRibbonGallery CMFCRibbonGallery, *PCMFCRibbonGallery;

struct CMFCRibbonGallery { // PlaceHolder Structure
};

typedef struct CMFCRibbonComboBox CMFCRibbonComboBox, *PCMFCRibbonComboBox;

struct CMFCRibbonComboBox { // PlaceHolder Structure
};

typedef struct IFileDialog IFileDialog, *PIFileDialog;

struct IFileDialog { // PlaceHolder Structure
};

typedef struct AFX_CMDHANDLERINFO AFX_CMDHANDLERINFO, *PAFX_CMDHANDLERINFO;

struct AFX_CMDHANDLERINFO { // PlaceHolder Structure
};

typedef struct IPreviewHandlerFrame IPreviewHandlerFrame, *PIPreviewHandlerFrame;

struct IPreviewHandlerFrame { // PlaceHolder Structure
};

typedef struct _AFX_TOOLBAR_TERM _AFX_TOOLBAR_TERM, *P_AFX_TOOLBAR_TERM;

struct _AFX_TOOLBAR_TERM { // PlaceHolder Structure
};

typedef struct IRowsetChange IRowsetChange, *PIRowsetChange;

struct IRowsetChange { // PlaceHolder Structure
};

typedef struct CControlBarInfo CControlBarInfo, *PCControlBarInfo;

struct CControlBarInfo { // PlaceHolder Structure
};

typedef struct IOleInPlaceSite IOleInPlaceSite, *PIOleInPlaceSite;

struct IOleInPlaceSite { // PlaceHolder Structure
};

typedef struct CToolTipCtrl CToolTipCtrl, *PCToolTipCtrl;

struct CToolTipCtrl { // PlaceHolder Structure
};

typedef struct CMFCRibbonCaptionButton CMFCRibbonCaptionButton, *PCMFCRibbonCaptionButton;

struct CMFCRibbonCaptionButton { // PlaceHolder Structure
};

typedef struct CCommandLineInfo CCommandLineInfo, *PCCommandLineInfo;

struct CCommandLineInfo { // PlaceHolder Structure
};

typedef struct AFX_CLASSINIT AFX_CLASSINIT, *PAFX_CLASSINIT;

struct AFX_CLASSINIT { // PlaceHolder Structure
};

typedef struct tagDBCOLUMNID tagDBCOLUMNID, *PtagDBCOLUMNID;

struct tagDBCOLUMNID { // PlaceHolder Structure
};

typedef enum AFX_ROW_ALIGNMENT {
} AFX_ROW_ALIGNMENT;

typedef struct tagTOUCHINPUT tagTOUCHINPUT, *PtagTOUCHINPUT;

struct tagTOUCHINPUT { // PlaceHolder Structure
};

typedef struct ICursor ICursor, *PICursor;

struct ICursor { // PlaceHolder Structure
};

typedef struct ITaskbarList4 ITaskbarList4, *PITaskbarList4;

struct ITaskbarList4 { // PlaceHolder Structure
