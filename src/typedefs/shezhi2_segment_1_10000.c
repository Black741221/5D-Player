/*
 * shezhi2.exe.c - segment 1~10000 lines
 * 包含前10000行結構與型別定義，反編譯器產生骨架
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
};

typedef struct tagFINDREPLACEA tagFINDREPLACEA, *PtagFINDREPLACEA;

struct tagFINDREPLACEA { // PlaceHolder Structure
};

typedef struct _PROPSHEETPAGEA _PROPSHEETPAGEA, *P_PROPSHEETPAGEA;

struct _PROPSHEETPAGEA { // PlaceHolder Structure
};

typedef struct COleMessageFilter COleMessageFilter, *PCOleMessageFilter;

struct COleMessageFilter { // PlaceHolder Structure
};

typedef struct CTypedSimpleList<class_COleControlLock*> CTypedSimpleList<class_COleControlLock*>, *PCTypedSimpleList<class_COleControlLock*>;

struct CTypedSimpleList<class_COleControlLock*> { // PlaceHolder Structure
};

typedef struct CProcessLocal<class__AFX_RICHEDIT_STATE> CProcessLocal<class__AFX_RICHEDIT_STATE>, *PCProcessLocal<class__AFX_RICHEDIT_STATE>;

struct CProcessLocal<class__AFX_RICHEDIT_STATE> { // PlaceHolder Structure
};

typedef struct CMFCHeaderCtrl CMFCHeaderCtrl, *PCMFCHeaderCtrl;

struct CMFCHeaderCtrl { // PlaceHolder Structure
};

typedef struct COleControlSiteOrWnd COleControlSiteOrWnd, *PCOleControlSiteOrWnd;

struct COleControlSiteOrWnd { // PlaceHolder Structure
};

typedef struct CSize CSize, *PCSize;

struct CSize { // PlaceHolder Structure
};

typedef struct CWnd CWnd, *PCWnd;

struct CWnd { // PlaceHolder Structure
};

typedef enum AFX_CS_STATUS {
} AFX_CS_STATUS;

typedef enum FDAP {
} FDAP;

typedef struct CMFCRibbonGalleryIcon CMFCRibbonGalleryIcon, *PCMFCRibbonGalleryIcon;

struct CMFCRibbonGalleryIcon { // PlaceHolder Structure
};

typedef struct CMFCScanlinerBitmap CMFCScanlinerBitmap, *PCMFCScanlinerBitmap;

struct CMFCScanlinerBitmap { // PlaceHolder Structure
};

typedef struct CBaseTabbedPane CBaseTabbedPane, *PCBaseTabbedPane;

struct CBaseTabbedPane { // PlaceHolder Structure
};

typedef struct pcharNode pcharNode, *PpcharNode;

struct pcharNode { // PlaceHolder Structure
};

typedef enum tagCHUNKSTATE {
} tagCHUNKSTATE;

typedef struct CMultiDocTemplate CMultiDocTemplate, *PCMultiDocTemplate;

struct CMultiDocTemplate { // PlaceHolder Structure
};

typedef struct tagDELETEITEMSTRUCT tagDELETEITEMSTRUCT, *PtagDELETEITEMSTRUCT;

struct tagDELETEITEMSTRUCT { // PlaceHolder Structure
};

typedef struct COleDataObject COleDataObject, *PCOleDataObject;

struct COleDataObject { // PlaceHolder Structure
};

typedef struct tagOFNA tagOFNA, *PtagOFNA;

struct tagOFNA { // PlaceHolder Structure
};

typedef struct CPushRoutingView CPushRoutingView, *PCPushRoutingView;

struct CPushRoutingView { // PlaceHolder Structure
};

typedef struct CMFCOutlookBarTabCtrl CMFCOutlookBarTabCtrl, *PCMFCOutlookBarTabCtrl;

struct CMFCOutlookBarTabCtrl { // PlaceHolder Structure
};

typedef struct CFixedAlloc CFixedAlloc, *PCFixedAlloc;

struct CFixedAlloc { // PlaceHolder Structure
};

typedef struct CMFCToolTipInfo CMFCToolTipInfo, *PCMFCToolTipInfo;

struct CMFCToolTipInfo { // PlaceHolder Structure
};

typedef struct IShellLinkA IShellLinkA, *PIShellLinkA;

struct IShellLinkA { // PlaceHolder Structure
};

typedef struct CMFCCaptionButton CMFCCaptionButton, *PCMFCCaptionButton;

struct CMFCCaptionButton { // PlaceHolder Structure
};

typedef struct tagNEWTEXTMETRICEXA tagNEWTEXTMETRICEXA, *PtagNEWTEXTMETRICEXA;

struct tagNEWTEXTMETRICEXA { // PlaceHolder Structure
};

typedef struct CDocTemplate CDocTemplate, *PCDocTemplate;

struct CDocTemplate { // PlaceHolder Structure
};

typedef struct tagMINMAXINFO tagMINMAXINFO, *PtagMINMAXINFO;

struct tagMINMAXINFO { // PlaceHolder Structure
};

typedef struct AFX_DATACACHE_ENTRY AFX_DATACACHE_ENTRY, *PAFX_DATACACHE_ENTRY;

struct AFX_DATACACHE_ENTRY { // PlaceHolder Structure
};

typedef union tagCY tagCY, *PtagCY;

union tagCY {
};

typedef struct ITaskbarList3 ITaskbarList3, *PITaskbarList3;

struct ITaskbarList3 { // PlaceHolder Structure
};

typedef struct tagDBOBJECT tagDBOBJECT, *PtagDBOBJECT;

struct tagDBOBJECT { // PlaceHolder Structure
};

typedef struct tagDBBINDING tagDBBINDING, *PtagDBBINDING;

struct tagDBBINDING { // PlaceHolder Structure
};

typedef struct CMFCRibbonPanel CMFCRibbonPanel, *PCMFCRibbonPanel;

struct CMFCRibbonPanel { // PlaceHolder Structure
};

typedef struct DNameStatusNode DNameStatusNode, *PDNameStatusNode;

struct DNameStatusNode { // PlaceHolder Structure
};

typedef struct tagLVHITTESTINFO tagLVHITTESTINFO, *PtagLVHITTESTINFO;

struct tagLVHITTESTINFO { // PlaceHolder Structure
};

typedef struct CMFCVisualManager CMFCVisualManager, *PCMFCVisualManager;

struct CMFCVisualManager { // PlaceHolder Structure
};

typedef struct _charformat _charformat, *P_charformat;

struct _charformat { // PlaceHolder Structure
};

typedef enum TBPFLAG {
} TBPFLAG;

typedef enum DSCSTATE {
} DSCSTATE;

typedef struct _UDACCEL _UDACCEL, *P_UDACCEL;

struct _UDACCEL { // PlaceHolder Structure
};

typedef struct CAccessibilityData CAccessibilityData, *PCAccessibilityData;

struct CAccessibilityData { // PlaceHolder Structure
};

typedef struct CStatusBar CStatusBar, *PCStatusBar;

struct CStatusBar { // PlaceHolder Structure
};

typedef struct tagDRAWITEMSTRUCT tagDRAWITEMSTRUCT, *PtagDRAWITEMSTRUCT;

struct tagDRAWITEMSTRUCT { // PlaceHolder Structure
};

typedef enum tagFDE_SHAREVIOLATION_RESPONSE {
} tagFDE_SHAREVIOLATION_RESPONSE;

typedef struct AFX_MODULE_STATE AFX_MODULE_STATE, *PAFX_MODULE_STATE;

struct AFX_MODULE_STATE { // PlaceHolder Structure
};

typedef struct _AFX_THREAD_STATE _AFX_THREAD_STATE, *P_AFX_THREAD_STATE;

struct _AFX_THREAD_STATE { // PlaceHolder Structure
};

typedef struct CSingleLock CSingleLock, *PCSingleLock;

struct CSingleLock { // PlaceHolder Structure
};

typedef struct CMFCDesktopAlertWnd CMFCDesktopAlertWnd, *PCMFCDesktopAlertWnd;

struct CMFCDesktopAlertWnd { // PlaceHolder Structure
};

typedef struct CSimpleList CSimpleList, *PCSimpleList;

struct CSimpleList { // PlaceHolder Structure
};

typedef struct Replicator Replicator, *PReplicator;

struct Replicator { // PlaceHolder Structure
};

typedef struct CDialogTemplate CDialogTemplate, *PCDialogTemplate;

struct CDialogTemplate { // PlaceHolder Structure
};

typedef enum OLE_APPTYPE {
} OLE_APPTYPE;

typedef struct CPagerCtrl CPagerCtrl, *PCPagerCtrl;

struct CPagerCtrl { // PlaceHolder Structure
};

typedef enum AFX_RibbonCategoryColor {
} AFX_RibbonCategoryColor;

typedef struct CMFCRibbonInfo CMFCRibbonInfo, *PCMFCRibbonInfo;

struct CMFCRibbonInfo { // PlaceHolder Structure
};

typedef struct CMFCRibbonBar CMFCRibbonBar, *PCMFCRibbonBar;

struct CMFCRibbonBar { // PlaceHolder Structure
};

typedef struct COleDispParams COleDispParams, *PCOleDispParams;

struct COleDispParams { // PlaceHolder Structure
};

typedef struct tagPDA tagPDA, *PtagPDA;

struct tagPDA { // PlaceHolder Structure
};

typedef struct CMultiLock CMultiLock, *PCMultiLock;

struct CMultiLock { // PlaceHolder Structure
};

typedef struct CTypedSimpleList<class_CFrameWnd*> CTypedSimpleList<class_CFrameWnd*>, *PCTypedSimpleList<class_CFrameWnd*>;

struct CTypedSimpleList<class_CFrameWnd*> { // PlaceHolder Structure
};

typedef struct CControlCreationInfo CControlCreationInfo, *PCControlCreationInfo;

struct CControlCreationInfo { // PlaceHolder Structure
};

typedef struct COleClientItem COleClientItem, *PCOleClientItem;

struct COleClientItem { // PlaceHolder Structure
};

typedef struct tagDEVNAMES tagDEVNAMES, *PtagDEVNAMES;

struct tagDEVNAMES { // PlaceHolder Structure
};

typedef struct DNameNode DNameNode, *PDNameNode;

struct DNameNode { // PlaceHolder Structure
};

typedef enum tagDATADIR {
} tagDATADIR;

typedef struct CMFCDesktopAlertWndButton CMFCDesktopAlertWndButton, *PCMFCDesktopAlertWndButton;

struct CMFCDesktopAlertWndButton { // PlaceHolder Structure
};

typedef struct _HD_ITEMA _HD_ITEMA, *P_HD_ITEMA;

struct _HD_ITEMA { // PlaceHolder Structure
};

typedef struct CPrintInfo CPrintInfo, *PCPrintInfo;

struct CPrintInfo { // PlaceHolder Structure
};

typedef struct tagEXTLOGPEN tagEXTLOGPEN, *PtagEXTLOGPEN;

struct tagEXTLOGPEN { // PlaceHolder Structure
};

typedef enum eActCtxResult {
} eActCtxResult;

typedef struct CMFCRibbonPanelMenu CMFCRibbonPanelMenu, *PCMFCRibbonPanelMenu;

struct CMFCRibbonPanelMenu { // PlaceHolder Structure
};

typedef struct EHExceptionRecord EHExceptionRecord, *PEHExceptionRecord;

struct EHExceptionRecord { // PlaceHolder Structure
};

typedef enum WTS_ALPHATYPE {
} WTS_ALPHATYPE;

typedef struct CInternalGlobalLock CInternalGlobalLock, *PCInternalGlobalLock;

struct CInternalGlobalLock { // PlaceHolder Structure
};

typedef struct CMFCStatusBarPaneInfo CMFCStatusBarPaneInfo, *PCMFCStatusBarPaneInfo;

struct CMFCStatusBarPaneInfo { // PlaceHolder Structure
};

typedef struct CList<class_CFrameWnd*,class_CFrameWnd*> CList<class_CFrameWnd*,class_CFrameWnd*>, *PCList<class_CFrameWnd*,class_CFrameWnd*>;

struct CList<class_CFrameWnd*,class_CFrameWnd*> { // PlaceHolder Structure
};

typedef struct AFX_CHECK_DATA AFX_CHECK_DATA, *PAFX_CHECK_DATA;

struct AFX_CHECK_DATA { // PlaceHolder Structure
};

typedef struct CThreadSlotData CThreadSlotData, *PCThreadSlotData;

struct CThreadSlotData { // PlaceHolder Structure
};

typedef struct CVariantBoolPair CVariantBoolPair, *PCVariantBoolPair;

struct CVariantBoolPair { // PlaceHolder Structure
};

typedef struct tagLVITEMA tagLVITEMA, *PtagLVITEMA;

struct tagLVITEMA { // PlaceHolder Structure
};

typedef enum AFX_PREDOCK_STATE {
} AFX_PREDOCK_STATE;

typedef struct tagDB_NUMERIC tagDB_NUMERIC, *PtagDB_NUMERIC;

struct tagDB_NUMERIC { // PlaceHolder Structure
};

typedef struct CTypedSimpleList<class_COleObjectFactory*> CTypedSimpleList<class_COleObjectFactory*>, *PCTypedSimpleList<class_COleObjectFactory*>;

struct CTypedSimpleList<class_COleObjectFactory*> { // PlaceHolder Structure
};

typedef enum THEMESIZE {
} THEMESIZE;

typedef struct AFX_DISPMAP_ENTRY AFX_DISPMAP_ENTRY, *PAFX_DISPMAP_ENTRY;

struct AFX_DISPMAP_ENTRY { // PlaceHolder Structure
};

typedef struct CThreadLocalObject CThreadLocalObject, *PCThreadLocalObject;

struct CThreadLocalObject { // PlaceHolder Structure
};

typedef struct OLE_DATA OLE_DATA, *POLE_DATA;

struct OLE_DATA { // PlaceHolder Structure
};

typedef enum tagUSERCLASSTYPE {
} tagUSERCLASSTYPE;

typedef struct CWaitCursor CWaitCursor, *PCWaitCursor;

struct CWaitCursor { // PlaceHolder Structure
};

typedef struct CTraceSnapshot CTraceSnapshot, *PCTraceSnapshot;

struct CTraceSnapshot { // PlaceHolder Structure
};

typedef struct AFX_AUTOHIDE_DOCKSITE_SAVE_INFO AFX_AUTOHIDE_DOCKSITE_SAVE_INFO, *PAFX_AUTOHIDE_DOCKSITE_SAVE_INFO;

struct AFX_AUTOHIDE_DOCKSITE_SAVE_INFO { // PlaceHolder Structure
};

typedef struct CCommandManager CCommandManager, *PCCommandManager;

struct CCommandManager { // PlaceHolder Structure
};

typedef enum tagDVASPECT {
} tagDVASPECT;

typedef struct tagINITCOMMONCONTROLSEX tagINITCOMMONCONTROLSEX, *PtagINITCOMMONCONTROLSEX;

struct tagINITCOMMONCONTROLSEX { // PlaceHolder Structure
};

typedef struct CThreadLocal<class__AFX_THREAD_STATE> CThreadLocal<class__AFX_THREAD_STATE>, *PCThreadLocal<class__AFX_THREAD_STATE>;

struct CThreadLocal<class__AFX_THREAD_STATE> { // PlaceHolder Structure
};

typedef struct pDNameNode pDNameNode, *PpDNameNode;

struct pDNameNode { // PlaceHolder Structure
};

typedef enum DNameStatus {
} DNameStatus;

typedef struct tagCOLORSCHEME tagCOLORSCHEME, *PtagCOLORSCHEME;

struct tagCOLORSCHEME { // PlaceHolder Structure
};

typedef struct CAtlTraceProcess CAtlTraceProcess, *PCAtlTraceProcess;

struct CAtlTraceProcess { // PlaceHolder Structure
};

typedef struct CDlgControlIterator CDlgControlIterator, *PCDlgControlIterator;

struct CDlgControlIterator { // PlaceHolder Structure
};

typedef enum AFX_DOCK_METHOD {
} AFX_DOCK_METHOD;

typedef struct CAtlTraceSettings CAtlTraceSettings, *PCAtlTraceSettings;

struct CAtlTraceSettings { // PlaceHolder Structure
};

typedef struct _LocaleUpdate _LocaleUpdate, *P_LocaleUpdate;

struct _LocaleUpdate { // PlaceHolder Structure
};

typedef enum OLE_NOTIFICATION {
} OLE_NOTIFICATION;

typedef struct charNode charNode, *PcharNode;

struct charNode { // PlaceHolder Structure
};

typedef enum Location {
} Location;

typedef enum BC_FIND_CRITERIA {
} BC_FIND_CRITERIA;

typedef enum BarElementAlignment {
} BarElementAlignment;

typedef enum BarElement {
} BarElement;

typedef struct CNode CNode, *PCNode;

struct CNode { // PlaceHolder Structure
};

typedef enum SDMarkerPlace {
} SDMarkerPlace;

typedef struct _Fac_node _Fac_node, *P_Fac_node;

struct _Fac_node { // PlaceHolder Structure
};

typedef struct _Lockit _Lockit, *P_Lockit;

struct _Lockit { // PlaceHolder Structure
};

typedef struct basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>, *Pbasic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>;

struct basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> { // PlaceHolder Structure
};

typedef struct error_condition error_condition, *Perror_condition;

struct error_condition { // PlaceHolder Structure
};

typedef struct ios_base ios_base, *Pios_base;

struct ios_base { // PlaceHolder Structure
};

typedef struct locale locale, *Plocale;

struct locale { // PlaceHolder Structure
};

typedef struct error_code error_code, *Perror_code;

struct error_code { // PlaceHolder Structure
};

typedef struct _DebugHeapTag_t _DebugHeapTag_t, *P_DebugHeapTag_t;

struct _DebugHeapTag_t { // PlaceHolder Structure
};

typedef struct _Yarn<char> _Yarn<char>, *P_Yarn<char>;

struct _Yarn<char> { // PlaceHolder Structure
};

typedef enum _Uninitialized {
} _Uninitialized;

typedef struct _Fac_tidy_reg_t _Fac_tidy_reg_t, *P_Fac_tidy_reg_t;

struct _Fac_tidy_reg_t { // PlaceHolder Structure
};

typedef struct _Init_locks _Init_locks, *P_Init_locks;

struct _Init_locks { // PlaceHolder Structure
};

typedef struct _Mutex _Mutex, *P_Mutex;

struct _Mutex { // PlaceHolder Structure
};

typedef struct _Locinfo _Locinfo, *P_Locinfo;

struct _Locinfo { // PlaceHolder Structure
};

typedef struct _Locimp _Locimp, *P_Locimp;

struct _Locimp { // PlaceHolder Structure
};

typedef struct facet facet, *Pfacet;

struct facet { // PlaceHolder Structure
};

typedef enum event {
} event;

typedef enum CurrencyStatus {
} CurrencyStatus;

typedef enum Confidence {
} Confidence;

typedef enum DocStringIndex {
} DocStringIndex;

typedef enum IMAGE_EDIT_MODE {
} IMAGE_EDIT_MODE;

typedef enum XZoomType {
} XZoomType;

typedef struct XKernelList XKernelList, *PXKernelList;

struct XKernelList { // PlaceHolder Structure
};

typedef enum XFilterType {
} XFilterType;

typedef struct CAssoc CAssoc, *PCAssoc;

struct CAssoc { // PlaceHolder Structure
};

typedef enum DocumentEvent {
} DocumentEvent;

typedef enum ANIMATION_TYPE {
} ANIMATION_TYPE;

typedef enum LOGO_LOCATION {
} LOGO_LOCATION;

typedef enum MENUAREA_TYPE {
} MENUAREA_TYPE;

typedef enum DROP_DIRECTION {
} DROP_DIRECTION;

typedef enum QUICK_CUSTOMIZE_TYPE {
} QUICK_CUSTOMIZE_TYPE;

typedef enum LoadArrayObjType {
} LoadArrayObjType;

typedef enum RibbonImageType {
} RibbonImageType;

typedef struct _NoAddRefReleaseOnCComPtr<struct_IXMLDOMNode> _NoAddRefReleaseOnCComPtr<struct_IXMLDOMNode>, *P_NoAddRefReleaseOnCComPtr<struct_IXMLDOMNode>;

struct _NoAddRefReleaseOnCComPtr<struct_IXMLDOMNode> { // PlaceHolder Structure
};

typedef struct _NoAddRefReleaseOnCComPtr<struct_IRowsetInfo> _NoAddRefReleaseOnCComPtr<struct_IRowsetInfo>, *P_NoAddRefReleaseOnCComPtr<struct_IRowsetInfo>;

struct _NoAddRefReleaseOnCComPtr<struct_IRowsetInfo> { // PlaceHolder Structure
};

typedef struct _NoAddRefReleaseOnCComPtr<struct_IXMLDOMParseError> _NoAddRefReleaseOnCComPtr<struct_IXMLDOMParseError>, *P_NoAddRefReleaseOnCComPtr<struct_IXMLDOMParseError>;

struct _NoAddRefReleaseOnCComPtr<struct_IXMLDOMParseError> { // PlaceHolder Structure
};

typedef struct _ATL_WIN_MODULE70 _ATL_WIN_MODULE70, *P_ATL_WIN_MODULE70;

struct _ATL_WIN_MODULE70 { // PlaceHolder Structure
};

typedef struct CComPtrBase<struct_ITaskbarList4> CComPtrBase<struct_ITaskbarList4>, *PCComPtrBase<struct_ITaskbarList4>;

struct CComPtrBase<struct_ITaskbarList4> { // PlaceHolder Structure
};

typedef struct CStringT<char,class_StrTraitMFC<char,class_ATL::ChTraitsCRT<char>_>_> CStringT<char,class_StrTraitMFC<char,class_ATL::ChTraitsCRT<char>_>_>, *PCStringT<char,class_StrTraitMFC<char,class_ATL::ChTraitsCRT<char>_>_>;

struct CStringT<char,class_StrTraitMFC<char,class_ATL::ChTraitsCRT<char>_>_> { // PlaceHolder Structure
};

typedef struct CComCritSecLock<class_ATL::CComCriticalSection> CComCritSecLock<class_ATL::CComCriticalSection>, *PCComCritSecLock<class_ATL::CComCriticalSection>;

struct CComCritSecLock<class_ATL::CComCriticalSection> { // PlaceHolder Structure
};

typedef struct CHeapPtr<struct_tagPROPVARIANT,class_ATL::CComAllocator> CHeapPtr<struct_tagPROPVARIANT,class_ATL::CComAllocator>, *PCHeapPtr<struct_tagPROPVARIANT,class_ATL::CComAllocator>;

struct CHeapPtr<struct_tagPROPVARIANT,class_ATL::CComAllocator> { // PlaceHolder Structure
};

typedef struct CFileTime CFileTime, *PCFileTime;

struct CFileTime { // PlaceHolder Structure
};

typedef struct CComQIPtr<struct_ITaskbarList4,&struct___s_GUID_const__GUID_c43dc798_95d1_4bea_9030_bb99e2983a1a> CComQIPtr<struct_ITaskbarList4,&struct___s_GUID_const__GUID_c43dc798_95d1_4bea_9030_bb99e2983a1a>, *PCComQIPtr<struct_ITaskbarList4,&struct___s_GUID_const__GUID_c43dc798_95d1_4bea_9030_bb99e2983a1a>;

struct CComQIPtr<struct_ITaskbarList4,&struct___s_GUID_const__GUID_c43dc798_95d1_4bea_9030_bb99e2983a1a> { // PlaceHolder Structure
};

typedef struct _NoAddRefReleaseOnCComPtr<struct_IXMLDOMDocument2> _NoAddRefReleaseOnCComPtr<struct_IXMLDOMDocument2>, *P_NoAddRefReleaseOnCComPtr<struct_IXMLDOMDocument2>;

struct _NoAddRefReleaseOnCComPtr<struct_IXMLDOMDocument2> { // PlaceHolder Structure
};

typedef struct CTime CTime, *PCTime;

struct CTime { // PlaceHolder Structure
};

typedef struct CHeapPtr<wchar_t,class_ATL::CComAllocator> CHeapPtr<wchar_t,class_ATL::CComAllocator>, *PCHeapPtr<wchar_t,class_ATL::CComAllocator>;

struct CHeapPtr<wchar_t,class_ATL::CComAllocator> { // PlaceHolder Structure
};

typedef struct CAccessorBase CAccessorBase, *PCAccessorBase;

struct CAccessorBase { // PlaceHolder Structure
};

typedef struct _NoAddRefReleaseOnCComPtr<struct_IXMLDOMNodeList> _NoAddRefReleaseOnCComPtr<struct_IXMLDOMNodeList>, *P_NoAddRefReleaseOnCComPtr<struct_IXMLDOMNodeList>;

struct _NoAddRefReleaseOnCComPtr<struct_IXMLDOMNodeList> { // PlaceHolder Structure
};

typedef struct COleDateTimeSpan COleDateTimeSpan, *PCOleDateTimeSpan;

struct COleDateTimeSpan { // PlaceHolder Structure
};

typedef struct CAtlBaseModule CAtlBaseModule, *PCAtlBaseModule;

struct CAtlBaseModule { // PlaceHolder Structure
};

typedef struct CSimpleArray<unsigned_long,class_ATL::CSimpleArrayEqualHelper<unsigned_long>_> CSimpleArray<unsigned_long,class_ATL::CSimpleArrayEqualHelper<unsigned_long>_>, *PCSimpleArray<unsigned_long,class_ATL::CSimpleArrayEqualHelper<unsigned_long>_>;

struct CSimpleArray<unsigned_long,class_ATL::CSimpleArrayEqualHelper<unsigned_long>_> { // PlaceHolder Structure
};

typedef struct CComPtrBase<struct_IOleInPlaceUIWindow> CComPtrBase<struct_IOleInPlaceUIWindow>, *PCComPtrBase<struct_IOleInPlaceUIWindow>;

struct CComPtrBase<struct_IOleInPlaceUIWindow> { // PlaceHolder Structure
};

typedef struct CComPtr<struct_IUnknown> CComPtr<struct_IUnknown>, *PCComPtr<struct_IUnknown>;

struct CComPtr<struct_IUnknown> { // PlaceHolder Structure
};

typedef struct _AtlCreateWndData _AtlCreateWndData, *P_AtlCreateWndData;

struct _AtlCreateWndData { // PlaceHolder Structure
};

typedef struct CAtlTransactionManager CAtlTransactionManager, *PCAtlTransactionManager;

struct CAtlTransactionManager { // PlaceHolder Structure
};

typedef struct CComPtrBase<struct_IRowset> CComPtrBase<struct_IRowset>, *PCComPtrBase<struct_IRowset>;

struct CComPtrBase<struct_IRowset> { // PlaceHolder Structure
};

typedef struct CComPtrBase<struct_IChapteredRowset> CComPtrBase<struct_IChapteredRowset>, *PCComPtrBase<struct_IChapteredRowset>;

struct CComPtrBase<struct_IChapteredRowset> { // PlaceHolder Structure
};

typedef enum ATLTRACESTATUS {
} ATLTRACESTATUS;

typedef struct _NoAddRefReleaseOnCComPtr<struct_ITaskbarList4> _NoAddRefReleaseOnCComPtr<struct_ITaskbarList4>, *P_NoAddRefReleaseOnCComPtr<struct_ITaskbarList4>;

struct _NoAddRefReleaseOnCComPtr<struct_ITaskbarList4> { // PlaceHolder Structure
};

typedef struct CComPtrBase<struct_IUnknown> CComPtrBase<struct_IUnknown>, *PCComPtrBase<struct_IUnknown>;

struct CComPtrBase<struct_IUnknown> { // PlaceHolder Structure
};

typedef struct CManualAccessor CManualAccessor, *PCManualAccessor;

struct CManualAccessor { // PlaceHolder Structure
};

typedef struct _ATL_COM_MODULE70 _ATL_COM_MODULE70, *P_ATL_COM_MODULE70;

struct _ATL_COM_MODULE70 { // PlaceHolder Structure
};

typedef struct _NoAddRefReleaseOnCComPtr<struct_IOleInPlaceUIWindow> _NoAddRefReleaseOnCComPtr<struct_IOleInPlaceUIWindow>, *P_NoAddRefReleaseOnCComPtr<struct_IOleInPlaceUIWindow>;

struct _NoAddRefReleaseOnCComPtr<struct_IOleInPlaceUIWindow> { // PlaceHolder Structure
};

typedef struct CComBSTR CComBSTR, *PCComBSTR;

struct CComBSTR { // PlaceHolder Structure
};

typedef struct CComQIPtr<struct_IXMLDOMDocument,&struct___s_GUID_const__GUID_2933bf81_7b36_11d2_b20e_00c04f983e60> CComQIPtr<struct_IXMLDOMDocument,&struct___s_GUID_const__GUID_2933bf81_7b36_11d2_b20e_00c04f983e60>, *PCComQIPtr<struct_IXMLDOMDocument,&struct___s_GUID_const__GUID_2933bf81_7b36_11d2_b20e_00c04f983e60>;

struct CComQIPtr<struct_IXMLDOMDocument,&struct___s_GUID_const__GUID_2933bf81_7b36_11d2_b20e_00c04f983e60> { // PlaceHolder Structure
};

typedef struct _NoAddRefReleaseOnCComPtr<struct_IXMLDOMDocument> _NoAddRefReleaseOnCComPtr<struct_IXMLDOMDocument>, *P_NoAddRefReleaseOnCComPtr<struct_IXMLDOMDocument>;

struct _NoAddRefReleaseOnCComPtr<struct_IXMLDOMDocument> { // PlaceHolder Structure
};

typedef struct CRowset<class_ATL::CAccessorBase> CRowset<class_ATL::CAccessorBase>, *PCRowset<class_ATL::CAccessorBase>;

struct CRowset<class_ATL::CAccessorBase> { // PlaceHolder Structure
};

typedef struct _NoAddRefReleaseOnCComPtr<struct_IXMLDOMElement> _NoAddRefReleaseOnCComPtr<struct_IXMLDOMElement>, *P_NoAddRefReleaseOnCComPtr<struct_IXMLDOMElement>;

struct _NoAddRefReleaseOnCComPtr<struct_IXMLDOMElement> { // PlaceHolder Structure
};

typedef struct CAutoVectorPtr<unsigned_long> CAutoVectorPtr<unsigned_long>, *PCAutoVectorPtr<unsigned_long>;

struct CAutoVectorPtr<unsigned_long> { // PlaceHolder Structure
};

typedef struct CNilStringData CNilStringData, *PCNilStringData;

struct CNilStringData { // PlaceHolder Structure
};

typedef struct CTraceFileAndLineInfo CTraceFileAndLineInfo, *PCTraceFileAndLineInfo;

struct CTraceFileAndLineInfo { // PlaceHolder Structure
};

typedef struct CRegKey CRegKey, *PCRegKey;

struct CRegKey { // PlaceHolder Structure
};

typedef struct CComPtrBase<struct_IAccessibleProxy> CComPtrBase<struct_IAccessibleProxy>, *PCComPtrBase<struct_IAccessibleProxy>;

struct CComPtrBase<struct_IAccessibleProxy> { // PlaceHolder Structure
};

typedef struct IAtlStringMgr IAtlStringMgr, *PIAtlStringMgr;

struct IAtlStringMgr { // PlaceHolder Structure
};

typedef struct CComQIPtr<struct_IChapteredRowset,&struct___s_GUID_const__GUID_0c733a93_2a1c_11ce_ade5_00aa0044773d> CComQIPtr<struct_IChapteredRowset,&struct___s_GUID_const__GUID_0c733a93_2a1c_11ce_ade5_00aa0044773d>, *PCComQIPtr<struct_IChapteredRowset,&struct___s_GUID_const__GUID_0c733a93_2a1c_11ce_ade5_00aa0044773d>;

struct CComQIPtr<struct_IChapteredRowset,&struct___s_GUID_const__GUID_0c733a93_2a1c_11ce_ade5_00aa0044773d> { // PlaceHolder Structure
};

typedef struct CComPtrBase<struct_IRowsetChange> CComPtrBase<struct_IRowsetChange>, *PCComPtrBase<struct_IRowsetChange>;

struct CComPtrBase<struct_IRowsetChange> { // PlaceHolder Structure
};

typedef struct CA2WEX<128> CA2WEX<128>, *PCA2WEX<128>;

struct CA2WEX<128> { // PlaceHolder Structure
};

typedef struct _ATL_MODULE70 _ATL_MODULE70, *P_ATL_MODULE70;

struct _ATL_MODULE70 { // PlaceHolder Structure
};

typedef struct IFilterChunkValue IFilterChunkValue, *PIFilterChunkValue;

struct IFilterChunkValue { // PlaceHolder Structure
};

typedef struct _NoAddRefReleaseOnCComPtr<struct_IAccessibleProxy> _NoAddRefReleaseOnCComPtr<struct_IAccessibleProxy>, *P_NoAddRefReleaseOnCComPtr<struct_IAccessibleProxy>;

struct _NoAddRefReleaseOnCComPtr<struct_IAccessibleProxy> { // PlaceHolder Structure
};

typedef enum DBBLOBHANDLINGENUM {
} DBBLOBHANDLINGENUM;

typedef struct _ATL_INTMAP_ENTRY _ATL_INTMAP_ENTRY, *P_ATL_INTMAP_ENTRY;

struct _ATL_INTMAP_ENTRY { // PlaceHolder Structure
};

typedef struct _NoAddRefReleaseOnCComPtr<struct_IUnknown> _NoAddRefReleaseOnCComPtr<struct_IUnknown>, *P_NoAddRefReleaseOnCComPtr<struct_IUnknown>;

struct _NoAddRefReleaseOnCComPtr<struct_IUnknown> { // PlaceHolder Structure
};

typedef struct CStringData CStringData, *PCStringData;

struct CStringData { // PlaceHolder Structure
};

typedef struct CComPtrBase<struct_IXMLDOMNode> CComPtrBase<struct_IXMLDOMNode>, *PCComPtrBase<struct_IXMLDOMNode>;

struct CComPtrBase<struct_IXMLDOMNode> { // PlaceHolder Structure
};

typedef struct CComPtrBase<struct_IXMLDOMParseError> CComPtrBase<struct_IXMLDOMParseError>, *PCComPtrBase<struct_IXMLDOMParseError>;

struct CComPtrBase<struct_IXMLDOMParseError> { // PlaceHolder Structure
};

typedef struct CTimeSpan CTimeSpan, *PCTimeSpan;

struct CTimeSpan { // PlaceHolder Structure
};

typedef struct CHeapPtrBase<struct_tagDBPROPSET,class_ATL::CComAllocator> CHeapPtrBase<struct_tagDBPROPSET,class_ATL::CComAllocator>, *PCHeapPtrBase<struct_tagDBPROPSET,class_ATL::CComAllocator>;

struct CHeapPtrBase<struct_tagDBPROPSET,class_ATL::CComAllocator> { // PlaceHolder Structure
};

typedef struct CComPtrBase<struct_IShellItem> CComPtrBase<struct_IShellItem>, *PCComPtrBase<struct_IShellItem>;

struct CComPtrBase<struct_IShellItem> { // PlaceHolder Structure
};

typedef struct CTempBuffer<wchar_t,128,class_ATL::CCRTAllocator> CTempBuffer<wchar_t,128,class_ATL::CCRTAllocator>, *PCTempBuffer<wchar_t,128,class_ATL::CCRTAllocator>;

struct CTempBuffer<wchar_t,128,class_ATL::CCRTAllocator> { // PlaceHolder Structure
};

typedef struct _NoAddRefReleaseOnCComPtr<struct_IRowsetChange> _NoAddRefReleaseOnCComPtr<struct_IRowsetChange>, *P_NoAddRefReleaseOnCComPtr<struct_IRowsetChange>;

struct _NoAddRefReleaseOnCComPtr<struct_IRowsetChange> { // PlaceHolder Structure
};

typedef struct CComQIPtr<struct_IXMLDOMNode,&struct___s_GUID_const__GUID_2933bf80_7b36_11d2_b20e_00c04f983e60> CComQIPtr<struct_IXMLDOMNode,&struct___s_GUID_const__GUID_2933bf80_7b36_11d2_b20e_00c04f983e60>, *PCComQIPtr<struct_IXMLDOMNode,&struct___s_GUID_const__GUID_2933bf80_7b36_11d2_b20e_00c04f983e60>;

struct CComQIPtr<struct_IXMLDOMNode,&struct___s_GUID_const__GUID_2933bf80_7b36_11d2_b20e_00c04f983e60> { // PlaceHolder Structure
};

typedef struct CDynamicAccessor CDynamicAccessor, *PCDynamicAccessor;

struct CDynamicAccessor { // PlaceHolder Structure
};

typedef struct CHeapPtrBase<wchar_t,class_ATL::CComAllocator> CHeapPtrBase<wchar_t,class_ATL::CComAllocator>, *PCHeapPtrBase<wchar_t,class_ATL::CComAllocator>;

struct CHeapPtrBase<wchar_t,class_ATL::CComAllocator> { // PlaceHolder Structure
};

typedef struct _NoAddRefReleaseOnCComPtr<struct_IAccessor> _NoAddRefReleaseOnCComPtr<struct_IAccessor>, *P_NoAddRefReleaseOnCComPtr<struct_IAccessor>;

struct _NoAddRefReleaseOnCComPtr<struct_IAccessor> { // PlaceHolder Structure
};

typedef struct CHeapPtrBase<struct_tagPROPVARIANT,class_ATL::CComAllocator> CHeapPtrBase<struct_tagPROPVARIANT,class_ATL::CComAllocator>, *PCHeapPtrBase<struct_tagPROPVARIANT,class_ATL::CComAllocator>;

struct CHeapPtrBase<struct_tagPROPVARIANT,class_ATL::CComAllocator> { // PlaceHolder Structure
};

typedef struct CSimpleArray<struct_HINSTANCE__*,class_ATL::CSimpleArrayEqualHelper<struct_HINSTANCE__*>_> CSimpleArray<struct_HINSTANCE__*,class_ATL::CSimpleArrayEqualHelper<struct_HINSTANCE__*>_>, *PCSimpleArray<struct_HINSTANCE__*,class_ATL::CSimpleArrayEqualHelper<struct_HINSTANCE__*>_>;

struct CSimpleArray<struct_HINSTANCE__*,class_ATL::CSimpleArrayEqualHelper<struct_HINSTANCE__*>_> { // PlaceHolder Structure
};

typedef struct _ATL_BASE_MODULE70 _ATL_BASE_MODULE70, *P_ATL_BASE_MODULE70;

struct _ATL_BASE_MODULE70 { // PlaceHolder Structure
};

typedef struct CComPtrBase<struct_IXMLDOMElement> CComPtrBase<struct_IXMLDOMElement>, *PCComPtrBase<struct_IXMLDOMElement>;

struct CComPtrBase<struct_IXMLDOMElement> { // PlaceHolder Structure
};

typedef struct CComPtrBase<struct_IXMLDOMNodeList> CComPtrBase<struct_IXMLDOMNodeList>, *PCComPtrBase<struct_IXMLDOMNodeList>;

struct CComPtrBase<struct_IXMLDOMNodeList> { // PlaceHolder Structure
};

typedef struct CXMLNode<struct_IXMLDOMElement> CXMLNode<struct_IXMLDOMElement>, *PCXMLNode<struct_IXMLDOMElement>;

struct CXMLNode<struct_IXMLDOMElement> { // PlaceHolder Structure
};

typedef struct CSimpleArray<struct_CTraceSnapshot::CModuleInfo,class_ATL::CSimpleArrayEqualHelper<struct_CTraceSnapshot::CModuleInfo>_> CSimpleArray<struct_CTraceSnapshot::CModuleInfo,class_ATL::CSimpleArrayEqualHelper<struct_CTraceSnapshot::CModuleInfo>_>, *PCSimpleArray<struct_CTraceSnapshot::CModuleInfo,class_ATL::CSimpleArrayEqualHelper<struct_CTraceSnapshot::CModuleInfo>_>;

struct CSimpleArray<struct_CTraceSnapshot::CModuleInfo,class_ATL::CSimpleArrayEqualHelper<struct_CTraceSnapshot::CModuleInfo>_> { // PlaceHolder Structure
};

typedef struct COleDateTime COleDateTime, *PCOleDateTime;

struct COleDateTime { // PlaceHolder Structure
};

typedef struct _NoAddRefReleaseOnCComPtr<struct_IRowset> _NoAddRefReleaseOnCComPtr<struct_IRowset>, *P_NoAddRefReleaseOnCComPtr<struct_IRowset>;

struct _NoAddRefReleaseOnCComPtr<struct_IRowset> { // PlaceHolder Structure
};

typedef struct CComCriticalSection CComCriticalSection, *PCComCriticalSection;

struct CComCriticalSection { // PlaceHolder Structure
};

typedef struct CComPtrBase<struct_IAccessor> CComPtrBase<struct_IAccessor>, *PCComPtrBase<struct_IAccessor>;

struct CComPtrBase<struct_IAccessor> { // PlaceHolder Structure
};

typedef struct CCRTHeap CCRTHeap, *PCCRTHeap;

struct CCRTHeap { // PlaceHolder Structure
};

typedef struct _NoAddRefReleaseOnCComPtr<struct_IChapteredRowset> _NoAddRefReleaseOnCComPtr<struct_IChapteredRowset>, *P_NoAddRefReleaseOnCComPtr<struct_IChapteredRowset>;

struct _NoAddRefReleaseOnCComPtr<struct_IChapteredRowset> { // PlaceHolder Structure
};

typedef struct CComPtrBase<struct_IXMLDOMDocument2> CComPtrBase<struct_IXMLDOMDocument2>, *PCComPtrBase<struct_IXMLDOMDocument2>;

struct CComPtrBase<struct_IXMLDOMDocument2> { // PlaceHolder Structure
};

typedef struct CComPtr<struct_IRowset> CComPtr<struct_IRowset>, *PCComPtr<struct_IRowset>;

struct CComPtr<struct_IRowset> { // PlaceHolder Structure
};

typedef struct CFileTimeSpan CFileTimeSpan, *PCFileTimeSpan;

struct CFileTimeSpan { // PlaceHolder Structure
};

typedef struct CComPtrBase<struct_IOleLink> CComPtrBase<struct_IOleLink>, *PCComPtrBase<struct_IOleLink>;

struct CComPtrBase<struct_IOleLink> { // PlaceHolder Structure
};

typedef struct CComPtrBase<struct_IXMLDOMDocument> CComPtrBase<struct_IXMLDOMDocument>, *PCComPtrBase<struct_IXMLDOMDocument>;

struct CComPtrBase<struct_IXMLDOMDocument> { // PlaceHolder Structure
};

typedef struct CComPtrBase<struct_IRowsetInfo> CComPtrBase<struct_IRowsetInfo>, *PCComPtrBase<struct_IRowsetInfo>;

struct CComPtrBase<struct_IRowsetInfo> { // PlaceHolder Structure
};

typedef struct CTrace CTrace, *PCTrace;

struct CTrace { // PlaceHolder Structure
};

typedef struct CTraceCategory CTraceCategory, *PCTraceCategory;

struct CTraceCategory { // PlaceHolder Structure
};

typedef enum DateTimeStatus {
} DateTimeStatus;

typedef enum DateTimeSpanStatus {
} DateTimeSpanStatus;

typedef struct Wrapper Wrapper, *PWrapper;

struct Wrapper { // PlaceHolder Structure
};

typedef struct CAtlSafeAllocBufferManager<class_ATL::CCRTAllocator> CAtlSafeAllocBufferManager<class_ATL::CCRTAllocator>, *PCAtlSafeAllocBufferManager<class_ATL::CCRTAllocator>;

struct CAtlSafeAllocBufferManager<class_ATL::CCRTAllocator> { // PlaceHolder Structure
};

typedef struct CAtlSafeAllocBufferNode CAtlSafeAllocBufferNode, *PCAtlSafeAllocBufferNode;

struct CAtlSafeAllocBufferNode { // PlaceHolder Structure
};

typedef struct stringdispid stringdispid, *Pstringdispid;

struct stringdispid { // PlaceHolder Structure
};

typedef struct CDCCache CDCCache, *PCDCCache;

struct CDCCache { // PlaceHolder Structure
};

typedef enum DIBOrientation {
} DIBOrientation;

typedef struct CInitGDIPlus CInitGDIPlus, *PCInitGDIPlus;

struct CInitGDIPlus { // PlaceHolder Structure
};

typedef struct CMFCRibbonContextCategory CMFCRibbonContextCategory, *PCMFCRibbonContextCategory;

struct CMFCRibbonContextCategory { // PlaceHolder Structure
};

typedef enum ImageAlignHorz {
} ImageAlignHorz;

typedef enum ImageAlignVert {
} ImageAlignVert;

typedef struct GetSaveFileNameA_Type GetSaveFileNameA_Type, *PGetSaveFileNameA_Type;

struct GetSaveFileNameA_Type { // PlaceHolder Structure
};

typedef struct PrintDlgA_Type PrintDlgA_Type, *PPrintDlgA_Type;

struct PrintDlgA_Type { // PlaceHolder Structure
};

typedef struct ReplaceTextA_Type ReplaceTextA_Type, *PReplaceTextA_Type;

struct ReplaceTextA_Type { // PlaceHolder Structure
};

typedef struct FindTextA_Type FindTextA_Type, *PFindTextA_Type;

struct FindTextA_Type { // PlaceHolder Structure
};

typedef struct ChooseFontA_Type ChooseFontA_Type, *PChooseFontA_Type;

struct ChooseFontA_Type { // PlaceHolder Structure
};

typedef struct PageSetupDlgA_Type PageSetupDlgA_Type, *PPageSetupDlgA_Type;

struct PageSetupDlgA_Type { // PlaceHolder Structure
};

typedef struct GetOpenFileNameA_Type GetOpenFileNameA_Type, *PGetOpenFileNameA_Type;

struct GetOpenFileNameA_Type { // PlaceHolder Structure
};

typedef struct ChooseColorA_Type ChooseColorA_Type, *PChooseColorA_Type;

struct ChooseColorA_Type { // PlaceHolder Structure
};

typedef struct CommDlgExtendedError_Type CommDlgExtendedError_Type, *PCommDlgExtendedError_Type;

struct CommDlgExtendedError_Type { // PlaceHolder Structure
};

typedef enum AFX_BUTTON_STATE {
} AFX_BUTTON_STATE;

typedef struct ImageList_SetBkColor_Type ImageList_SetBkColor_Type, *PImageList_SetBkColor_Type;

struct ImageList_SetBkColor_Type { // PlaceHolder Structure
};

typedef struct ImageList_DragMove_Type ImageList_DragMove_Type, *PImageList_DragMove_Type;

struct ImageList_DragMove_Type { // PlaceHolder Structure
};

typedef struct MakeDragList_Type MakeDragList_Type, *PMakeDragList_Type;

struct MakeDragList_Type { // PlaceHolder Structure
};

typedef struct CreatePropertySheetPageA_Type CreatePropertySheetPageA_Type, *PCreatePropertySheetPageA_Type;

struct CreatePropertySheetPageA_Type { // PlaceHolder Structure
};

typedef struct ImageList_ReplaceIcon_Type ImageList_ReplaceIcon_Type, *PImageList_ReplaceIcon_Type;

struct ImageList_ReplaceIcon_Type { // PlaceHolder Structure
};

typedef struct ImageList_Add_Type ImageList_Add_Type, *PImageList_Add_Type;

struct ImageList_Add_Type { // PlaceHolder Structure
};

typedef struct ImageList_GetImageInfo_Type ImageList_GetImageInfo_Type, *PImageList_GetImageInfo_Type;

struct ImageList_GetImageInfo_Type { // PlaceHolder Structure
};

typedef struct ImageList_SetImageCount_Type ImageList_SetImageCount_Type, *PImageList_SetImageCount_Type;

struct ImageList_SetImageCount_Type { // PlaceHolder Structure
};

typedef struct ImageList_Create_Type ImageList_Create_Type, *PImageList_Create_Type;

struct ImageList_Create_Type { // PlaceHolder Structure
};

typedef struct ImageList_SetDragCursorImage_Type ImageList_SetDragCursorImage_Type, *PImageList_SetDragCursorImage_Type;

struct ImageList_SetDragCursorImage_Type { // PlaceHolder Structure
};

typedef struct ImageList_DragEnter_Type ImageList_DragEnter_Type, *PImageList_DragEnter_Type;

struct ImageList_DragEnter_Type { // PlaceHolder Structure
};

typedef struct ImageList_GetDragImage_Type ImageList_GetDragImage_Type, *PImageList_GetDragImage_Type;

struct ImageList_GetDragImage_Type { // PlaceHolder Structure
};

typedef struct ImageList_Remove_Type ImageList_Remove_Type, *PImageList_Remove_Type;

struct ImageList_Remove_Type { // PlaceHolder Structure
};

typedef struct ImageList_DragLeave_Type ImageList_DragLeave_Type, *PImageList_DragLeave_Type;

struct ImageList_DragLeave_Type { // PlaceHolder Structure
};

typedef struct ImageList_Draw_Type ImageList_Draw_Type, *PImageList_Draw_Type;

struct ImageList_Draw_Type { // PlaceHolder Structure
};

typedef struct ImageList_SetOverlayImage_Type ImageList_SetOverlayImage_Type, *PImageList_SetOverlayImage_Type;

struct ImageList_SetOverlayImage_Type { // PlaceHolder Structure
};

typedef struct DestroyPropertySheetPage_Type DestroyPropertySheetPage_Type, *PDestroyPropertySheetPage_Type;

struct DestroyPropertySheetPage_Type { // PlaceHolder Structure
};

typedef struct ImageList_GetIcon_Type ImageList_GetIcon_Type, *PImageList_GetIcon_Type;

struct ImageList_GetIcon_Type { // PlaceHolder Structure
};

typedef struct LBItemFromPt_Type LBItemFromPt_Type, *PLBItemFromPt_Type;

struct LBItemFromPt_Type { // PlaceHolder Structure
};

typedef struct ImageList_AddMasked_Type ImageList_AddMasked_Type, *PImageList_AddMasked_Type;

struct ImageList_AddMasked_Type { // PlaceHolder Structure
};

typedef struct ImageList_Copy_Type ImageList_Copy_Type, *PImageList_Copy_Type;

struct ImageList_Copy_Type { // PlaceHolder Structure
};

typedef struct PropertySheetA_Type PropertySheetA_Type, *PPropertySheetA_Type;

struct PropertySheetA_Type { // PlaceHolder Structure
};

typedef struct ImageList_Merge_Type ImageList_Merge_Type, *PImageList_Merge_Type;

struct ImageList_Merge_Type { // PlaceHolder Structure
};

typedef struct ImageList_DrawEx_Type ImageList_DrawEx_Type, *PImageList_DrawEx_Type;

struct ImageList_DrawEx_Type { // PlaceHolder Structure
};

typedef struct InitCommonControls_Type InitCommonControls_Type, *PInitCommonControls_Type;

struct InitCommonControls_Type { // PlaceHolder Structure
};

typedef struct ImageList_EndDrag_Type ImageList_EndDrag_Type, *PImageList_EndDrag_Type;

struct ImageList_EndDrag_Type { // PlaceHolder Structure
};

typedef struct CreateMappedBitmap_Type CreateMappedBitmap_Type, *PCreateMappedBitmap_Type;

struct CreateMappedBitmap_Type { // PlaceHolder Structure
};

typedef struct ImageList_Read_Type ImageList_Read_Type, *PImageList_Read_Type;

struct ImageList_Read_Type { // PlaceHolder Structure
};

typedef struct ImageList_Duplicate_Type ImageList_Duplicate_Type, *PImageList_Duplicate_Type;

struct ImageList_Duplicate_Type { // PlaceHolder Structure
};

typedef struct ImageList_BeginDrag_Type ImageList_BeginDrag_Type, *PImageList_BeginDrag_Type;

struct ImageList_BeginDrag_Type { // PlaceHolder Structure
};

typedef struct ImageList_Write_Type ImageList_Write_Type, *PImageList_Write_Type;

struct ImageList_Write_Type { // PlaceHolder Structure
};

typedef struct ImageList_GetImageCount_Type ImageList_GetImageCount_Type, *PImageList_GetImageCount_Type;

struct ImageList_GetImageCount_Type { // PlaceHolder Structure
};

typedef struct ImageList_Replace_Type ImageList_Replace_Type, *PImageList_Replace_Type;

struct ImageList_Replace_Type { // PlaceHolder Structure
};

typedef struct InitCommonControlsEx_Type InitCommonControlsEx_Type, *PInitCommonControlsEx_Type;

struct InitCommonControlsEx_Type { // PlaceHolder Structure
};

typedef struct ImageList_LoadImageA_Type ImageList_LoadImageA_Type, *PImageList_LoadImageA_Type;

struct ImageList_LoadImageA_Type { // PlaceHolder Structure
};

typedef struct ImageList_DragShowNolock_Type ImageList_DragShowNolock_Type, *PImageList_DragShowNolock_Type;

struct ImageList_DragShowNolock_Type { // PlaceHolder Structure
};

typedef enum WinXpTheme {
} WinXpTheme;

typedef enum BackgroundLocation {
} BackgroundLocation;

typedef enum PropSheetLook {
} PropSheetLook;

typedef struct CModuleInfo CModuleInfo, *PCModuleInfo;

struct CModuleInfo { // PlaceHolder Structure
};

typedef enum ClickArea {
} ClickArea;

typedef struct PAGE_INFO PAGE_INFO, *PPAGE_INFO;

struct PAGE_INFO { // PlaceHolder Structure
};

typedef struct XRibbonBar XRibbonBar, *PXRibbonBar;

struct XRibbonBar { // PlaceHolder Structure
};

typedef struct XImage XImage, *PXImage;

struct XImage { // PlaceHolder Structure
};

typedef struct XElement XElement, *PXElement;

struct XElement { // PlaceHolder Structure
};

typedef struct XPanel XPanel, *PXPanel;

struct XPanel { // PlaceHolder Structure
};

typedef struct XContext XContext, *PXContext;

struct XContext { // PlaceHolder Structure
};

typedef struct XCategoryMain XCategoryMain, *PXCategoryMain;

struct XCategoryMain { // PlaceHolder Structure
};

typedef enum XImages {
} XImages;

typedef struct XCategory XCategory, *PXCategory;

struct XCategory { // PlaceHolder Structure
};

typedef struct XRibbonInfoParser XRibbonInfoParser, *PXRibbonInfoParser;

struct XRibbonInfoParser { // PlaceHolder Structure
};

typedef struct XInfoError XInfoError, *PXInfoError;

struct XInfoError { // PlaceHolder Structure
};

typedef struct XID XID, *PXID;

struct XID { // PlaceHolder Structure
};

typedef enum XElementType {
} XElementType;

typedef struct XGalleryGroup XGalleryGroup, *PXGalleryGroup;

struct XGalleryGroup { // PlaceHolder Structure
};

typedef struct XQATItem XQATItem, *PXQATItem;

struct XQATItem { // PlaceHolder Structure
};

typedef struct InitNetworkAddressControl_Type InitNetworkAddressControl_Type, *PInitNetworkAddressControl_Type;

struct InitNetworkAddressControl_Type { // PlaceHolder Structure
};

typedef enum Style {
} Style;

typedef enum ResizeMode {
} ResizeMode;

typedef struct CPair CPair, *PCPair;

struct CPair { // PlaceHolder Structure
};

typedef struct BitmapData BitmapData, *PBitmapData;

struct BitmapData { // PlaceHolder Structure
};

typedef enum InterpolationMode {
} InterpolationMode;

typedef struct Image Image, *PImage;

struct Image { // PlaceHolder Structure
};

typedef enum DebugEventLevel {
} DebugEventLevel;

typedef struct ColorPalette ColorPalette, *PColorPalette;

struct ColorPalette { // PlaceHolder Structure
};

typedef struct GpGraphics GpGraphics, *PGpGraphics;

struct GpGraphics { // PlaceHolder Structure
};

typedef enum Status {
} Status;

typedef struct GpImage GpImage, *PGpImage;

struct GpImage { // PlaceHolder Structure
};

typedef struct Rect Rect, *PRect;

struct Rect { // PlaceHolder Structure
};

typedef struct Graphics Graphics, *PGraphics;

struct Graphics { // PlaceHolder Structure
};

typedef struct GdiplusStartupInput GdiplusStartupInput, *PGdiplusStartupInput;

struct GdiplusStartupInput { // PlaceHolder Structure
};

typedef enum COLORTYPE {
} COLORTYPE;

typedef enum IMAGES_IDS {
} IMAGES_IDS;

typedef enum IMAGE_STATE {
} IMAGE_STATE;

typedef struct CMemoryDC CMemoryDC, *PCMemoryDC;

struct CMemoryDC { // PlaceHolder Structure
};

typedef struct _PRINTER_DEFAULTSA _PRINTER_DEFAULTSA, *P_PRINTER_DEFAULTSA;

typedef struct _PRINTER_DEFAULTSA *LPPRINTER_DEFAULTSA;

typedef char CHAR;

typedef CHAR *LPSTR;

typedef struct _devicemodeA _devicemodeA, *P_devicemodeA;

typedef struct _devicemodeA *LPDEVMODEA;

typedef DWORD ACCESS_MASK;

typedef uchar BYTE;

typedef union _union_655 _union_655, *P_union_655;

typedef union _union_658 _union_658, *P_union_658;

typedef struct _struct_656 _struct_656, *P_struct_656;

typedef struct _struct_657 _struct_657, *P_struct_657;

typedef struct _POINTL _POINTL, *P_POINTL;

typedef struct _POINTL POINTL;

struct _struct_656 {
    short dmOrientation;
    short dmPaperSize;
    short dmPaperLength;
    short dmPaperWidth;
    short dmScale;
    short dmCopies;
    short dmDefaultSource;
    short dmPrintQuality;
};

struct _POINTL {
    LONG x;
    LONG y;
};

struct _struct_657 {
    POINTL dmPosition;
    DWORD dmDisplayOrientation;
    DWORD dmDisplayFixedOutput;
};

union _union_655 {
    struct _struct_656 field0;
    struct _struct_657 field1;
};

union _union_658 {
    DWORD dmDisplayFlags;
    DWORD dmNup;
};

struct _devicemodeA {
    BYTE dmDeviceName[32];
    WORD dmSpecVersion;
    WORD dmDriverVersion;
    WORD dmSize;
    WORD dmDriverExtra;
    DWORD dmFields;
    union _union_655 field6_0x2c;
    short dmColor;
    short dmDuplex;
    short dmYResolution;
    short dmTTOption;
    short dmCollate;
    BYTE dmFormName[32];
    WORD dmLogPixels;
    DWORD dmBitsPerPel;
    DWORD dmPelsWidth;
    DWORD dmPelsHeight;
    union _union_658 field17_0x74;
    DWORD dmDisplayFrequency;
    DWORD dmICMMethod;
    DWORD dmICMIntent;
    DWORD dmMediaType;
    DWORD dmDitherType;
    DWORD dmReserved1;
    DWORD dmReserved2;
    DWORD dmPanningWidth;
    DWORD dmPanningHeight;
};

struct _PRINTER_DEFAULTSA {
    LPSTR pDatatype;
    LPDEVMODEA pDevMode;
    ACCESS_MASK DesiredAccess;
};

typedef DWORD SHCONTF;

typedef struct IEnumIDList IEnumIDList, *PIEnumIDList;

typedef struct IEnumIDListVtbl IEnumIDListVtbl, *PIEnumIDListVtbl;

typedef long HRESULT;


// WARNING! conflicting data type names: /guiddef.h/GUID - /GUID

typedef GUID IID;

typedef struct _ITEMIDLIST _ITEMIDLIST, *P_ITEMIDLIST;

typedef struct _ITEMIDLIST ITEMIDLIST;

typedef ITEMIDLIST *LPITEMIDLIST;

typedef struct _SHITEMID _SHITEMID, *P_SHITEMID;

typedef struct _SHITEMID SHITEMID;

typedef ushort USHORT;

struct _SHITEMID {
    USHORT cb;
    BYTE abID[1];
};

struct _ITEMIDLIST {
    SHITEMID mkid;
};

struct IEnumIDList {
    struct IEnumIDListVtbl *lpVtbl;
};

struct IEnumIDListVtbl {
    HRESULT (*QueryInterface)(struct IEnumIDList *, IID *, void **);
    ULONG (*AddRef)(struct IEnumIDList *);
    ULONG (*Release)(struct IEnumIDList *);
    HRESULT (*Next)(struct IEnumIDList *, ULONG, LPITEMIDLIST *, ULONG *);
    HRESULT (*Skip)(struct IEnumIDList *, ULONG);
    HRESULT (*Reset)(struct IEnumIDList *);
    HRESULT (*Clone)(struct IEnumIDList *, struct IEnumIDList **);
};

typedef DWORD SHGDNF;

typedef ULONG SFGAOF;

typedef struct IShellFolder IShellFolder, *PIShellFolder;

typedef struct IShellFolderVtbl IShellFolderVtbl, *PIShellFolderVtbl;

typedef struct HWND__ HWND__, *PHWND__;

typedef struct HWND__ *HWND;

typedef struct IBindCtx IBindCtx, *PIBindCtx;

typedef WCHAR *LPWSTR;

typedef ITEMIDLIST *LPCITEMIDLIST;

typedef long LONG_PTR;

typedef LONG_PTR LPARAM;

typedef struct _STRRET _STRRET, *P_STRRET;

typedef struct _STRRET STRRET;

typedef WCHAR *LPCWSTR;

typedef struct IBindCtxVtbl IBindCtxVtbl, *PIBindCtxVtbl;

typedef struct IUnknown IUnknown, *PIUnknown;

typedef struct tagBIND_OPTS tagBIND_OPTS, *PtagBIND_OPTS;

typedef struct tagBIND_OPTS BIND_OPTS;

typedef struct IRunningObjectTable IRunningObjectTable, *PIRunningObjectTable;

typedef struct IEnumString IEnumString, *PIEnumString;

typedef union _union_3888 _union_3888, *P_union_3888;

typedef struct IUnknownVtbl IUnknownVtbl, *PIUnknownVtbl;

typedef struct IRunningObjectTableVtbl IRunningObjectTableVtbl, *PIRunningObjectTableVtbl;

typedef struct IMoniker IMoniker, *PIMoniker;

typedef struct _FILETIME _FILETIME, *P_FILETIME;

typedef struct _FILETIME FILETIME;

typedef struct IEnumMoniker IEnumMoniker, *PIEnumMoniker;

typedef struct IEnumStringVtbl IEnumStringVtbl, *PIEnumStringVtbl;

typedef struct IMonikerVtbl IMonikerVtbl, *PIMonikerVtbl;

typedef GUID CLSID;

typedef struct IStream IStream, *PIStream;

typedef union _ULARGE_INTEGER _ULARGE_INTEGER, *P_ULARGE_INTEGER;

typedef union _ULARGE_INTEGER ULARGE_INTEGER;

typedef struct IEnumMonikerVtbl IEnumMonikerVtbl, *PIEnumMonikerVtbl;

typedef struct IStreamVtbl IStreamVtbl, *PIStreamVtbl;

typedef union _LARGE_INTEGER _LARGE_INTEGER, *P_LARGE_INTEGER;

typedef union _LARGE_INTEGER LARGE_INTEGER;

typedef struct tagSTATSTG tagSTATSTG, *PtagSTATSTG;

typedef struct tagSTATSTG STATSTG;

typedef struct _struct_22 _struct_22, *P_struct_22;

typedef struct _struct_23 _struct_23, *P_struct_23;

typedef double ULONGLONG;

typedef struct _struct_19 _struct_19, *P_struct_19;

typedef struct _struct_20 _struct_20, *P_struct_20;

typedef double LONGLONG;

struct IStreamVtbl {
    HRESULT (*QueryInterface)(struct IStream *, IID *, void **);
    ULONG (*AddRef)(struct IStream *);
    ULONG (*Release)(struct IStream *);
    HRESULT (*Read)(struct IStream *, void *, ULONG, ULONG *);
    HRESULT (*Write)(struct IStream *, void *, ULONG, ULONG *);
    HRESULT (*Seek)(struct IStream *, LARGE_INTEGER, DWORD, ULARGE_INTEGER *);
    HRESULT (*SetSize)(struct IStream *, ULARGE_INTEGER);
    HRESULT (*CopyTo)(struct IStream *, struct IStream *, ULARGE_INTEGER, ULARGE_INTEGER *, ULARGE_INTEGER *);
    HRESULT (*Commit)(struct IStream *, DWORD);
    HRESULT (*Revert)(struct IStream *);
    HRESULT (*LockRegion)(struct IStream *, ULARGE_INTEGER, ULARGE_INTEGER, DWORD);
    HRESULT (*UnlockRegion)(struct IStream *, ULARGE_INTEGER, ULARGE_INTEGER, DWORD);
    HRESULT (*Stat)(struct IStream *, STATSTG *, DWORD);
    HRESULT (*Clone)(struct IStream *, struct IStream **);
};

struct IEnumStringVtbl {
    HRESULT (*QueryInterface)(struct IEnumString *, IID *, void **);
    ULONG (*AddRef)(struct IEnumString *);
    ULONG (*Release)(struct IEnumString *);
    HRESULT (*Next)(struct IEnumString *, ULONG, LPOLESTR *, ULONG *);
    HRESULT (*Skip)(struct IEnumString *, ULONG);
    HRESULT (*Reset)(struct IEnumString *);
    HRESULT (*Clone)(struct IEnumString *, struct IEnumString **);
};

struct IStream {
    struct IStreamVtbl *lpVtbl;
};

struct _struct_20 {
    DWORD LowPart;
    LONG HighPart;
};

struct _struct_19 {
    DWORD LowPart;
    LONG HighPart;
};

union _LARGE_INTEGER {
    struct _struct_19 s;
    struct _struct_20 u;
    LONGLONG QuadPart;
};

struct IMoniker {
    struct IMonikerVtbl *lpVtbl;
};

struct IEnumString {
    struct IEnumStringVtbl *lpVtbl;
};

struct IEnumMonikerVtbl {
    HRESULT (*QueryInterface)(struct IEnumMoniker *, IID *, void **);
    ULONG (*AddRef)(struct IEnumMoniker *);
    ULONG (*Release)(struct IEnumMoniker *);
    HRESULT (*Next)(struct IEnumMoniker *, ULONG, struct IMoniker **, ULONG *);
    HRESULT (*Skip)(struct IEnumMoniker *, ULONG);
    HRESULT (*Reset)(struct IEnumMoniker *);
    HRESULT (*Clone)(struct IEnumMoniker *, struct IEnumMoniker **);
};

struct tagBIND_OPTS {
    DWORD cbStruct;
    DWORD grfFlags;
    DWORD grfMode;
    DWORD dwTickCountDeadline;
};

struct _struct_22 {
    DWORD LowPart;
    DWORD HighPart;
};

struct _struct_23 {
    DWORD LowPart;
    DWORD HighPart;
};

union _ULARGE_INTEGER {
    struct _struct_22 s;
    struct _struct_23 u;
    ULONGLONG QuadPart;
};

struct IBindCtx {
    struct IBindCtxVtbl *lpVtbl;
};

struct IBindCtxVtbl {
    HRESULT (*QueryInterface)(struct IBindCtx *, IID *, void **);
    ULONG (*AddRef)(struct IBindCtx *);
    ULONG (*Release)(struct IBindCtx *);
    HRESULT (*RegisterObjectBound)(struct IBindCtx *, struct IUnknown *);
    HRESULT (*RevokeObjectBound)(struct IBindCtx *, struct IUnknown *);
    HRESULT (*ReleaseBoundObjects)(struct IBindCtx *);
    HRESULT (*SetBindOptions)(struct IBindCtx *, BIND_OPTS *);
    HRESULT (*GetBindOptions)(struct IBindCtx *, BIND_OPTS *);
    HRESULT (*GetRunningObjectTable)(struct IBindCtx *, struct IRunningObjectTable **);
    HRESULT (*RegisterObjectParam)(struct IBindCtx *, LPOLESTR, struct IUnknown *);
    HRESULT (*GetObjectParam)(struct IBindCtx *, LPOLESTR, struct IUnknown **);
    HRESULT (*EnumObjectParam)(struct IBindCtx *, struct IEnumString **);
    HRESULT (*RevokeObjectParam)(struct IBindCtx *, LPOLESTR);
};

struct IRunningObjectTableVtbl {
    HRESULT (*QueryInterface)(struct IRunningObjectTable *, IID *, void **);
    ULONG (*AddRef)(struct IRunningObjectTable *);
    ULONG (*Release)(struct IRunningObjectTable *);
    HRESULT (*Register)(struct IRunningObjectTable *, DWORD, struct IUnknown *, struct IMoniker *, DWORD *);
    HRESULT (*Revoke)(struct IRunningObjectTable *, DWORD);
    HRESULT (*IsRunning)(struct IRunningObjectTable *, struct IMoniker *);
    HRESULT (*GetObjectA)(struct IRunningObjectTable *, struct IMoniker *, struct IUnknown **);
    HRESULT (*NoteChangeTime)(struct IRunningObjectTable *, DWORD, FILETIME *);
    HRESULT (*GetTimeOfLastChange)(struct IRunningObjectTable *, struct IMoniker *, FILETIME *);
    HRESULT (*EnumRunning)(struct IRunningObjectTable *, struct IEnumMoniker **);
};

struct _FILETIME {
    DWORD dwLowDateTime;
    DWORD dwHighDateTime;
};

struct tagSTATSTG {
    LPOLESTR pwcsName;
    DWORD type;
    ULARGE_INTEGER cbSize;
    FILETIME mtime;
    FILETIME ctime;
    FILETIME atime;
    DWORD grfMode;
    DWORD grfLocksSupported;
    CLSID clsid;
    DWORD grfStateBits;
    DWORD reserved;
};

struct IMonikerVtbl {
    HRESULT (*QueryInterface)(struct IMoniker *, IID *, void **);
    ULONG (*AddRef)(struct IMoniker *);
    ULONG (*Release)(struct IMoniker *);
    HRESULT (*GetClassID)(struct IMoniker *, CLSID *);
    HRESULT (*IsDirty)(struct IMoniker *);
    HRESULT (*Load)(struct IMoniker *, struct IStream *);
    HRESULT (*Save)(struct IMoniker *, struct IStream *, BOOL);
    HRESULT (*GetSizeMax)(struct IMoniker *, ULARGE_INTEGER *);
    HRESULT (*BindToObject)(struct IMoniker *, struct IBindCtx *, struct IMoniker *, IID *, void **);
    HRESULT (*BindToStorage)(struct IMoniker *, struct IBindCtx *, struct IMoniker *, IID *, void **);
    HRESULT (*Reduce)(struct IMoniker *, struct IBindCtx *, DWORD, struct IMoniker **, struct IMoniker **);
    HRESULT (*ComposeWith)(struct IMoniker *, struct IMoniker *, BOOL, struct IMoniker **);
    HRESULT (*Enum)(struct IMoniker *, BOOL, struct IEnumMoniker **);
    HRESULT (*IsEqual)(struct IMoniker *, struct IMoniker *);
    HRESULT (*Hash)(struct IMoniker *, DWORD *);
    HRESULT (*IsRunning)(struct IMoniker *, struct IBindCtx *, struct IMoniker *, struct IMoniker *);
    HRESULT (*GetTimeOfLastChange)(struct IMoniker *, struct IBindCtx *, struct IMoniker *, FILETIME *);
    HRESULT (*Inverse)(struct IMoniker *, struct IMoniker **);
    HRESULT (*CommonPrefixWith)(struct IMoniker *, struct IMoniker *, struct IMoniker **);
    HRESULT (*RelativePathTo)(struct IMoniker *, struct IMoniker *, struct IMoniker **);
    HRESULT (*GetDisplayName)(struct IMoniker *, struct IBindCtx *, struct IMoniker *, LPOLESTR *);
    HRESULT (*ParseDisplayName)(struct IMoniker *, struct IBindCtx *, struct IMoniker *, LPOLESTR, ULONG *, struct IMoniker **);
    HRESULT (*IsSystemMoniker)(struct IMoniker *, DWORD *);
};

struct HWND__ {
    int unused;
};

struct IShellFolder {
    struct IShellFolderVtbl *lpVtbl;
};

struct IShellFolderVtbl {
    HRESULT (*QueryInterface)(struct IShellFolder *, IID *, void **);
    ULONG (*AddRef)(struct IShellFolder *);
    ULONG (*Release)(struct IShellFolder *);
    HRESULT (*ParseDisplayName)(struct IShellFolder *, HWND, struct IBindCtx *, LPWSTR, ULONG *, LPITEMIDLIST *, ULONG *);
    HRESULT (*EnumObjects)(struct IShellFolder *, HWND, SHCONTF, struct IEnumIDList **);
    HRESULT (*BindToObject)(struct IShellFolder *, LPCITEMIDLIST, struct IBindCtx *, IID *, void **);
    HRESULT (*BindToStorage)(struct IShellFolder *, LPCITEMIDLIST, struct IBindCtx *, IID *, void **);
    HRESULT (*CompareIDs)(struct IShellFolder *, LPARAM, LPCITEMIDLIST, LPCITEMIDLIST);
    HRESULT (*CreateViewObject)(struct IShellFolder *, HWND, IID *, void **);
    HRESULT (*GetAttributesOf)(struct IShellFolder *, UINT, LPCITEMIDLIST *, SFGAOF *);
    HRESULT (*GetUIObjectOf)(struct IShellFolder *, HWND, UINT, LPCITEMIDLIST *, IID *, UINT *, void **);
    HRESULT (*GetDisplayNameOf)(struct IShellFolder *, LPCITEMIDLIST, SHGDNF, STRRET *);
    HRESULT (*SetNameOf)(struct IShellFolder *, HWND, LPCITEMIDLIST, LPCWSTR, SHGDNF, LPITEMIDLIST *);
};

struct IRunningObjectTable {
    struct IRunningObjectTableVtbl *lpVtbl;
};

struct IUnknownVtbl {
    HRESULT (*QueryInterface)(struct IUnknown *, IID *, void **);
    ULONG (*AddRef)(struct IUnknown *);
    ULONG (*Release)(struct IUnknown *);
};

struct IUnknown {
    struct IUnknownVtbl *lpVtbl;
};

union _union_3888 {
    LPWSTR pOleStr;
    UINT uOffset;
    char cStr[260];
};

struct _STRRET {
    UINT uType;
    union _union_3888 u;
};

struct IEnumMoniker {
    struct IEnumMonikerVtbl *lpVtbl;
};

typedef HANDLE HTHEME;

typedef struct IAdviseSink IAdviseSink, *PIAdviseSink;

typedef struct IAdviseSinkVtbl IAdviseSinkVtbl, *PIAdviseSinkVtbl;

typedef struct tagFORMATETC tagFORMATETC, *PtagFORMATETC;

typedef struct tagFORMATETC FORMATETC;

typedef struct tagSTGMEDIUM tagSTGMEDIUM, *PtagSTGMEDIUM;

typedef struct tagSTGMEDIUM uSTGMEDIUM;

typedef uSTGMEDIUM STGMEDIUM;

typedef struct tagDVTARGETDEVICE tagDVTARGETDEVICE, *PtagDVTARGETDEVICE;

typedef struct tagDVTARGETDEVICE DVTARGETDEVICE;

typedef union _union_2260 _union_2260, *P_union_2260;

typedef struct HBITMAP__ HBITMAP__, *PHBITMAP__;

typedef struct HBITMAP__ *HBITMAP;

typedef struct HENHMETAFILE__ HENHMETAFILE__, *PHENHMETAFILE__;

typedef struct HENHMETAFILE__ *HENHMETAFILE;

typedef HANDLE HGLOBAL;

typedef struct IStorage IStorage, *PIStorage;

typedef struct IStorageVtbl IStorageVtbl, *PIStorageVtbl;

typedef LPOLESTR *SNB;

typedef struct IEnumSTATSTG IEnumSTATSTG, *PIEnumSTATSTG;

typedef struct IEnumSTATSTGVtbl IEnumSTATSTGVtbl, *PIEnumSTATSTGVtbl;

struct IAdviseSink {
    struct IAdviseSinkVtbl *lpVtbl;
};

struct IAdviseSinkVtbl {
    HRESULT (*QueryInterface)(struct IAdviseSink *, IID *, void **);
    ULONG (*AddRef)(struct IAdviseSink *);
    ULONG (*Release)(struct IAdviseSink *);
    void (*OnDataChange)(struct IAdviseSink *, FORMATETC *, STGMEDIUM *);
    void (*OnViewChange)(struct IAdviseSink *, DWORD, LONG);
    void (*OnRename)(struct IAdviseSink *, struct IMoniker *);
    void (*OnSave)(struct IAdviseSink *);
    void (*OnClose)(struct IAdviseSink *);
};

union _union_2260 {
    HBITMAP hBitmap;
    HMETAFILEPICT hMetaFilePict;
    HENHMETAFILE hEnhMetaFile;
    HGLOBAL hGlobal;
    LPOLESTR lpszFileName;
    struct IStream *pstm;
    struct IStorage *pstg;
};

struct tagFORMATETC {
    CLIPFORMAT cfFormat;
    DVTARGETDEVICE *ptd;
    DWORD dwAspect;
    LONG lindex;
    DWORD tymed;
};

struct tagSTGMEDIUM {
    DWORD tymed;
    union _union_2260 u;
    struct IUnknown *pUnkForRelease;
};

struct tagDVTARGETDEVICE {
    DWORD tdSize;
    WORD tdDriverNameOffset;
    WORD tdDeviceNameOffset;
    WORD tdPortNameOffset;
    WORD tdExtDevmodeOffset;
    BYTE tdData[1];
};

struct IStorageVtbl {
    HRESULT (*QueryInterface)(struct IStorage *, IID *, void **);
    ULONG (*AddRef)(struct IStorage *);
    ULONG (*Release)(struct IStorage *);
    HRESULT (*CreateStream)(struct IStorage *, OLECHAR *, DWORD, DWORD, DWORD, struct IStream **);
    HRESULT (*OpenStream)(struct IStorage *, OLECHAR *, void *, DWORD, DWORD, struct IStream **);
    HRESULT (*CreateStorage)(struct IStorage *, OLECHAR *, DWORD, DWORD, DWORD, struct IStorage **);
    HRESULT (*OpenStorage)(struct IStorage *, OLECHAR *, struct IStorage *, DWORD, SNB, DWORD, struct IStorage **);
    HRESULT (*CopyTo)(struct IStorage *, DWORD, IID *, SNB, struct IStorage *);
    HRESULT (*MoveElementTo)(struct IStorage *, OLECHAR *, struct IStorage *, OLECHAR *, DWORD);
    HRESULT (*Commit)(struct IStorage *, DWORD);
    HRESULT (*Revert)(struct IStorage *);
    HRESULT (*EnumElements)(struct IStorage *, DWORD, void *, DWORD, struct IEnumSTATSTG **);
    HRESULT (*DestroyElement)(struct IStorage *, OLECHAR *);
    HRESULT (*RenameElement)(struct IStorage *, OLECHAR *, OLECHAR *);
    HRESULT (*SetElementTimes)(struct IStorage *, OLECHAR *, FILETIME *, FILETIME *, FILETIME *);
    HRESULT (*SetClass)(struct IStorage *, IID *);
    HRESULT (*SetStateBits)(struct IStorage *, DWORD, DWORD);
    HRESULT (*Stat)(struct IStorage *, STATSTG *, DWORD);
};

struct IStorage {
    struct IStorageVtbl *lpVtbl;
};

struct IEnumSTATSTGVtbl {
    HRESULT (*QueryInterface)(struct IEnumSTATSTG *, IID *, void **);
    ULONG (*AddRef)(struct IEnumSTATSTG *);
    ULONG (*Release)(struct IEnumSTATSTG *);
    HRESULT (*Next)(struct IEnumSTATSTG *, ULONG, STATSTG *, ULONG *);
    HRESULT (*Skip)(struct IEnumSTATSTG *, ULONG);
    HRESULT (*Reset)(struct IEnumSTATSTG *);
    HRESULT (*Clone)(struct IEnumSTATSTG *, struct IEnumSTATSTG **);
};

struct HBITMAP__ {
    int unused;
};

struct IEnumSTATSTG {
    struct IEnumSTATSTGVtbl *lpVtbl;
};

struct HENHMETAFILE__ {
    int unused;
};

typedef struct IMalloc IMalloc, *PIMalloc;

typedef struct IMallocVtbl IMallocVtbl, *PIMallocVtbl;

typedef ULONG_PTR SIZE_T;

struct IMalloc {
    struct IMallocVtbl *lpVtbl;
};

struct IMallocVtbl {
    HRESULT (*QueryInterface)(struct IMalloc *, IID *, void **);
    ULONG (*AddRef)(struct IMalloc *);
    ULONG (*Release)(struct IMalloc *);
    void * (*Alloc)(struct IMalloc *, SIZE_T);
    void * (*Realloc)(struct IMalloc *, void *, SIZE_T);
    void (*Free)(struct IMalloc *, void *);
    SIZE_T (*GetSize)(struct IMalloc *, void *);
    int (*DidAlloc)(struct IMalloc *, void *);
    void (*HeapMinimize)(struct IMalloc *);
};

typedef struct IDataAdviseHolder IDataAdviseHolder, *PIDataAdviseHolder;

typedef struct IDataAdviseHolderVtbl IDataAdviseHolderVtbl, *PIDataAdviseHolderVtbl;

typedef struct IDataObject IDataObject, *PIDataObject;

typedef struct IEnumSTATDATA IEnumSTATDATA, *PIEnumSTATDATA;

typedef struct IDataObjectVtbl IDataObjectVtbl, *PIDataObjectVtbl;

typedef struct IEnumFORMATETC IEnumFORMATETC, *PIEnumFORMATETC;

typedef struct IEnumSTATDATAVtbl IEnumSTATDATAVtbl, *PIEnumSTATDATAVtbl;

typedef struct tagSTATDATA tagSTATDATA, *PtagSTATDATA;

typedef struct tagSTATDATA STATDATA;

typedef struct IEnumFORMATETCVtbl IEnumFORMATETCVtbl, *PIEnumFORMATETCVtbl;

struct IEnumSTATDATA {
    struct IEnumSTATDATAVtbl *lpVtbl;
};

struct IEnumSTATDATAVtbl {
    HRESULT (*QueryInterface)(struct IEnumSTATDATA *, IID *, void **);
    ULONG (*AddRef)(struct IEnumSTATDATA *);
    ULONG (*Release)(struct IEnumSTATDATA *);
    HRESULT (*Next)(struct IEnumSTATDATA *, ULONG, STATDATA *, ULONG *);
    HRESULT (*Skip)(struct IEnumSTATDATA *, ULONG);
    HRESULT (*Reset)(struct IEnumSTATDATA *);
    HRESULT (*Clone)(struct IEnumSTATDATA *, struct IEnumSTATDATA **);
};

struct IDataAdviseHolder {
    struct IDataAdviseHolderVtbl *lpVtbl;
};

struct IEnumFORMATETCVtbl {
    HRESULT (*QueryInterface)(struct IEnumFORMATETC *, IID *, void **);
    ULONG (*AddRef)(struct IEnumFORMATETC *);
    ULONG (*Release)(struct IEnumFORMATETC *);
    HRESULT (*Next)(struct IEnumFORMATETC *, ULONG, FORMATETC *, ULONG *);
    HRESULT (*Skip)(struct IEnumFORMATETC *, ULONG);
    HRESULT (*Reset)(struct IEnumFORMATETC *);
    HRESULT (*Clone)(struct IEnumFORMATETC *, struct IEnumFORMATETC **);
};

struct IDataObject {
    struct IDataObjectVtbl *lpVtbl;
};

struct IDataAdviseHolderVtbl {
    HRESULT (*QueryInterface)(struct IDataAdviseHolder *, IID *, void **);
    ULONG (*AddRef)(struct IDataAdviseHolder *);
    ULONG (*Release)(struct IDataAdviseHolder *);
    HRESULT (*Advise)(struct IDataAdviseHolder *, struct IDataObject *, FORMATETC *, DWORD, struct IAdviseSink *, DWORD *);
    HRESULT (*Unadvise)(struct IDataAdviseHolder *, DWORD);
    HRESULT (*EnumAdvise)(struct IDataAdviseHolder *, struct IEnumSTATDATA **);
    HRESULT (*SendOnDataChange)(struct IDataAdviseHolder *, struct IDataObject *, DWORD, DWORD);
};

struct IDataObjectVtbl {
    HRESULT (*QueryInterface)(struct IDataObject *, IID *, void **);
    ULONG (*AddRef)(struct IDataObject *);
    ULONG (*Release)(struct IDataObject *);
    HRESULT (*GetData)(struct IDataObject *, FORMATETC *, STGMEDIUM *);
    HRESULT (*GetDataHere)(struct IDataObject *, FORMATETC *, STGMEDIUM *);
    HRESULT (*QueryGetData)(struct IDataObject *, FORMATETC *);
    HRESULT (*GetCanonicalFormatEtc)(struct IDataObject *, FORMATETC *, FORMATETC *);
    HRESULT (*SetData)(struct IDataObject *, FORMATETC *, STGMEDIUM *, BOOL);
    HRESULT (*EnumFormatEtc)(struct IDataObject *, DWORD, struct IEnumFORMATETC **);
    HRESULT (*DAdvise)(struct IDataObject *, FORMATETC *, DWORD, struct IAdviseSink *, DWORD *);
    HRESULT (*DUnadvise)(struct IDataObject *, DWORD);
    HRESULT (*EnumDAdvise)(struct IDataObject *, struct IEnumSTATDATA **);
};

struct tagSTATDATA {
    FORMATETC formatetc;
    DWORD advf;
    struct IAdviseSink *pAdvSink;
    DWORD dwConnection;
};

struct IEnumFORMATETC {
    struct IEnumFORMATETCVtbl *lpVtbl;
};

typedef struct IMalloc *LPMALLOC;

typedef struct IMessageFilter IMessageFilter, *PIMessageFilter;

typedef struct IMessageFilter *LPMESSAGEFILTER;

typedef struct IMessageFilterVtbl IMessageFilterVtbl, *PIMessageFilterVtbl;

typedef struct HTASK__ HTASK__, *PHTASK__;

typedef struct HTASK__ *HTASK;

typedef struct tagINTERFACEINFO tagINTERFACEINFO, *PtagINTERFACEINFO;

typedef struct tagINTERFACEINFO *LPINTERFACEINFO;

struct IMessageFilter {
    struct IMessageFilterVtbl *lpVtbl;
};

struct tagINTERFACEINFO {
    struct IUnknown *pUnk;
    IID iid;
    WORD wMethod;
};

struct IMessageFilterVtbl {
    HRESULT (*QueryInterface)(struct IMessageFilter *, IID *, void **);
    ULONG (*AddRef)(struct IMessageFilter *);
    ULONG (*Release)(struct IMessageFilter *);
    DWORD (*HandleInComingCall)(struct IMessageFilter *, DWORD, HTASK, DWORD, LPINTERFACEINFO);
    DWORD (*RetryRejectedCall)(struct IMessageFilter *, HTASK, DWORD, DWORD);
    DWORD (*MessagePending)(struct IMessageFilter *, HTASK, DWORD, DWORD);
};

struct HTASK__ {
    int unused;
};

typedef struct IRunningObjectTable *LPRUNNINGOBJECTTABLE;

typedef struct ILockBytesVtbl ILockBytesVtbl, *PILockBytesVtbl;

typedef struct ILockBytes ILockBytes, *PILockBytes;

struct ILockBytesVtbl {
    HRESULT (*QueryInterface)(struct ILockBytes *, IID *, void **);
    ULONG (*AddRef)(struct ILockBytes *);
    ULONG (*Release)(struct ILockBytes *);
    HRESULT (*ReadAt)(struct ILockBytes *, ULARGE_INTEGER, void *, ULONG, ULONG *);
    HRESULT (*WriteAt)(struct ILockBytes *, ULARGE_INTEGER, void *, ULONG, ULONG *);
    HRESULT (*Flush)(struct ILockBytes *);
    HRESULT (*SetSize)(struct ILockBytes *, ULARGE_INTEGER);
    HRESULT (*LockRegion)(struct ILockBytes *, ULARGE_INTEGER, ULARGE_INTEGER, DWORD);
    HRESULT (*UnlockRegion)(struct ILockBytes *, ULARGE_INTEGER, ULARGE_INTEGER, DWORD);
    HRESULT (*Stat)(struct ILockBytes *, STATSTG *, DWORD);
};

struct ILockBytes {
    struct ILockBytesVtbl *lpVtbl;
};

typedef struct IMoniker *LPMONIKER;

typedef struct IPersistStorageVtbl IPersistStorageVtbl, *PIPersistStorageVtbl;

typedef struct IPersistStorage IPersistStorage, *PIPersistStorage;

struct IPersistStorage {
    struct IPersistStorageVtbl *lpVtbl;
};

struct IPersistStorageVtbl {
    HRESULT (*QueryInterface)(struct IPersistStorage *, IID *, void **);
    ULONG (*AddRef)(struct IPersistStorage *);
    ULONG (*Release)(struct IPersistStorage *);
    HRESULT (*GetClassID)(struct IPersistStorage *, CLSID *);
    HRESULT (*IsDirty)(struct IPersistStorage *);
    HRESULT (*InitNew)(struct IPersistStorage *, struct IStorage *);
    HRESULT (*Load)(struct IPersistStorage *, struct IStorage *);
    HRESULT (*Save)(struct IPersistStorage *, struct IStorage *, BOOL);
    HRESULT (*SaveCompleted)(struct IPersistStorage *, struct IStorage *);
    HRESULT (*HandsOffStorage)(struct IPersistStorage *);
};

typedef struct IDataAdviseHolder *LPDATAADVISEHOLDER;

typedef struct IPersistStreamVtbl IPersistStreamVtbl, *PIPersistStreamVtbl;

typedef struct IPersistStream IPersistStream, *PIPersistStream;

struct IPersistStreamVtbl {
    HRESULT (*QueryInterface)(struct IPersistStream *, IID *, void **);
    ULONG (*AddRef)(struct IPersistStream *);
    ULONG (*Release)(struct IPersistStream *);
    HRESULT (*GetClassID)(struct IPersistStream *, CLSID *);
    HRESULT (*IsDirty)(struct IPersistStream *);
    HRESULT (*Load)(struct IPersistStream *, struct IStream *);
    HRESULT (*Save)(struct IPersistStream *, struct IStream *, BOOL);
    HRESULT (*GetSizeMax)(struct IPersistStream *, ULARGE_INTEGER *);
};

struct IPersistStream {
    struct IPersistStreamVtbl *lpVtbl;
};

typedef struct IBindCtx *LPBC;

typedef struct IEnumUnknownVtbl IEnumUnknownVtbl, *PIEnumUnknownVtbl;

typedef struct IEnumUnknown IEnumUnknown, *PIEnumUnknown;

struct IEnumUnknown {
    struct IEnumUnknownVtbl *lpVtbl;
};

struct IEnumUnknownVtbl {
    HRESULT (*QueryInterface)(struct IEnumUnknown *, IID *, void **);
    ULONG (*AddRef)(struct IEnumUnknown *);
    ULONG (*Release)(struct IEnumUnknown *);
    HRESULT (*Next)(struct IEnumUnknown *, ULONG, struct IUnknown **, ULONG *);
    HRESULT (*Skip)(struct IEnumUnknown *, ULONG);
    HRESULT (*Reset)(struct IEnumUnknown *);
    HRESULT (*Clone)(struct IEnumUnknown *, struct IEnumUnknown **);
};

typedef struct IStream *LPSTREAM;

typedef struct IDataObject *LPDATAOBJECT;

typedef struct ILockBytes *LPLOCKBYTES;

typedef struct IStorage *LPSTORAGE;

typedef struct IPersistStorage *LPPERSISTSTORAGE;

typedef STGMEDIUM *LPSTGMEDIUM;

typedef struct tagFORMATETC *LPFORMATETC;

typedef struct IPersistStream *LPPERSISTSTREAM;

typedef struct _CONTEXT _CONTEXT, *P_CONTEXT;

typedef struct _FLOATING_SAVE_AREA _FLOATING_SAVE_AREA, *P_FLOATING_SAVE_AREA;

typedef struct _FLOATING_SAVE_AREA FLOATING_SAVE_AREA;

struct _FLOATING_SAVE_AREA {
    DWORD ControlWord;
    DWORD StatusWord;
    DWORD TagWord;
    DWORD ErrorOffset;
    DWORD ErrorSelector;
    DWORD DataOffset;
    DWORD DataSelector;
    BYTE RegisterArea[80];
    DWORD Cr0NpxState;
};

struct _CONTEXT {
    DWORD ContextFlags;
    DWORD Dr0;
    DWORD Dr1;
    DWORD Dr2;
    DWORD Dr3;
    DWORD Dr6;
    DWORD Dr7;
    FLOATING_SAVE_AREA FloatSave;
    DWORD SegGs;
    DWORD SegFs;
    DWORD SegEs;
    DWORD SegDs;
    DWORD Edi;
    DWORD Esi;
    DWORD Ebx;
    DWORD Edx;
    DWORD Ecx;
    DWORD Eax;
    DWORD Ebp;
    DWORD Eip;
    DWORD SegCs;
    DWORD EFlags;
    DWORD Esp;
    DWORD SegSs;
    BYTE ExtendedRegisters[512];
};

typedef struct _EXCEPTION_RECORD _EXCEPTION_RECORD, *P_EXCEPTION_RECORD;

typedef void *PVOID;

struct _EXCEPTION_RECORD {
    DWORD ExceptionCode;
    DWORD ExceptionFlags;
    struct _EXCEPTION_RECORD *ExceptionRecord;
    PVOID ExceptionAddress;
    DWORD NumberParameters;
    ULONG_PTR ExceptionInformation[15];
};

typedef struct _EXCEPTION_POINTERS _EXCEPTION_POINTERS, *P_EXCEPTION_POINTERS;

typedef struct _EXCEPTION_RECORD EXCEPTION_RECORD;

typedef EXCEPTION_RECORD *PEXCEPTION_RECORD;

typedef struct _CONTEXT CONTEXT;

typedef CONTEXT *PCONTEXT;

struct _EXCEPTION_POINTERS {
    PEXCEPTION_RECORD ExceptionRecord;
    PCONTEXT ContextRecord;
};

typedef void (*_PHNDLR)(int);

typedef struct IOleInPlaceFrame IOleInPlaceFrame, *PIOleInPlaceFrame;

typedef struct IOleInPlaceFrame *LPOLEINPLACEFRAME;

typedef struct IOleInPlaceFrameVtbl IOleInPlaceFrameVtbl, *PIOleInPlaceFrameVtbl;

typedef struct tagRECT tagRECT, *PtagRECT;

typedef struct tagRECT *LPRECT;

typedef struct tagRECT RECT;

typedef RECT *LPCRECT;

typedef LPCRECT LPCBORDERWIDTHS;

typedef struct IOleInPlaceActiveObject IOleInPlaceActiveObject, *PIOleInPlaceActiveObject;

typedef struct HMENU__ HMENU__, *PHMENU__;

typedef struct HMENU__ *HMENU;

typedef struct tagOleMenuGroupWidths tagOleMenuGroupWidths, *PtagOleMenuGroupWidths;

typedef struct tagOleMenuGroupWidths *LPOLEMENUGROUPWIDTHS;

typedef HGLOBAL HOLEMENU;

typedef struct tagMSG tagMSG, *PtagMSG;

typedef struct tagMSG *LPMSG;

typedef struct IOleInPlaceActiveObjectVtbl IOleInPlaceActiveObjectVtbl, *PIOleInPlaceActiveObjectVtbl;

typedef struct IOleInPlaceUIWindow IOleInPlaceUIWindow, *PIOleInPlaceUIWindow;

typedef uint UINT_PTR;

typedef UINT_PTR WPARAM;

typedef struct tagPOINT tagPOINT, *PtagPOINT;

typedef struct tagPOINT POINT;

typedef struct IOleInPlaceUIWindowVtbl IOleInPlaceUIWindowVtbl, *PIOleInPlaceUIWindowVtbl;

struct tagPOINT {
    LONG x;
    LONG y;
};

struct IOleInPlaceActiveObjectVtbl {
    HRESULT (*QueryInterface)(struct IOleInPlaceActiveObject *, IID *, void **);
    ULONG (*AddRef)(struct IOleInPlaceActiveObject *);
    ULONG (*Release)(struct IOleInPlaceActiveObject *);
    HRESULT (*GetWindow)(struct IOleInPlaceActiveObject *, HWND *);
    HRESULT (*ContextSensitiveHelp)(struct IOleInPlaceActiveObject *, BOOL);
    HRESULT (*TranslateAcceleratorA)(struct IOleInPlaceActiveObject *, LPMSG);
    HRESULT (*OnFrameWindowActivate)(struct IOleInPlaceActiveObject *, BOOL);
    HRESULT (*OnDocWindowActivate)(struct IOleInPlaceActiveObject *, BOOL);
    HRESULT (*ResizeBorder)(struct IOleInPlaceActiveObject *, LPCRECT, struct IOleInPlaceUIWindow *, BOOL);
    HRESULT (*EnableModeless)(struct IOleInPlaceActiveObject *, BOOL);
};

struct HMENU__ {
    int unused;
};

struct tagRECT {
    LONG left;
    LONG top;
    LONG right;
    LONG bottom;
};

struct tagOleMenuGroupWidths {
    LONG width[6];
};

struct IOleInPlaceUIWindow {
    struct IOleInPlaceUIWindowVtbl *lpVtbl;
};

struct IOleInPlaceUIWindowVtbl {
    HRESULT (*QueryInterface)(struct IOleInPlaceUIWindow *, IID *, void **);
    ULONG (*AddRef)(struct IOleInPlaceUIWindow *);
    ULONG (*Release)(struct IOleInPlaceUIWindow *);
    HRESULT (*GetWindow)(struct IOleInPlaceUIWindow *, HWND *);
    HRESULT (*ContextSensitiveHelp)(struct IOleInPlaceUIWindow *, BOOL);
    HRESULT (*GetBorder)(struct IOleInPlaceUIWindow *, LPRECT);
    HRESULT (*RequestBorderSpace)(struct IOleInPlaceUIWindow *, LPCBORDERWIDTHS);
    HRESULT (*SetBorderSpace)(struct IOleInPlaceUIWindow *, LPCBORDERWIDTHS);
    HRESULT (*SetActiveObject)(struct IOleInPlaceUIWindow *, struct IOleInPlaceActiveObject *, LPCOLESTR);
};

struct IOleInPlaceFrame {
    struct IOleInPlaceFrameVtbl *lpVtbl;
};

struct IOleInPlaceFrameVtbl {
    HRESULT (*QueryInterface)(struct IOleInPlaceFrame *, IID *, void **);
    ULONG (*AddRef)(struct IOleInPlaceFrame *);
    ULONG (*Release)(struct IOleInPlaceFrame *);
    HRESULT (*GetWindow)(struct IOleInPlaceFrame *, HWND *);
    HRESULT (*ContextSensitiveHelp)(struct IOleInPlaceFrame *, BOOL);
    HRESULT (*GetBorder)(struct IOleInPlaceFrame *, LPRECT);
    HRESULT (*RequestBorderSpace)(struct IOleInPlaceFrame *, LPCBORDERWIDTHS);
    HRESULT (*SetBorderSpace)(struct IOleInPlaceFrame *, LPCBORDERWIDTHS);
    HRESULT (*SetActiveObject)(struct IOleInPlaceFrame *, struct IOleInPlaceActiveObject *, LPCOLESTR);
    HRESULT (*InsertMenus)(struct IOleInPlaceFrame *, HMENU, LPOLEMENUGROUPWIDTHS);
    HRESULT (*SetMenu)(struct IOleInPlaceFrame *, HMENU, HOLEMENU, HWND);
    HRESULT (*RemoveMenus)(struct IOleInPlaceFrame *, HMENU);
    HRESULT (*SetStatusText)(struct IOleInPlaceFrame *, LPCOLESTR);
    HRESULT (*EnableModeless)(struct IOleInPlaceFrame *, BOOL);
    HRESULT (*TranslateAcceleratorA)(struct IOleInPlaceFrame *, LPMSG, WORD);
};

struct IOleInPlaceActiveObject {
    struct IOleInPlaceActiveObjectVtbl *lpVtbl;
};

struct tagMSG {
    HWND hwnd;
    UINT message;
    WPARAM wParam;
    LPARAM lParam;
    DWORD time;
    POINT pt;
};

typedef struct IDropTargetVtbl IDropTargetVtbl, *PIDropTargetVtbl;

typedef struct IDropTarget IDropTarget, *PIDropTarget;

struct IDropTargetVtbl {
    HRESULT (*QueryInterface)(struct IDropTarget *, IID *, void **);
    ULONG (*AddRef)(struct IDropTarget *);
    ULONG (*Release)(struct IDropTarget *);
    HRESULT (*DragEnter)(struct IDropTarget *, struct IDataObject *, DWORD, POINTL, DWORD *);
    HRESULT (*DragOver)(struct IDropTarget *, DWORD, POINTL, DWORD *);
    HRESULT (*DragLeave)(struct IDropTarget *);
    HRESULT (*Drop)(struct IDropTarget *, struct IDataObject *, DWORD, POINTL, DWORD *);
};

struct IDropTarget {
    struct IDropTargetVtbl *lpVtbl;
};

typedef struct tagOIFI tagOIFI, *PtagOIFI;

typedef struct HACCEL__ HACCEL__, *PHACCEL__;

typedef struct HACCEL__ *HACCEL;

struct HACCEL__ {
    int unused;
};

struct tagOIFI {
    UINT cb;
    BOOL fMDIApp;
    HWND hwndFrame;
    HACCEL haccel;
    UINT cAccelEntries;
};

typedef struct IEnumOLEVERB IEnumOLEVERB, *PIEnumOLEVERB;

typedef struct IEnumOLEVERB *LPENUMOLEVERB;

typedef struct IEnumOLEVERBVtbl IEnumOLEVERBVtbl, *PIEnumOLEVERBVtbl;

typedef struct tagOLEVERB tagOLEVERB, *PtagOLEVERB;

typedef struct tagOLEVERB *LPOLEVERB;

struct IEnumOLEVERB {
    struct IEnumOLEVERBVtbl *lpVtbl;
};

struct IEnumOLEVERBVtbl {
    HRESULT (*QueryInterface)(struct IEnumOLEVERB *, IID *, void **);
    ULONG (*AddRef)(struct IEnumOLEVERB *);
    ULONG (*Release)(struct IEnumOLEVERB *);
    HRESULT (*Next)(struct IEnumOLEVERB *, ULONG, LPOLEVERB, ULONG *);
    HRESULT (*Skip)(struct IEnumOLEVERB *, ULONG);
    HRESULT (*Reset)(struct IEnumOLEVERB *);
    HRESULT (*Clone)(struct IEnumOLEVERB *, struct IEnumOLEVERB **);
};

struct tagOLEVERB {
    LONG lVerb;
    LPOLESTR lpszVerbName;
    DWORD fuFlags;
    DWORD grfAttribs;
};

typedef struct IOleObject IOleObject, *PIOleObject;

typedef struct IOleObject *LPOLEOBJECT;

typedef struct IOleObjectVtbl IOleObjectVtbl, *PIOleObjectVtbl;

typedef struct IOleClientSite IOleClientSite, *PIOleClientSite;

typedef struct tagSIZE tagSIZE, *PtagSIZE;

typedef struct tagSIZE SIZE;

typedef SIZE SIZEL;

typedef struct tagLOGPALETTE tagLOGPALETTE, *PtagLOGPALETTE;

typedef struct tagLOGPALETTE LOGPALETTE;

typedef struct IOleClientSiteVtbl IOleClientSiteVtbl, *PIOleClientSiteVtbl;

typedef struct IOleContainer IOleContainer, *PIOleContainer;

typedef struct tagPALETTEENTRY tagPALETTEENTRY, *PtagPALETTEENTRY;

typedef struct tagPALETTEENTRY PALETTEENTRY;

typedef struct IOleContainerVtbl IOleContainerVtbl, *PIOleContainerVtbl;

struct IOleClientSite {
    struct IOleClientSiteVtbl *lpVtbl;
};

struct IOleObjectVtbl {
    HRESULT (*QueryInterface)(struct IOleObject *, IID *, void **);
    ULONG (*AddRef)(struct IOleObject *);
    ULONG (*Release)(struct IOleObject *);
    HRESULT (*SetClientSite)(struct IOleObject *, struct IOleClientSite *);
    HRESULT (*GetClientSite)(struct IOleObject *, struct IOleClientSite **);
    HRESULT (*SetHostNames)(struct IOleObject *, LPCOLESTR, LPCOLESTR);
    HRESULT (*Close)(struct IOleObject *, DWORD);
    HRESULT (*SetMoniker)(struct IOleObject *, DWORD, struct IMoniker *);
    HRESULT (*GetMoniker)(struct IOleObject *, DWORD, DWORD, struct IMoniker **);
    HRESULT (*InitFromData)(struct IOleObject *, struct IDataObject *, BOOL, DWORD);
    HRESULT (*GetClipboardData)(struct IOleObject *, DWORD, struct IDataObject **);
    HRESULT (*DoVerb)(struct IOleObject *, LONG, LPMSG, struct IOleClientSite *, LONG, HWND, LPCRECT);
    HRESULT (*EnumVerbs)(struct IOleObject *, struct IEnumOLEVERB **);
    HRESULT (*Update)(struct IOleObject *);
    HRESULT (*IsUpToDate)(struct IOleObject *);
    HRESULT (*GetUserClassID)(struct IOleObject *, CLSID *);
    HRESULT (*GetUserType)(struct IOleObject *, DWORD, LPOLESTR *);
    HRESULT (*SetExtent)(struct IOleObject *, DWORD, SIZEL *);
    HRESULT (*GetExtent)(struct IOleObject *, DWORD, SIZEL *);
    HRESULT (*Advise)(struct IOleObject *, struct IAdviseSink *, DWORD *);
    HRESULT (*Unadvise)(struct IOleObject *, DWORD);
    HRESULT (*EnumAdvise)(struct IOleObject *, struct IEnumSTATDATA **);
    HRESULT (*GetMiscStatus)(struct IOleObject *, DWORD, DWORD *);
    HRESULT (*SetColorScheme)(struct IOleObject *, LOGPALETTE *);
};

struct IOleContainerVtbl {
    HRESULT (*QueryInterface)(struct IOleContainer *, IID *, void **);
    ULONG (*AddRef)(struct IOleContainer *);
    ULONG (*Release)(struct IOleContainer *);
    HRESULT (*ParseDisplayName)(struct IOleContainer *, struct IBindCtx *, LPOLESTR, ULONG *, struct IMoniker **);
    HRESULT (*EnumObjects)(struct IOleContainer *, DWORD, struct IEnumUnknown **);
    HRESULT (*LockContainer)(struct IOleContainer *, BOOL);
};

struct IOleClientSiteVtbl {
    HRESULT (*QueryInterface)(struct IOleClientSite *, IID *, void **);
    ULONG (*AddRef)(struct IOleClientSite *);
    ULONG (*Release)(struct IOleClientSite *);
    HRESULT (*SaveObject)(struct IOleClientSite *);
    HRESULT (*GetMoniker)(struct IOleClientSite *, DWORD, DWORD, struct IMoniker **);
    HRESULT (*GetContainer)(struct IOleClientSite *, struct IOleContainer **);
    HRESULT (*ShowObject)(struct IOleClientSite *);
    HRESULT (*OnShowWindow)(struct IOleClientSite *, BOOL);
    HRESULT (*RequestNewObjectLayout)(struct IOleClientSite *);
};

struct tagPALETTEENTRY {
    BYTE peRed;
    BYTE peGreen;
    BYTE peBlue;
    BYTE peFlags;
};

struct tagLOGPALETTE {
    WORD palVersion;
    WORD palNumEntries;
    PALETTEENTRY palPalEntry[1];
};

struct tagSIZE {
    LONG cx;
    LONG cy;
};

struct IOleContainer {
    struct IOleContainerVtbl *lpVtbl;
};

struct IOleObject {
    struct IOleObjectVtbl *lpVtbl;
};

typedef struct IDropSource IDropSource, *PIDropSource;

typedef struct IDropSourceVtbl IDropSourceVtbl, *PIDropSourceVtbl;

struct IDropSourceVtbl {
    HRESULT (*QueryInterface)(struct IDropSource *, IID *, void **);
    ULONG (*AddRef)(struct IDropSource *);
    ULONG (*Release)(struct IDropSource *);
    HRESULT (*QueryContinueDrag)(struct IDropSource *, BOOL, DWORD);
    HRESULT (*GiveFeedback)(struct IDropSource *, DWORD);
};

struct IDropSource {
    struct IDropSourceVtbl *lpVtbl;
};

typedef struct IOleClientSite *LPOLECLIENTSITE;

typedef struct IOleAdviseHolder IOleAdviseHolder, *PIOleAdviseHolder;

typedef struct IOleAdviseHolderVtbl IOleAdviseHolderVtbl, *PIOleAdviseHolderVtbl;

struct IOleAdviseHolderVtbl {
    HRESULT (*QueryInterface)(struct IOleAdviseHolder *, IID *, void **);
    ULONG (*AddRef)(struct IOleAdviseHolder *);
    ULONG (*Release)(struct IOleAdviseHolder *);
    HRESULT (*Advise)(struct IOleAdviseHolder *, struct IAdviseSink *, DWORD *);
    HRESULT (*Unadvise)(struct IOleAdviseHolder *, DWORD);
    HRESULT (*EnumAdvise)(struct IOleAdviseHolder *, struct IEnumSTATDATA **);
    HRESULT (*SendOnRename)(struct IOleAdviseHolder *, struct IMoniker *);
    HRESULT (*SendOnSave)(struct IOleAdviseHolder *);
    HRESULT (*SendOnClose)(struct IOleAdviseHolder *);
};

struct IOleAdviseHolder {
    struct IOleAdviseHolderVtbl *lpVtbl;
};

typedef struct tagOIFI *LPOLEINPLACEFRAMEINFO;

typedef struct IDropSource *LPDROPSOURCE;

typedef struct IOleAdviseHolder *LPOLEADVISEHOLDER;

typedef struct IOleInPlaceActiveObject *LPOLEINPLACEACTIVEOBJECT;

typedef struct IDropTarget *LPDROPTARGET;

typedef longlong fpos_t;

typedef struct XOleDocumentSite XOleDocumentSite, *PXOleDocumentSite;

struct XOleDocumentSite { // PlaceHolder Class Structure
};

typedef struct tagFINDREPLACEW tagFINDREPLACEW, *PtagFINDREPLACEW;

typedef struct tagFINDREPLACEW *LPFINDREPLACEW;

typedef struct HINSTANCE__ HINSTANCE__, *PHINSTANCE__;

typedef struct HINSTANCE__ *HINSTANCE;

typedef UINT_PTR (*LPFRHOOKPROC)(HWND, UINT, WPARAM, LPARAM);

struct tagFINDREPLACEW {
    DWORD lStructSize;
    HWND hwndOwner;
    HINSTANCE hInstance;
    DWORD Flags;
    LPWSTR lpstrFindWhat;
    LPWSTR lpstrReplaceWith;
    WORD wFindWhatLen;
    WORD wReplaceWithLen;
    LPARAM lCustData;
    LPFRHOOKPROC lpfnHook;
    LPCWSTR lpTemplateName;
};

struct HINSTANCE__ {
    int unused;
};

typedef struct XDropSource XDropSource, *PXDropSource;

struct XDropSource { // PlaceHolder Class Structure
};

typedef struct CDocumentAdapter CDocumentAdapter, *PCDocumentAdapter;

struct CDocumentAdapter { // PlaceHolder Class Structure
};

typedef struct tagMETARECORD tagMETARECORD, *PtagMETARECORD;

struct tagMETARECORD {
    DWORD rdSize;
    WORD rdFunction;
    WORD rdParm[1];
};

typedef struct _devicemodeA *PDEVMODEA;

typedef struct _GLYPHMETRICS _GLYPHMETRICS, *P_GLYPHMETRICS;

struct _GLYPHMETRICS {
    UINT gmBlackBoxX;
    UINT gmBlackBoxY;
    POINT gmptGlyphOrigin;
    short gmCellIncX;
    short gmCellIncY;
};

typedef struct _TRIVERTEX _TRIVERTEX, *P_TRIVERTEX;

typedef USHORT COLOR16;

struct _TRIVERTEX {
    LONG x;
    LONG y;
    COLOR16 Red;
    COLOR16 Green;
    COLOR16 Blue;
    COLOR16 Alpha;
};

typedef struct tagBITMAP tagBITMAP, *PtagBITMAP;

typedef struct tagBITMAP BITMAP;

typedef void *LPVOID;

struct tagBITMAP {
    LONG bmType;
    LONG bmWidth;
    LONG bmHeight;
    LONG bmWidthBytes;
    WORD bmPlanes;
    WORD bmBitsPixel;
    LPVOID bmBits;
};

typedef struct tagLOGFONTA tagLOGFONTA, *PtagLOGFONTA;

typedef struct tagLOGFONTA LOGFONTA;

struct tagLOGFONTA {
    LONG lfHeight;
    LONG lfWidth;
    LONG lfEscapement;
    LONG lfOrientation;
    LONG lfWeight;
    BYTE lfItalic;
    BYTE lfUnderline;
    BYTE lfStrikeOut;
    BYTE lfCharSet;
    BYTE lfOutPrecision;
    BYTE lfClipPrecision;
    BYTE lfQuality;
    BYTE lfPitchAndFamily;
    CHAR lfFaceName[32];
};

typedef struct _DOCINFOA _DOCINFOA, *P_DOCINFOA;

typedef CHAR *LPCSTR;

struct _DOCINFOA {
    int cbSize;
    LPCSTR lpszDocName;
    LPCSTR lpszOutput;
    LPCSTR lpszDatatype;
    DWORD fwType;
};

typedef struct tagMETARECORD METARECORD;

typedef struct tagGCP_RESULTSA tagGCP_RESULTSA, *PtagGCP_RESULTSA;

struct tagGCP_RESULTSA {
    DWORD lStructSize;
    LPSTR lpOutString;
    UINT *lpOrder;
    int *lpDx;
    int *lpCaretPos;
    LPSTR lpClass;
    LPWSTR lpGlyphs;
    UINT nGlyphs;
    int nMaxFit;
};

typedef struct tagFONTSIGNATURE tagFONTSIGNATURE, *PtagFONTSIGNATURE;

struct tagFONTSIGNATURE {
    DWORD fsUsb[4];
    DWORD fsCsb[2];
};

typedef struct tagLOGBRUSH tagLOGBRUSH, *PtagLOGBRUSH;

typedef DWORD COLORREF;

struct tagLOGBRUSH {
    UINT lbStyle;
    COLORREF lbColor;
    ULONG_PTR lbHatch;
};

typedef struct tagBITMAPINFOHEADER tagBITMAPINFOHEADER, *PtagBITMAPINFOHEADER;

struct tagBITMAPINFOHEADER {
    DWORD biSize;
    LONG biWidth;
    LONG biHeight;
    WORD biPlanes;
    WORD biBitCount;
    DWORD biCompression;
    DWORD biSizeImage;
    LONG biXPelsPerMeter;
    LONG biYPelsPerMeter;
    DWORD biClrUsed;
    DWORD biClrImportant;
};

typedef struct tagBITMAPINFO tagBITMAPINFO, *PtagBITMAPINFO;

typedef struct tagBITMAPINFOHEADER BITMAPINFOHEADER;

typedef struct tagRGBQUAD tagRGBQUAD, *PtagRGBQUAD;

typedef struct tagRGBQUAD RGBQUAD;

struct tagRGBQUAD {
    BYTE rgbBlue;
    BYTE rgbGreen;
    BYTE rgbRed;
    BYTE rgbReserved;
};

struct tagBITMAPINFO {
    BITMAPINFOHEADER bmiHeader;
    RGBQUAD bmiColors[1];
};

typedef struct tagTEXTMETRICA tagTEXTMETRICA, *PtagTEXTMETRICA;

struct tagTEXTMETRICA {
    LONG tmHeight;
    LONG tmAscent;
    LONG tmDescent;
    LONG tmInternalLeading;
    LONG tmExternalLeading;
    LONG tmAveCharWidth;
    LONG tmMaxCharWidth;
    LONG tmWeight;
    LONG tmOverhang;
    LONG tmDigitizedAspectX;
    LONG tmDigitizedAspectY;
    BYTE tmFirstChar;
    BYTE tmLastChar;
    BYTE tmDefaultChar;
    BYTE tmBreakChar;
    BYTE tmItalic;
    BYTE tmUnderlined;
    BYTE tmStruckOut;
    BYTE tmPitchAndFamily;
    BYTE tmCharSet;
};

typedef struct _FIXED _FIXED, *P_FIXED;

struct _FIXED {
    WORD fract;
    short value;
};

typedef struct tagCOLORADJUSTMENT tagCOLORADJUSTMENT, *PtagCOLORADJUSTMENT;

typedef struct tagCOLORADJUSTMENT COLORADJUSTMENT;

typedef short SHORT;

struct tagCOLORADJUSTMENT {
    WORD caSize;
    WORD caFlags;
    WORD caIlluminantIndex;
    WORD caRedGamma;
    WORD caGreenGamma;
    WORD caBlueGamma;
    WORD caReferenceBlack;
    WORD caReferenceWhite;
    SHORT caContrast;
    SHORT caBrightness;
    SHORT caColorfulness;
    SHORT caRedGreenTint;
};

typedef struct _ABCFLOAT _ABCFLOAT, *P_ABCFLOAT;

typedef float FLOAT;

struct _ABCFLOAT {
    FLOAT abcfA;
    FLOAT abcfB;
    FLOAT abcfC;
};

typedef struct tagGCP_RESULTSW tagGCP_RESULTSW, *PtagGCP_RESULTSW;

typedef struct tagGCP_RESULTSW *LPGCP_RESULTSW;

struct tagGCP_RESULTSW {
    DWORD lStructSize;
    LPWSTR lpOutString;
    UINT *lpOrder;
    int *lpDx;
    int *lpCaretPos;
    LPSTR lpClass;
    LPWSTR lpGlyphs;
    UINT nGlyphs;
    int nMaxFit;
};

typedef struct _DOCINFOA DOCINFOA;

typedef struct HDC__ HDC__, *PHDC__;

typedef struct HDC__ *HDC;

typedef struct tagHANDLETABLE tagHANDLETABLE, *PtagHANDLETABLE;

typedef struct tagHANDLETABLE HANDLETABLE;

typedef int (*MFENUMPROC)(HDC, HANDLETABLE *, METARECORD *, int, LPARAM);

typedef void *HGDIOBJ;

struct HDC__ {
    int unused;
};

struct tagHANDLETABLE {
    HGDIOBJ objectHandle[1];
};

typedef struct tagHANDLETABLE *LPHANDLETABLE;

typedef struct _RGNDATA _RGNDATA, *P_RGNDATA;

typedef struct _RGNDATA RGNDATA;

typedef struct _RGNDATAHEADER _RGNDATAHEADER, *P_RGNDATAHEADER;

typedef struct _RGNDATAHEADER RGNDATAHEADER;

struct _RGNDATAHEADER {
    DWORD dwSize;
    DWORD iType;
    DWORD nCount;
    DWORD nRgnSize;
    RECT rcBound;
};

struct _RGNDATA {
    RGNDATAHEADER rdh;
    char Buffer[1];
};

typedef struct _ABC _ABC, *P_ABC;

typedef struct _ABC *LPABC;

struct _ABC {
    int abcA;
    UINT abcB;
    int abcC;
};

typedef struct tagCOLORADJUSTMENT *LPCOLORADJUSTMENT;

typedef struct _BLENDFUNCTION _BLENDFUNCTION, *P_BLENDFUNCTION;

struct _BLENDFUNCTION {
    BYTE BlendOp;
    BYTE BlendFlags;
    BYTE SourceConstantAlpha;
    BYTE AlphaFormat;
};

typedef struct _devicemodeA DEVMODEA;

typedef struct _struct_662 _struct_662, *P_struct_662;

struct _struct_662 {
    POINTL dmPosition;
    DWORD dmDisplayOrientation;
    DWORD dmDisplayFixedOutput;
};

typedef struct _struct_661 _struct_661, *P_struct_661;

struct _struct_661 {
    short dmOrientation;
    short dmPaperSize;
    short dmPaperLength;
    short dmPaperWidth;
    short dmScale;
    short dmCopies;
    short dmDefaultSource;
    short dmPrintQuality;
};

typedef struct tagGCP_RESULTSA *LPGCP_RESULTSA;

typedef struct tagLOGFONTA *LPLOGFONTA;

typedef struct _MAT2 _MAT2, *P_MAT2;

typedef struct _FIXED FIXED;

struct _MAT2 {
    FIXED eM11;
    FIXED eM12;
    FIXED eM21;
    FIXED eM22;
};

typedef struct tagLOGBRUSH LOGBRUSH;

typedef struct _BLENDFUNCTION BLENDFUNCTION;

typedef struct tagXFORM tagXFORM, *PtagXFORM;

struct tagXFORM {
    FLOAT eM11;
    FLOAT eM12;
    FLOAT eM21;
    FLOAT eM22;
    FLOAT eDx;
    FLOAT eDy;
};

typedef struct tagTEXTMETRICA *LPTEXTMETRICA;

typedef struct tagTEXTMETRICA TEXTMETRICA;

typedef struct _MAT2 MAT2;

typedef int (*OLDFONTENUMPROCA)(LOGFONTA *, TEXTMETRICA *, DWORD, LPARAM);

typedef OLDFONTENUMPROCA FONTENUMPROCA;

typedef struct _devicemodeW _devicemodeW, *P_devicemodeW;

typedef union _union_660 _union_660, *P_union_660;

typedef union _union_663 _union_663, *P_union_663;

union _union_663 {
    DWORD dmDisplayFlags;
    DWORD dmNup;
};

union _union_660 {
    struct _struct_661 field0;
    struct _struct_662 field1;
};

struct _devicemodeW {
    WCHAR dmDeviceName[32];
    WORD dmSpecVersion;
    WORD dmDriverVersion;
    WORD dmSize;
    WORD dmDriverExtra;
    DWORD dmFields;
    union _union_660 field6_0x4c;
    short dmColor;
    short dmDuplex;
    short dmYResolution;
    short dmTTOption;
    short dmCollate;
    WCHAR dmFormName[32];
    WORD dmLogPixels;
    DWORD dmBitsPerPel;
    DWORD dmPelsWidth;
    DWORD dmPelsHeight;
    union _union_663 field17_0xb4;
    DWORD dmDisplayFrequency;
    DWORD dmICMMethod;
    DWORD dmICMIntent;
    DWORD dmMediaType;
    DWORD dmDitherType;
    DWORD dmReserved1;
    DWORD dmReserved2;
    DWORD dmPanningWidth;
    DWORD dmPanningHeight;
};

typedef struct _devicemodeW DEVMODEW;

typedef struct _OUTLINETEXTMETRICA _OUTLINETEXTMETRICA, *P_OUTLINETEXTMETRICA;

typedef struct _OUTLINETEXTMETRICA *LPOUTLINETEXTMETRICA;

typedef struct tagPANOSE tagPANOSE, *PtagPANOSE;

typedef struct tagPANOSE PANOSE;

typedef CHAR *PSTR;

struct tagPANOSE {
    BYTE bFamilyType;
    BYTE bSerifStyle;
    BYTE bWeight;
    BYTE bProportion;
    BYTE bContrast;
    BYTE bStrokeVariation;
    BYTE bArmStyle;
    BYTE bLetterform;
    BYTE bMidline;
    BYTE bXHeight;
};

struct _OUTLINETEXTMETRICA {
    UINT otmSize;
    TEXTMETRICA otmTextMetrics;
    BYTE otmFiller;
    PANOSE otmPanoseNumber;
    UINT otmfsSelection;
    UINT otmfsType;
    int otmsCharSlopeRise;
    int otmsCharSlopeRun;
    int otmItalicAngle;
    UINT otmEMSquare;
    int otmAscent;
    int otmDescent;
    UINT otmLineGap;
    UINT otmsCapEmHeight;
    UINT otmsXHeight;
    RECT otmrcFontBox;
    int otmMacAscent;
    int otmMacDescent;
    UINT otmMacLineGap;
    UINT otmusMinimumPPEM;
    POINT otmptSubscriptSize;
    POINT otmptSubscriptOffset;
    POINT otmptSuperscriptSize;
    POINT otmptSuperscriptOffset;
    UINT otmsStrikeoutSize;
    int otmsStrikeoutPosition;
    int otmsUnderscoreSize;
    int otmsUnderscorePosition;
    PSTR otmpFamilyName;
    PSTR otmpFaceName;
    PSTR otmpStyleName;
    PSTR otmpFullName;
};

typedef struct tagLOGPEN tagLOGPEN, *PtagLOGPEN;

struct tagLOGPEN {
    UINT lopnStyle;
    POINT lopnWidth;
    COLORREF lopnColor;
};

typedef struct tagKERNINGPAIR tagKERNINGPAIR, *PtagKERNINGPAIR;

struct tagKERNINGPAIR {
    WORD wFirst;
    WORD wSecond;
    int iKernAmount;
};

typedef struct tagXFORM XFORM;

typedef struct tagKERNINGPAIR *LPKERNINGPAIR;

typedef BOOL (*ABORTPROC)(HDC, int);

typedef struct tagBITMAPINFO BITMAPINFO;

typedef struct _GLYPHMETRICS *LPGLYPHMETRICS;

typedef struct _TRIVERTEX *PTRIVERTEX;

typedef struct tagLOGPEN LOGPEN;

typedef struct _ABCFLOAT *LPABCFLOAT;

typedef struct tagXFORM *LPXFORM;

typedef struct tagFONTSIGNATURE *LPFONTSIGNATURE;

typedef int (*GOBJENUMPROC)(LPVOID, LPARAM);

typedef struct tagBITMAPINFO *LPBITMAPINFO;

typedef struct _RGNDATA *LPRGNDATA;

typedef struct tagPALETTEENTRY *LPPALETTEENTRY;

typedef struct tagMETARECORD *LPMETARECORD;

typedef PVOID PSECURITY_DESCRIPTOR;

typedef struct _RTL_CRITICAL_SECTION *PRTL_CRITICAL_SECTION;

typedef struct _IMAGE_SECTION_HEADER _IMAGE_SECTION_HEADER, *P_IMAGE_SECTION_HEADER;

typedef union _union_226 _union_226, *P_union_226;

union _union_226 {
    DWORD PhysicalAddress;
    DWORD VirtualSize;
};

struct _IMAGE_SECTION_HEADER {
    BYTE Name[8];
    union _union_226 Misc;
    DWORD VirtualAddress;
    DWORD SizeOfRawData;
    DWORD PointerToRawData;
    DWORD PointerToRelocations;
    DWORD PointerToLinenumbers;
    WORD NumberOfRelocations;
    WORD NumberOfLinenumbers;
    DWORD Characteristics;
};

typedef WCHAR *PCNZWCH;

typedef enum _HEAP_INFORMATION_CLASS {
    HeapCompatibilityInformation=0,
    HeapEnableTerminationOnCorruption=1
} _HEAP_INFORMATION_CLASS;

typedef struct _MEMORY_BASIC_INFORMATION _MEMORY_BASIC_INFORMATION, *P_MEMORY_BASIC_INFORMATION;

typedef struct _MEMORY_BASIC_INFORMATION *PMEMORY_BASIC_INFORMATION;

struct _MEMORY_BASIC_INFORMATION {
    PVOID BaseAddress;
    PVOID AllocationBase;
    DWORD AllocationProtect;
    SIZE_T RegionSize;
    DWORD State;
    DWORD Protect;
    DWORD Type;
};

typedef LONG *PLONG;

typedef struct _OSVERSIONINFOA _OSVERSIONINFOA, *P_OSVERSIONINFOA;

struct _OSVERSIONINFOA {
    DWORD dwOSVersionInfoSize;
    DWORD dwMajorVersion;
    DWORD dwMinorVersion;
    DWORD dwBuildNumber;
    DWORD dwPlatformId;
    CHAR szCSDVersion[128];
};

typedef struct _OSVERSIONINFOA *LPOSVERSIONINFOA;

typedef enum _HEAP_INFORMATION_CLASS HEAP_INFORMATION_CLASS;

typedef struct _IMAGE_SECTION_HEADER *PIMAGE_SECTION_HEADER;

typedef DWORD SECURITY_INFORMATION;

typedef WCHAR *LPWCH;

typedef CHAR *PCSTR;

typedef LARGE_INTEGER *PLARGE_INTEGER;

typedef WORD LANGID;

typedef DWORD LCID;

typedef CHAR *PCNZCH;

typedef HANDLE *PHANDLE;

typedef struct tm tm, *Ptm;

struct tm {
    int tm_sec;
    int tm_min;
    int tm_hour;
    int tm_mday;
    int tm_mon;
    int tm_year;
    int tm_wday;
    int tm_yday;
    int tm_isdst;
};

typedef long clock_t;

typedef ACCESS_MASK REGSAM;

typedef LONG LSTATUS;

typedef struct XNotifyDBEvents XNotifyDBEvents, *PXNotifyDBEvents;

struct XNotifyDBEvents { // PlaceHolder Class Structure
};

typedef struct HIMC__ HIMC__, *PHIMC__;

struct HIMC__ {
    int unused;
};

typedef struct HIMC__ *HIMC;

typedef struct CSimpleStringT<char,0> CSimpleStringT<char,0>, *PCSimpleStringT<char,0>;

struct CSimpleStringT<char,0> { // PlaceHolder Class Structure
};

typedef struct CFixedStringT<class_ATL::CStringT<wchar_t,class_StrTraitMFC<wchar_t,class_ATL::ChTraitsCRT<wchar_t>_>_>,256> CFixedStringT<class_ATL::CStringT<wchar_t,class_StrTraitMFC<wchar_t,class_ATL::ChTraitsCRT<wchar_t>_>_>,256>, *PCFixedStringT<class_ATL::CStringT<wchar_t,class_StrTraitMFC<wchar_t,class_ATL::ChTraitsCRT<wchar_t>_>_>,256>;

struct CFixedStringT<class_ATL::CStringT<wchar_t,class_StrTraitMFC<wchar_t,class_ATL::ChTraitsCRT<wchar_t>_>_>,256> { // PlaceHolder Class Structure
};

typedef struct CXMLNode<struct_IXMLDOMNode> CXMLNode<struct_IXMLDOMNode>, *PCXMLNode<struct_IXMLDOMNode>;

struct CXMLNode<struct_IXMLDOMNode> { // PlaceHolder Class Structure
};

typedef struct CFixedStringT<class_ATL::CStringT<char,class_StrTraitMFC<char,class_ATL::ChTraitsCRT<char>_>_>,64> CFixedStringT<class_ATL::CStringT<char,class_StrTraitMFC<char,class_ATL::ChTraitsCRT<char>_>_>,64>, *PCFixedStringT<class_ATL::CStringT<char,class_StrTraitMFC<char,class_ATL::ChTraitsCRT<char>_>_>,64>;

struct CFixedStringT<class_ATL::CStringT<char,class_StrTraitMFC<char,class_ATL::ChTraitsCRT<char>_>_>,64> { // PlaceHolder Class Structure
};

typedef struct CXMLNode<struct_IXMLDOMText> CXMLNode<struct_IXMLDOMText>, *PCXMLNode<struct_IXMLDOMText>;

struct CXMLNode<struct_IXMLDOMText> { // PlaceHolder Class Structure
};

typedef struct CImage CImage, *PCImage;

struct CImage { // PlaceHolder Class Structure
};

typedef struct CAtlException CAtlException, *PCAtlException;

struct CAtlException { // PlaceHolder Class Structure
};

typedef struct CStringT<wchar_t,class_StrTraitMFC<wchar_t,class_ATL::ChTraitsCRT<wchar_t>_>_> CStringT<wchar_t,class_StrTraitMFC<wchar_t,class_ATL::ChTraitsCRT<wchar_t>_>_>, *PCStringT<wchar_t,class_StrTraitMFC<wchar_t,class_ATL::ChTraitsCRT<wchar_t>_>_>;

struct CStringT<wchar_t,class_StrTraitMFC<wchar_t,class_ATL::ChTraitsCRT<wchar_t>_>_> { // PlaceHolder Class Structure
};

typedef struct CSimpleStringT<wchar_t,0> CSimpleStringT<wchar_t,0>, *PCSimpleStringT<wchar_t,0>;

struct CSimpleStringT<wchar_t,0> { // PlaceHolder Class Structure
};

typedef struct CXMLNode<struct_IXMLDOMDocument> CXMLNode<struct_IXMLDOMDocument>, *PCXMLNode<struct_IXMLDOMDocument>;

struct CXMLNode<struct_IXMLDOMDocument> { // PlaceHolder Class Structure
};

typedef struct CAccessibleProxy CAccessibleProxy, *PCAccessibleProxy;

struct CAccessibleProxy { // PlaceHolder Class Structure
};

typedef struct CComObjectRootBase CComObjectRootBase, *PCComObjectRootBase;

struct CComObjectRootBase { // PlaceHolder Class Structure
};

typedef struct IAccessibleProxyImpl<class_ATL::CAccessibleProxy> IAccessibleProxyImpl<class_ATL::CAccessibleProxy>, *PIAccessibleProxyImpl<class_ATL::CAccessibleProxy>;

struct IAccessibleProxyImpl<class_ATL::CAccessibleProxy> { // PlaceHolder Class Structure
};

typedef struct CXMLDocument CXMLDocument, *PCXMLDocument;

struct CXMLDocument { // PlaceHolder Class Structure
};

typedef struct CComObjectRootEx<class_ATL::CComSingleThreadModel> CComObjectRootEx<class_ATL::CComSingleThreadModel>, *PCComObjectRootEx<class_ATL::CComSingleThreadModel>;

struct CComObjectRootEx<class_ATL::CComSingleThreadModel> { // PlaceHolder Class Structure
};

typedef struct IDocument IDocument, *PIDocument;

struct IDocument { // PlaceHolder Class Structure
};

typedef struct CFixedStringMgr CFixedStringMgr, *PCFixedStringMgr;

struct CFixedStringMgr { // PlaceHolder Class Structure
};

typedef struct CXMLNode<struct_IXMLDOMProcessingInstruction> CXMLNode<struct_IXMLDOMProcessingInstruction>, *PCXMLNode<struct_IXMLDOMProcessingInstruction>;

struct CXMLNode<struct_IXMLDOMProcessingInstruction> { // PlaceHolder Class Structure
};

typedef struct XDataObject XDataObject, *PXDataObject;

struct XDataObject { // PlaceHolder Class Structure
};

typedef struct IUnknown *LPUNKNOWN;

typedef struct _OVERLAPPED _OVERLAPPED, *P_OVERLAPPED;

typedef union _union_518 _union_518, *P_union_518;

typedef struct _struct_519 _struct_519, *P_struct_519;

struct _struct_519 {
    DWORD Offset;
    DWORD OffsetHigh;
};

union _union_518 {
    struct _struct_519 s;
    PVOID Pointer;
};

struct _OVERLAPPED {
    ULONG_PTR Internal;
    ULONG_PTR InternalHigh;
    union _union_518 u;
    HANDLE hEvent;
};

typedef struct _SYSTEMTIME _SYSTEMTIME, *P_SYSTEMTIME;

struct _SYSTEMTIME {
    WORD wYear;
    WORD wMonth;
    WORD wDayOfWeek;
    WORD wDay;
    WORD wHour;
    WORD wMinute;
    WORD wSecond;
    WORD wMilliseconds;
};

typedef struct _COMSTAT _COMSTAT, *P_COMSTAT;

typedef struct _COMSTAT *LPCOMSTAT;

struct _COMSTAT {
    DWORD fCtsHold:1;
    DWORD fDsrHold:1;
    DWORD fRlsdHold:1;
    DWORD fXoffHold:1;
    DWORD fXoffSent:1;
    DWORD fEof:1;
    DWORD fTxim:1;
    DWORD fReserved:25;
    DWORD cbInQue;
    DWORD cbOutQue;
};

typedef struct _WIN32_FIND_DATAA _WIN32_FIND_DATAA, *P_WIN32_FIND_DATAA;

struct _WIN32_FIND_DATAA {
    DWORD dwFileAttributes;
    FILETIME ftCreationTime;
    FILETIME ftLastAccessTime;
    FILETIME ftLastWriteTime;
    DWORD nFileSizeHigh;
    DWORD nFileSizeLow;
    DWORD dwReserved0;
    DWORD dwReserved1;
    CHAR cFileName[260];
    CHAR cAlternateFileName[14];
};

typedef struct _DCB _DCB, *P_DCB;

struct _DCB {
    DWORD DCBlength;
    DWORD BaudRate;
    DWORD fBinary:1;
    DWORD fParity:1;
    DWORD fOutxCtsFlow:1;
    DWORD fOutxDsrFlow:1;
    DWORD fDtrControl:2;
    DWORD fDsrSensitivity:1;
    DWORD fTXContinueOnXoff:1;
    DWORD fOutX:1;
    DWORD fInX:1;
    DWORD fErrorChar:1;
    DWORD fNull:1;
    DWORD fRtsControl:2;
    DWORD fAbortOnError:1;
    DWORD fDummy2:17;
    WORD wReserved;
    WORD XonLim;
    WORD XoffLim;
    BYTE ByteSize;
    BYTE Parity;
    BYTE StopBits;
    char XonChar;
    char XoffChar;
    char ErrorChar;
    char EofChar;
    char EvtChar;
    WORD wReserved1;
};

typedef struct _SECURITY_ATTRIBUTES _SECURITY_ATTRIBUTES, *P_SECURITY_ATTRIBUTES;

typedef struct _SECURITY_ATTRIBUTES *LPSECURITY_ATTRIBUTES;

struct _SECURITY_ATTRIBUTES {
    DWORD nLength;
    LPVOID lpSecurityDescriptor;
    BOOL bInheritHandle;
};

typedef struct _COMMTIMEOUTS _COMMTIMEOUTS, *P_COMMTIMEOUTS;

struct _COMMTIMEOUTS {
    DWORD ReadIntervalTimeout;
    DWORD ReadTotalTimeoutMultiplier;
    DWORD ReadTotalTimeoutConstant;
    DWORD WriteTotalTimeoutMultiplier;
    DWORD WriteTotalTimeoutConstant;
};

typedef struct _TIME_ZONE_INFORMATION _TIME_ZONE_INFORMATION, *P_TIME_ZONE_INFORMATION;

typedef struct _SYSTEMTIME SYSTEMTIME;

struct _TIME_ZONE_INFORMATION {
    LONG Bias;
    WCHAR StandardName[32];
    SYSTEMTIME StandardDate;
    LONG StandardBias;
    WCHAR DaylightName[32];
    SYSTEMTIME DaylightDate;
    LONG DaylightBias;
};

typedef struct tagACTCTXW tagACTCTXW, *PtagACTCTXW;

typedef struct tagACTCTXW ACTCTXW;


// WARNING! conflicting data type names: /WinDef.h/ULONG - /wtypes.h/ULONG

typedef HINSTANCE HMODULE;

struct tagACTCTXW {
    ULONG cbSize;
    DWORD dwFlags;
    LPCWSTR lpSource;
    USHORT wProcessorArchitecture;
    LANGID wLangId;
    LPCWSTR lpAssemblyDirectory;
    LPCWSTR lpResourceName;
    LPCWSTR lpApplicationName;
    HMODULE hModule;
};

typedef struct _SYSTEM_INFO _SYSTEM_INFO, *P_SYSTEM_INFO;

typedef union _union_530 _union_530, *P_union_530;

typedef struct _struct_531 _struct_531, *P_struct_531;

struct _struct_531 {
    WORD wProcessorArchitecture;
    WORD wReserved;
};

union _union_530 {
    DWORD dwOemId;
    struct _struct_531 s;
};

struct _SYSTEM_INFO {
    union _union_530 u;
    DWORD dwPageSize;
    LPVOID lpMinimumApplicationAddress;
    LPVOID lpMaximumApplicationAddress;
    DWORD_PTR dwActiveProcessorMask;
    DWORD dwNumberOfProcessors;
    DWORD dwProcessorType;
    DWORD dwAllocationGranularity;
    WORD wProcessorLevel;
    WORD wProcessorRevision;
};

typedef DWORD (*PTHREAD_START_ROUTINE)(LPVOID);

typedef struct _SYSTEM_INFO *LPSYSTEM_INFO;

typedef struct _STARTUPINFOW _STARTUPINFOW, *P_STARTUPINFOW;

typedef struct _STARTUPINFOW *LPSTARTUPINFOW;

typedef BYTE *LPBYTE;

struct _STARTUPINFOW {
    DWORD cb;
    LPWSTR lpReserved;
    LPWSTR lpDesktop;
    LPWSTR lpTitle;
    DWORD dwX;
    DWORD dwY;
    DWORD dwXSize;
    DWORD dwYSize;
    DWORD dwXCountChars;
    DWORD dwYCountChars;
    DWORD dwFillAttribute;
    DWORD dwFlags;
    WORD wShowWindow;
    WORD cbReserved2;
    LPBYTE lpReserved2;
    HANDLE hStdInput;
    HANDLE hStdOutput;
    HANDLE hStdError;
};

typedef struct _OVERLAPPED *LPOVERLAPPED;

typedef struct _SYSTEMTIME *LPSYSTEMTIME;

typedef ACTCTXW *PCACTCTXW;

typedef enum _GET_FILEEX_INFO_LEVELS {
    GetFileExInfoStandard=0,
    GetFileExMaxInfoLevel=1
} _GET_FILEEX_INFO_LEVELS;

typedef struct _COMMTIMEOUTS *LPCOMMTIMEOUTS;

typedef enum _GET_FILEEX_INFO_LEVELS GET_FILEEX_INFO_LEVELS;

typedef LONG (*PTOP_LEVEL_EXCEPTION_FILTER)(struct _EXCEPTION_POINTERS *);

typedef PTOP_LEVEL_EXCEPTION_FILTER LPTOP_LEVEL_EXCEPTION_FILTER;

typedef struct _TIME_ZONE_INFORMATION *LPTIME_ZONE_INFORMATION;

typedef struct _DCB *LPDCB;

typedef PTHREAD_START_ROUTINE LPTHREAD_START_ROUTINE;

typedef struct _WIN32_FIND_DATAA *LPWIN32_FIND_DATAA;

typedef PRTL_CRITICAL_SECTION LPCRITICAL_SECTION;

typedef struct _exception _exception, *P_exception;

struct _exception {
    int type;
    char *name;
    double arg1;
    double arg2;
    double retval;
};

typedef struct _flt _flt, *P_flt;

struct _flt {
    int flags;
    int nbytes;
    long lval;
    double dval;
};

typedef struct _flt *FLT;

typedef struct _strflt _strflt, *P_strflt;

struct _strflt {
    int sign;
    int decpt;
    int flag;
    char *mantissa;
};

typedef struct _strflt *STRFLT;

typedef enum enum_3272 {
    INTRNCVT_OK=0,
    INTRNCVT_OVERFLOW=1,
    INTRNCVT_UNDERFLOW=2
} enum_3272;

typedef enum enum_3272 INTRNCVT_STATUS;

typedef struct _Ctypevec _Ctypevec, *P_Ctypevec;

struct _Ctypevec {
    uint _Page;
    short *_Table;
    int _Delfl;
    wchar_t *_LocaleName;
};

typedef char *va_list;

typedef struct _browseinfoA _browseinfoA, *P_browseinfoA;

typedef struct _browseinfoA *LPBROWSEINFOA;

typedef int (*BFFCALLBACK)(HWND, UINT, LPARAM, LPARAM);

struct _browseinfoA {
    HWND hwndOwner;
    LPCITEMIDLIST pidlRoot;
    LPSTR pszDisplayName;
    LPCSTR lpszTitle;
    UINT ulFlags;
    BFFCALLBACK lpfn;
    LPARAM lParam;
    int iImage;
};

typedef struct tagWNDCLASSEXA tagWNDCLASSEXA, *PtagWNDCLASSEXA;

typedef LONG_PTR LRESULT;

typedef LRESULT (*WNDPROC)(HWND, UINT, WPARAM, LPARAM);

typedef struct HICON__ HICON__, *PHICON__;

typedef struct HICON__ *HICON;

typedef HICON HCURSOR;

typedef struct HBRUSH__ HBRUSH__, *PHBRUSH__;

typedef struct HBRUSH__ *HBRUSH;

struct HBRUSH__ {
    int unused;
};

struct HICON__ {
    int unused;
};

struct tagWNDCLASSEXA {
    UINT cbSize;
    UINT style;
    WNDPROC lpfnWndProc;
    int cbClsExtra;
    int cbWndExtra;
    HINSTANCE hInstance;
    HICON hIcon;
    HCURSOR hCursor;
    HBRUSH hbrBackground;
    LPCSTR lpszMenuName;
    LPCSTR lpszClassName;
    HICON hIconSm;
};

typedef struct tagMONITORINFO tagMONITORINFO, *PtagMONITORINFO;

typedef struct tagMONITORINFO *LPMONITORINFO;

struct tagMONITORINFO {
    DWORD cbSize;
    RECT rcMonitor;
    RECT rcWork;
    DWORD dwFlags;
};

typedef struct tagSCROLLINFO tagSCROLLINFO, *PtagSCROLLINFO;

typedef struct tagSCROLLINFO SCROLLINFO;

struct tagSCROLLINFO {
    UINT cbSize;
    UINT fMask;
    int nMin;
    int nMax;
    UINT nPage;
    int nPos;
    int nTrackPos;
};

typedef BOOL (*DRAWSTATEPROC)(HDC, LPARAM, WPARAM, int, int);

typedef struct _ICONINFO _ICONINFO, *P_ICONINFO;

typedef struct _ICONINFO ICONINFO;

struct _ICONINFO {
    BOOL fIcon;
    DWORD xHotspot;
    DWORD yHotspot;
    HBITMAP hbmMask;
    HBITMAP hbmColor;
};

typedef struct tagPAINTSTRUCT tagPAINTSTRUCT, *PtagPAINTSTRUCT;

typedef struct tagPAINTSTRUCT *LPPAINTSTRUCT;

struct tagPAINTSTRUCT {
    HDC hdc;
    BOOL fErase;
    RECT rcPaint;
    BOOL fRestore;
    BOOL fIncUpdate;
    BYTE rgbReserved[32];
};

typedef void MENUTEMPLATEA;

typedef struct tagTPMPARAMS tagTPMPARAMS, *PtagTPMPARAMS;

struct tagTPMPARAMS {
    UINT cbSize;
    RECT rcExclude;
};

typedef struct tagMENUBARINFO tagMENUBARINFO, *PtagMENUBARINFO;

typedef struct tagMENUBARINFO *PMENUBARINFO;

struct tagMENUBARINFO {
    DWORD cbSize;
    RECT rcBar;
    HMENU hMenu;
    HWND hwndMenu;
    BOOL fBarFocused:1;
    BOOL fFocused:1;
};

typedef struct tagWNDCLASSA tagWNDCLASSA, *PtagWNDCLASSA;

typedef struct tagWNDCLASSA WNDCLASSA;

struct tagWNDCLASSA {
    UINT style;
    WNDPROC lpfnWndProc;
    int cbClsExtra;
    int cbWndExtra;
    HINSTANCE hInstance;
    HICON hIcon;
    HCURSOR hCursor;
    HBRUSH hbrBackground;
    LPCSTR lpszMenuName;
    LPCSTR lpszClassName;
};

typedef struct tagWINDOWPLACEMENT tagWINDOWPLACEMENT, *PtagWINDOWPLACEMENT;

struct tagWINDOWPLACEMENT {
    UINT length;
    UINT flags;
    UINT showCmd;
    POINT ptMinPosition;
    POINT ptMaxPosition;
    RECT rcNormalPosition;
};

typedef struct tagTPMPARAMS TPMPARAMS;

typedef TPMPARAMS *LPTPMPARAMS;

typedef struct tagWINDOWPLACEMENT WINDOWPLACEMENT;

typedef struct tagACCEL tagACCEL, *PtagACCEL;

struct tagACCEL {
    BYTE fVirt;
    WORD key;
    WORD cmd;
};

typedef struct tagWNDCLASSEXA *LPWNDCLASSEXA;

typedef struct tagMSG MSG;

typedef struct tagMENUITEMINFOA tagMENUITEMINFOA, *PtagMENUITEMINFOA;

typedef struct tagMENUITEMINFOA *LPMENUITEMINFOA;

struct tagMENUITEMINFOA {
    UINT cbSize;
    UINT fMask;
    UINT fType;
    UINT fState;
    UINT wID;
    HMENU hSubMenu;
    HBITMAP hbmpChecked;
    HBITMAP hbmpUnchecked;
    ULONG_PTR dwItemData;
    LPSTR dwTypeData;
    UINT cch;
    HBITMAP hbmpItem;
};

typedef SCROLLINFO *LPCSCROLLINFO;

typedef struct DLGTEMPLATE DLGTEMPLATE, *PDLGTEMPLATE;

struct DLGTEMPLATE {
    DWORD style;
    DWORD dwExtendedStyle;
    WORD cdit;
    short x;
    short y;
    short cx;
    short cy;
};

typedef struct tagACCEL *LPACCEL;

typedef struct tagSCROLLINFO *LPSCROLLINFO;

typedef int INT_PTR;

typedef INT_PTR (*DLGPROC)(HWND, UINT, WPARAM, LPARAM);

typedef struct DLGTEMPLATE *LPCDLGTEMPLATEA;

typedef struct tagMENUITEMINFOA MENUITEMINFOA;

typedef MENUITEMINFOA *LPCMENUITEMINFOA;

typedef LRESULT (*HOOKPROC)(int, WPARAM, LPARAM);

typedef struct tagPAINTSTRUCT PAINTSTRUCT;

typedef struct tagDRAWTEXTPARAMS tagDRAWTEXTPARAMS, *PtagDRAWTEXTPARAMS;

struct tagDRAWTEXTPARAMS {
    UINT cbSize;
    int iTabLength;
    int iLeftMargin;
    int iRightMargin;
    UINT uiLengthDrawn;
};

typedef BOOL (*WNDENUMPROC)(HWND, LPARAM);

typedef void (*TIMERPROC)(HWND, UINT, UINT_PTR, DWORD);

typedef BOOL (*GRAYSTRINGPROC)(HDC, LPARAM, int);

typedef ICONINFO *PICONINFO;

typedef struct tagDRAWTEXTPARAMS *LPDRAWTEXTPARAMS;

typedef struct tagWNDCLASSA *LPWNDCLASSA;

typedef HANDLE HDWP;

typedef struct HMONITOR__ HMONITOR__, *PHMONITOR__;

typedef struct HMONITOR__ *HMONITOR;

typedef BOOL (*MONITORENUMPROC)(HMONITOR, HDC, LPRECT, LPARAM);

struct HMONITOR__ {
    int unused;
};

typedef ULONG_PTR *PSIZE_T;

typedef uint *PUINT_PTR;

typedef struct XClassFactory XClassFactory, *PXClassFactory;

struct XClassFactory { // PlaceHolder Class Structure
};

typedef struct CMFCVisualManagerBitmapCacheItem CMFCVisualManagerBitmapCacheItem, *PCMFCVisualManagerBitmapCacheItem;

struct CMFCVisualManagerBitmapCacheItem { // PlaceHolder Class Structure
};

typedef struct XEnumVOID XEnumVOID, *PXEnumVOID;

struct XEnumVOID { // PlaceHolder Class Structure
};

typedef struct _LDBL12 _LDBL12, *P_LDBL12;

struct _LDBL12 {
    uchar ld12[12];
};

typedef int (*_onexit_t)(void);

typedef void (*_invalid_parameter_handler)(wchar_t *, wchar_t *, wchar_t *, uint, uintptr_t);

typedef struct _ldiv_t _ldiv_t, *P_ldiv_t;

struct _ldiv_t {
    long quot;
    long rem;
};

typedef struct _LDOUBLE _LDOUBLE, *P_LDOUBLE;

struct _LDOUBLE {
    uchar ld[10];
};

typedef struct _CRT_FLOAT _CRT_FLOAT, *P_CRT_FLOAT;

struct _CRT_FLOAT {
    float f;
};

typedef struct _ldiv_t ldiv_t;

typedef void (*_purecall_handler)(void);

typedef struct _CRT_DOUBLE _CRT_DOUBLE, *P_CRT_DOUBLE;

struct _CRT_DOUBLE {
    double x;
};

typedef struct XElementButtonGallery XElementButtonGallery, *PXElementButtonGallery;

struct XElementButtonGallery { // PlaceHolder Class Structure
};

typedef struct XElementGroup XElementGroup, *PXElementGroup;

struct XElementGroup { // PlaceHolder Class Structure
};

typedef struct XBase XBase, *PXBase;

struct XBase { // PlaceHolder Class Structure
};

typedef struct XQAT XQAT, *PXQAT;

struct XQAT { // PlaceHolder Class Structure
};

typedef struct XElementLabel XElementLabel, *PXElementLabel;

struct XElementLabel { // PlaceHolder Class Structure
};

typedef struct XElementButtonApplication XElementButtonApplication, *PXElementButtonApplication;

struct XElementButtonApplication { // PlaceHolder Class Structure
};

typedef struct XElementButtonUndo XElementButtonUndo, *PXElementButtonUndo;

struct XElementButtonUndo { // PlaceHolder Class Structure
};

typedef struct XElementButton XElementButton, *PXElementButton;

struct XElementButton { // PlaceHolder Class Structure
};

typedef struct XElementComboBox XElementComboBox, *PXElementComboBox;

struct XElementComboBox { // PlaceHolder Class Structure
};

typedef struct XElementButtonMainPanel XElementButtonMainPanel, *PXElementButtonMainPanel;

struct XElementButtonMainPanel { // PlaceHolder Class Structure
};

typedef struct XElementSlider XElementSlider, *PXElementSlider;

struct XElementSlider { // PlaceHolder Class Structure
};

typedef struct XElementButtonCheck XElementButtonCheck, *PXElementButtonCheck;

struct XElementButtonCheck { // PlaceHolder Class Structure
};

typedef struct XElementButtonLinkCtrl XElementButtonLinkCtrl, *PXElementButtonLinkCtrl;

struct XElementButtonLinkCtrl { // PlaceHolder Class Structure
};

typedef struct XElementSeparator XElementSeparator, *PXElementSeparator;

struct XElementSeparator { // PlaceHolder Class Structure
};

typedef struct XElementFontComboBox XElementFontComboBox, *PXElementFontComboBox;

struct XElementFontComboBox { // PlaceHolder Class Structure
};

typedef struct XElementProgressBar XElementProgressBar, *PXElementProgressBar;

struct XElementProgressBar { // PlaceHolder Class Structure
};

typedef struct XElementEdit XElementEdit, *PXElementEdit;

struct XElementEdit { // PlaceHolder Class Structure
};

typedef struct XElementButtonLaunch XElementButtonLaunch, *PXElementButtonLaunch;

struct XElementButtonLaunch { // PlaceHolder Class Structure
};

typedef struct XElementButtonColor XElementButtonColor, *PXElementButtonColor;

struct XElementButtonColor { // PlaceHolder Class Structure
};

typedef struct _cpinfo _cpinfo, *P_cpinfo;

struct _cpinfo {
    UINT MaxCharSize;
    BYTE DefaultChar[2];
    BYTE LeadByte[12];
};

typedef BOOL (*LOCALE_ENUMPROCA)(LPSTR);

typedef struct _numberfmtA _numberfmtA, *P_numberfmtA;

typedef struct _numberfmtA NUMBERFMTA;

struct _numberfmtA {
    UINT NumDigits;
    UINT LeadingZero;
    UINT Grouping;
    LPSTR lpDecimalSep;
    LPSTR lpThousandSep;
    UINT NegativeOrder;
};

typedef struct _cpinfo *LPCPINFO;

typedef DWORD LCTYPE;

typedef struct XDropTarget XDropTarget, *PXDropTarget;

struct XDropTarget { // PlaceHolder Class Structure
};

typedef struct DotNetPdbInfo DotNetPdbInfo, *PDotNetPdbInfo;

struct DotNetPdbInfo {
    char signature[4];
    GUID guid;
    dword age;
    char pdbpath[37];
};

typedef BOOL (*PHANDLER_ROUTINE)(DWORD);

typedef struct Bitmap Bitmap, *PBitmap;

struct Bitmap { // PlaceHolder Class Structure
};

typedef ushort wint_t;

typedef long __time32_t;

typedef uint size_t;

typedef int errno_t;

typedef struct localeinfo_struct localeinfo_struct, *Plocaleinfo_struct;

typedef struct localeinfo_struct *_locale_t;

struct localeinfo_struct {
    pthreadlocinfo locinfo;
    pthreadmbcinfo mbcinfo;
};

typedef longlong __time64_t;

typedef struct threadlocaleinfostruct threadlocinfo;

typedef int intptr_t;

typedef size_t rsize_t;

typedef ushort wctype_t;

typedef PVOID HDEVINFO;

typedef struct _SP_DEVICE_INTERFACE_DATA _SP_DEVICE_INTERFACE_DATA, *P_SP_DEVICE_INTERFACE_DATA;

struct _SP_DEVICE_INTERFACE_DATA {
    DWORD cbSize;
    GUID InterfaceClassGuid;
    DWORD Flags;
    ULONG_PTR Reserved;
};

typedef struct _SP_DEVICE_INTERFACE_DETAIL_DATA_A _SP_DEVICE_INTERFACE_DETAIL_DATA_A, *P_SP_DEVICE_INTERFACE_DETAIL_DATA_A;

struct _SP_DEVICE_INTERFACE_DETAIL_DATA_A {
    DWORD cbSize;
    CHAR DevicePath[1];
};

typedef struct _SP_DEVINFO_DATA _SP_DEVINFO_DATA, *P_SP_DEVINFO_DATA;

struct _SP_DEVINFO_DATA {
    DWORD cbSize;
    GUID ClassGuid;
    DWORD DevInst;
    ULONG_PTR Reserved;
};

typedef struct _SP_DEVICE_INTERFACE_DATA *PSP_DEVICE_INTERFACE_DATA;

typedef struct _SP_DEVICE_INTERFACE_DETAIL_DATA_A *PSP_DEVICE_INTERFACE_DETAIL_DATA_A;

typedef struct _SP_DEVINFO_DATA *PSP_DEVINFO_DATA;

typedef CLSID *LPCLSID;

typedef struct _GUID _GUID, *P_GUID;

struct _GUID {
    ulong Data1;
    ushort Data2;
    ushort Data3;
    uchar Data4[8];
};

typedef struct HKL__ HKL__, *PHKL__;

struct HKL__ {
    int unused;
};

typedef struct HFONT__ HFONT__, *PHFONT__;

struct HFONT__ {
    int unused;
};

typedef struct HKEY__ HKEY__, *PHKEY__;

struct HKEY__ {
    int unused;
};

typedef struct HMETAFILE__ HMETAFILE__, *PHMETAFILE__;

struct HMETAFILE__ {
    int unused;
};

typedef int INT;

typedef struct HPEN__ HPEN__, *PHPEN__;

struct HPEN__ {
    int unused;
};

typedef long *LPLONG;

typedef int (*FARPROC)(void);

typedef BOOL *LPBOOL;

typedef struct HMETAFILE__ *HMETAFILE;

typedef struct HKEY__ *HKEY;

typedef struct HRSRC__ HRSRC__, *PHRSRC__;

typedef struct HRSRC__ *HRSRC;

struct HRSRC__ {
    int unused;
};

typedef struct HRGN__ HRGN__, *PHRGN__;

struct HRGN__ {
    int unused;
};

typedef struct HFONT__ *HFONT;

typedef DWORD *LPDWORD;

typedef struct HHOOK__ HHOOK__, *PHHOOK__;

struct HHOOK__ {
    int unused;
};

typedef DWORD *PDWORD;

typedef struct _FILETIME *PFILETIME;

typedef WORD *LPWORD;

typedef struct tagPOINT *LPPOINT;

typedef struct HPALETTE__ HPALETTE__, *PHPALETTE__;

struct HPALETTE__ {
    int unused;
};

typedef HANDLE HLOCAL;

typedef WORD ATOM;

typedef struct HRGN__ *HRGN;

typedef FLOAT *PFLOAT;

typedef struct HHOOK__ *HHOOK;

typedef struct HPEN__ *HPEN;

typedef struct HPALETTE__ *HPALETTE;

typedef int *LPINT;

typedef struct HKL__ *HKL;

typedef struct tagSIZE *LPSIZE;

typedef struct _FILETIME *LPFILETIME;

typedef HANDLE *LPHANDLE;

typedef HKEY *PHKEY;

typedef BYTE *PBYTE;

typedef void *LPCVOID;

typedef struct IMAGE_OPTIONAL_HEADER32 IMAGE_OPTIONAL_HEADER32, *PIMAGE_OPTIONAL_HEADER32;

typedef struct IMAGE_DATA_DIRECTORY IMAGE_DATA_DIRECTORY, *PIMAGE_DATA_DIRECTORY;

struct IMAGE_DATA_DIRECTORY {
    ImageBaseOffset32 VirtualAddress;
    dword Size;
};

struct IMAGE_OPTIONAL_HEADER32 {
    word Magic;
    byte MajorLinkerVersion;
    byte MinorLinkerVersion;
    dword SizeOfCode;
    dword SizeOfInitializedData;
    dword SizeOfUninitializedData;
    ImageBaseOffset32 AddressOfEntryPoint;
    ImageBaseOffset32 BaseOfCode;
    ImageBaseOffset32 BaseOfData;
    pointer32 ImageBase;
    dword SectionAlignment;
    dword FileAlignment;
    word MajorOperatingSystemVersion;
    word MinorOperatingSystemVersion;
    word MajorImageVersion;
    word MinorImageVersion;
    word MajorSubsystemVersion;
    word MinorSubsystemVersion;
    dword Win32VersionValue;
    dword SizeOfImage;
    dword SizeOfHeaders;
    dword CheckSum;
    word Subsystem;
    word DllCharacteristics;
    dword SizeOfStackReserve;
    dword SizeOfStackCommit;
    dword SizeOfHeapReserve;
    dword SizeOfHeapCommit;
    dword LoaderFlags;
    dword NumberOfRvaAndSizes;
    struct IMAGE_DATA_DIRECTORY DataDirectory[16];
};

typedef struct Var Var, *PVar;

struct Var {
    word wLength;
    word wValueLength;
    word wType;
};

typedef struct IMAGE_RESOURCE_DIRECTORY_ENTRY_NameStruct IMAGE_RESOURCE_DIRECTORY_ENTRY_NameStruct, *PIMAGE_RESOURCE_DIRECTORY_ENTRY_NameStruct;

struct IMAGE_RESOURCE_DIRECTORY_ENTRY_NameStruct {
    dword NameOffset;
    dword NameIsString;
};

typedef struct IMAGE_DEBUG_DIRECTORY IMAGE_DEBUG_DIRECTORY, *PIMAGE_DEBUG_DIRECTORY;

struct IMAGE_DEBUG_DIRECTORY {
    dword Characteristics;
    dword TimeDateStamp;
    word MajorVersion;
    word MinorVersion;
    dword Type;
    dword SizeOfData;
    dword AddressOfRawData;
    dword PointerToRawData;
};

typedef struct IMAGE_FILE_HEADER IMAGE_FILE_HEADER, *PIMAGE_FILE_HEADER;

struct IMAGE_FILE_HEADER {
    word Machine; // 332
    word NumberOfSections;
    dword TimeDateStamp;
    dword PointerToSymbolTable;
    dword NumberOfSymbols;
    word SizeOfOptionalHeader;
    word Characteristics;
};

typedef struct IMAGE_NT_HEADERS32 IMAGE_NT_HEADERS32, *PIMAGE_NT_HEADERS32;

struct IMAGE_NT_HEADERS32 {
    char Signature[4];
    struct IMAGE_FILE_HEADER FileHeader;
    struct IMAGE_OPTIONAL_HEADER32 OptionalHeader;
};

typedef struct StringFileInfo StringFileInfo, *PStringFileInfo;

struct StringFileInfo {
    word wLength;
    word wValueLength;
    word wType;
};

typedef union IMAGE_RESOURCE_DIRECTORY_ENTRY IMAGE_RESOURCE_DIRECTORY_ENTRY, *PIMAGE_RESOURCE_DIRECTORY_ENTRY;

typedef union IMAGE_RESOURCE_DIRECTORY_ENTRY_NameUnion IMAGE_RESOURCE_DIRECTORY_ENTRY_NameUnion, *PIMAGE_RESOURCE_DIRECTORY_ENTRY_NameUnion;

union IMAGE_RESOURCE_DIRECTORY_ENTRY_NameUnion {
    struct IMAGE_RESOURCE_DIRECTORY_ENTRY_NameStruct IMAGE_RESOURCE_DIRECTORY_ENTRY_NameStruct;
    dword Name;
    word Id;
};

union IMAGE_RESOURCE_DIRECTORY_ENTRY {
    union IMAGE_RESOURCE_DIRECTORY_ENTRY_NameUnion NameUnion;
    union IMAGE_RESOURCE_DIRECTORY_ENTRY_DirectoryUnion DirectoryUnion;
};

typedef struct StringTable StringTable, *PStringTable;

struct StringTable {
    word wLength;
    word wValueLength;
    word wType;
};

typedef struct IMAGE_SECTION_HEADER IMAGE_SECTION_HEADER, *PIMAGE_SECTION_HEADER;

typedef union Misc Misc, *PMisc;

typedef enum SectionFlags {
    IMAGE_SCN_TYPE_NO_PAD=8,
    IMAGE_SCN_RESERVED_0001=16,
    IMAGE_SCN_CNT_CODE=32,
    IMAGE_SCN_CNT_INITIALIZED_DATA=64,
    IMAGE_SCN_CNT_UNINITIALIZED_DATA=128,
    IMAGE_SCN_LNK_OTHER=256,
    IMAGE_SCN_LNK_INFO=512,
    IMAGE_SCN_RESERVED_0040=1024,
    IMAGE_SCN_LNK_REMOVE=2048,
    IMAGE_SCN_LNK_COMDAT=4096,
    IMAGE_SCN_GPREL=32768,
    IMAGE_SCN_MEM_16BIT=131072,
    IMAGE_SCN_MEM_PURGEABLE=131072,
    IMAGE_SCN_MEM_LOCKED=262144,
    IMAGE_SCN_MEM_PRELOAD=524288,
    IMAGE_SCN_ALIGN_1BYTES=1048576,
    IMAGE_SCN_ALIGN_2BYTES=2097152,
    IMAGE_SCN_ALIGN_4BYTES=3145728,
    IMAGE_SCN_ALIGN_8BYTES=4194304,
    IMAGE_SCN_ALIGN_16BYTES=5242880,
    IMAGE_SCN_ALIGN_32BYTES=6291456,
    IMAGE_SCN_ALIGN_64BYTES=7340032,
    IMAGE_SCN_ALIGN_128BYTES=8388608,
    IMAGE_SCN_ALIGN_256BYTES=9437184,
    IMAGE_SCN_ALIGN_512BYTES=10485760,
    IMAGE_SCN_ALIGN_1024BYTES=11534336,
    IMAGE_SCN_ALIGN_2048BYTES=12582912,
    IMAGE_SCN_ALIGN_4096BYTES=13631488,
    IMAGE_SCN_ALIGN_8192BYTES=14680064,
    IMAGE_SCN_LNK_NRELOC_OVFL=16777216,
    IMAGE_SCN_MEM_DISCARDABLE=33554432,
    IMAGE_SCN_MEM_NOT_CACHED=67108864,
    IMAGE_SCN_MEM_NOT_PAGED=134217728,
    IMAGE_SCN_MEM_SHARED=268435456,
    IMAGE_SCN_MEM_EXECUTE=536870912,
    IMAGE_SCN_MEM_READ=1073741824,
    IMAGE_SCN_MEM_WRITE=2147483648
} SectionFlags;

union Misc {
    dword PhysicalAddress;
    dword VirtualSize;
};

struct IMAGE_SECTION_HEADER {
    char Name[8];
    union Misc Misc;
    ImageBaseOffset32 VirtualAddress;
    dword SizeOfRawData;
    dword PointerToRawData;
    dword PointerToRelocations;
    dword PointerToLinenumbers;
    word NumberOfRelocations;
    word NumberOfLinenumbers;
    enum SectionFlags Characteristics;
};

typedef struct VS_VERSION_INFO VS_VERSION_INFO, *PVS_VERSION_INFO;

struct VS_VERSION_INFO {
    word StructLength;
    word ValueLength;
    word StructType;
    wchar16 Info[16];
    byte Padding[2];
    dword Signature;
    word StructVersion[2];
    word FileVersion[4];
    word ProductVersion[4];
    dword FileFlagsMask[2];
    dword FileFlags;
    dword FileOS;
    dword FileType;
    dword FileSubtype;
    dword FileTimestamp;
};

typedef struct IMAGE_RESOURCE_DATA_ENTRY IMAGE_RESOURCE_DATA_ENTRY, *PIMAGE_RESOURCE_DATA_ENTRY;

struct IMAGE_RESOURCE_DATA_ENTRY {
    dword OffsetToData;
    dword Size;
    dword CodePage;
    dword Reserved;
};

typedef struct VarFileInfo VarFileInfo, *PVarFileInfo;

struct VarFileInfo {
    word wLength;
    word wValueLength;
    word wType;
};

typedef struct IMAGE_RESOURCE_DIRECTORY IMAGE_RESOURCE_DIRECTORY, *PIMAGE_RESOURCE_DIRECTORY;

struct IMAGE_RESOURCE_DIRECTORY {
    dword Characteristics;
    dword TimeDateStamp;
    word MajorVersion;
    word MinorVersion;
    word NumberOfNamedEntries;
    word NumberOfIdEntries;
};

typedef struct StringInfo StringInfo, *PStringInfo;

struct StringInfo {
    word wLength;
    word wValueLength;
    word wType;
};

typedef struct tagPROPVARIANT tagPROPVARIANT, *PtagPROPVARIANT;

typedef struct tagPROPVARIANT PROPVARIANT;

struct tagPROPVARIANT {
};

typedef struct XMessageFilter XMessageFilter, *PXMessageFilter;

struct XMessageFilter { // PlaceHolder Class Structure
};

typedef struct _SHFILEINFOA _SHFILEINFOA, *P_SHFILEINFOA;

typedef struct _SHFILEINFOA SHFILEINFOA;

struct _SHFILEINFOA {
    HICON hIcon;
    int iIcon;
    DWORD dwAttributes;
    CHAR szDisplayName[260];
    CHAR szTypeName[80];
};

typedef struct _AppBarData _AppBarData, *P_AppBarData;

typedef struct _AppBarData *PAPPBARDATA;

struct _AppBarData {
    DWORD cbSize;
    HWND hWnd;
    UINT uCallbackMessage;
    UINT uEdge;
    RECT rc;
    LPARAM lParam;
};

typedef struct _SHELLEXECUTEINFOA _SHELLEXECUTEINFOA, *P_SHELLEXECUTEINFOA;

typedef struct _SHELLEXECUTEINFOA SHELLEXECUTEINFOA;

typedef union _union_1206 _union_1206, *P_union_1206;

union _union_1206 {
    HANDLE hIcon;
};

struct _SHELLEXECUTEINFOA {
    DWORD cbSize;
    ULONG fMask;
    HWND hwnd;
    LPCSTR lpVerb;
    LPCSTR lpFile;
    LPCSTR lpParameters;
    LPCSTR lpDirectory;
    int nShow;
    HINSTANCE hInstApp;
    void *lpIDList;
    LPCSTR lpClass;
    HKEY hkeyClass;
    DWORD dwHotKey;
    union _union_1206 u;
    HANDLE hProcess;
};

typedef struct HDROP__ HDROP__, *PHDROP__;

struct HDROP__ {
    int unused;
};

typedef struct HDROP__ *HDROP;




int __cdecl UnDecorator::doNoIdentCharCheck(void)

{
  return DAT_00c5afd4 & 0x10000;
}



int FID_conflict_LoadStringW(HINSTANCE hInstance,UINT uID,LPWSTR lpBuffer,int cchBufferMax)

{
  undefined2 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  puVar1 = (undefined2 *)thunk_FUN_006bf220(hInstance,uID);
  if (puVar1 != (undefined2 *)0x0) {
    uVar2 = GetBaseTypeLength(puVar1 + 1,*puVar1);
    uVar3 = thunk_FUN_00710120(uVar2);
    ConvertToBaseType(uVar3,uVar2,puVar1 + 1,*puVar1);
    ReleaseBufferSetLength(uVar2);
  }
  return (uint)(puVar1 != (undefined2 *)0x0);
}



// WARNING: Function: __RTC_CheckEsp replaced with injection: __RTC_CheckEsp

void thunk_FUN_006bb820(int param_1,int param_2,undefined1 param_3)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 auStack_d0 [51];
  
  puVar2 = auStack_d0;
  for (iVar1 = 0x33; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0xcccccccc;
    puVar2 = puVar2 + 1;
  }
  if (param_2 == 1) {
    iVar1 = thunk_FUN_006bbae0(&param_3);
    thunk_FUN_006bb920(iVar1 + param_1);
  }
  else {
    iVar1 = thunk_FUN_006bbae0(param_2,param_3);
    thunk_FUN_006bb8c0(iVar1 + param_1);
  }
  return;
}



undefined ** thunk_FUN_00a5b7f0(void)

{
  return &PTR_thunk_FUN_0076d1e0_00bd006c;
}



CMFCComObject<> * __thiscall CMFCComObject<>::CMFCComObject<>(CMFCComObject<> *this,void *param_1)

{
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_00b4dc68;
  pvStack_10 = ExceptionList;
  ExceptionList = &pvStack_10;
  ATL::CAccessibleProxy::CAccessibleProxy((CAccessibleProxy *)this);
  uStack_8 = 0;
  *(undefined ***)this = vftable;
  *(undefined ***)(this + 4) = vftable;
  *(undefined ***)(this + 0x10) = vftable;
  AfxOleLockApp();
  ExceptionList = pvStack_10;
  return this;
}



void QueryInterface(int param_1,void *param_2,void **param_3)

{
  CCmdTarget::ExternalQueryInterface((CCmdTarget *)(param_1 + -0x16c),param_2,param_3);
  return;
}



undefined2 * __thiscall COleVariant(undefined2 *param_1,undefined4 param_2)

{
  *param_1 = 0;
  COleVariant__operator_(param_2);
  return param_1;
}



void __thiscall CMFCButton::EnableFullTextTooltip(CMFCButton *this,int param_1)

{
  *(int *)(this + 200) = param_1;
  *(int *)(this + 0xcc) = param_1;
  return;
}



HMENU__ * __thiscall CMFCPopupMenu::GetHMenu(CMFCPopupMenu *this)

{
  return *(HMENU__ **)(this + 0xea8);
}



int __thiscall CAtlAllocator::GetModuleCount(CAtlAllocator *this)

{
  code *pcVar1;
  int iVar2;
  
  if (this[0x28] == (CAtlAllocator)0x0) {
    iVar2 = 0;
  }
  else {
    if (*(int *)(this + 0x1c) == 0) {
      iVar2 = FID_conflict___CrtDbgReport
                        (2,L"f:\\dd\\vctools\\vc7libs\\ship\\atlmfc\\src\\atl\\atls\\allocate.cpp",
                         0x148,0,L"m_pProcess");
      if (iVar2 == 1) {
        pcVar1 = (code *)swi(3);
        iVar2 = (*pcVar1)();
        return iVar2;
      }
    }
    iVar2 = CAtlTraceProcess::ModuleCount(*(CAtlTraceProcess **)(this + 0x1c));
  }
  return iVar2;
}



CMFCRibbonCategory * __thiscall CMFCRibbonBar::GetActiveCategory(CMFCRibbonBar *this)

{
  return *(CMFCRibbonCategory **)(this + 0x710);
}



undefined4 __fastcall FID_conflict_GetGroupCaptionHeight(int param_1)

{
  return *(undefined4 *)(param_1 + 0x398);
}



void thunk_FUN_00904c10(void)

{
  return;
}



undefined4 __thiscall thunk_FUN_0079d360(undefined4 param_1,undefined4 param_2)

{
  CSimpleStringT<>(param_2);
  return param_1;
}



void __thiscall CMFCRibbonButton::SetParentRibbonBar(CMFCRibbonButton *this,CMFCRibbonBar *param_1)

{
  CObject *pCVar1;
  int iVar2;
  CMFCRibbonBaseElement **ppCVar3;
  int iStack_8;
  
  AfxAssertValidObject
            ((CObject *)this,"f:\\dd\\vctools\\vc7libs\\ship\\atlmfc\\src\\mfc\\afxribbonbutton.cpp"
             ,0x6cd);
  CMFCRibbonBaseElement::SetParentRibbonBar((CMFCRibbonBaseElement *)this,param_1);
  iStack_8 = 0;
  while( true ) {
    iVar2 = thunk_FUN_007fcfa0();
    if (iVar2 <= iStack_8) break;
    ppCVar3 = CArray<>::operator[]((CArray<> *)(this + 0x150),iStack_8);
    pCVar1 = (CObject *)*ppCVar3;
    AfxAssertValidObject
              (pCVar1,"f:\\dd\\vctools\\vc7libs\\ship\\atlmfc\\src\\mfc\\afxribbonbutton.cpp",0x6d4)
    ;
    (**(code **)(*(int *)pCVar1 + 0x9c))(param_1);
    iStack_8 = iStack_8 + 1;
  }
  return;
}



void __thiscall thunk_FUN_00866990(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x90) = param_2;
  return;
}



undefined4 __thiscall thunk_FUN_00904c40(undefined4 param_1,uint param_2)

{
  thunk_FUN_00904d10();
  if ((param_2 & 1) != 0) {
    thunk_FUN_006c4610(param_1);
  }
  return param_1;
}



CMFCToolBarInfo * __thiscall CMFCToolBarInfo::CMFCToolBarInfo(CMFCToolBarInfo *this)

{
  *(undefined4 *)this = 0;
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 0xc) = 0;
  *(undefined4 *)(this + 0x10) = 0;
  *(undefined4 *)(this + 0x14) = 0;
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined4 *)(this + 0x1c) = 0;
  return this;
}



long IUnknown::QueryInterface<>(IRowsetChange **param_1)

{
  long lVar1;
  
  lVar1 = (**(code **)*param_1)(param_1,&DAT_00b9af44);
  return lVar1;
}



undefined4 __thiscall GetReplaceString(int param_1,undefined4 param_2)

{
  thunk_FUN_006c4270(*(undefined4 *)(param_1 + 0xa8));
  return param_2;
}



void __thiscall CObject::AssertValid(CObject *this)

{
  code *pcVar1;
  int iVar2;
  
  if (this == (CObject *)0x0) {
    iVar2 = AfxAssertFailedLine("f:\\dd\\vctools\\vc7libs\\ship\\atlmfc\\src\\mfc\\objcore.cpp",0x6f
                               );
    if (iVar2 != 0) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  return;
}



long COleControlSite::XOleIPSite::GetWindow(HWND__ **param_1)

{
  int iVar1;
  int *in_stack_00000008;
  
  iVar1 = thunk_FUN_006d9400(param_1 + -0x33);
  *in_stack_00000008 = iVar1;
  return (-(uint)(*in_stack_00000008 != 0) & 0x7fffbffb) + 0x80004005;
}



uint HashKey<>(wchar_t *param_1)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  size_t sVar5;
  uint uStack_14;
  uint uStack_c;
  
  iVar2 = AfxIsValidString(param_1,-1);
  if ((iVar2 == 0) &&
     (iVar3 = AfxAssertFailedLine("f:\\dd\\vctools\\vc7libs\\ship\\atlmfc\\src\\mfc\\strcore.cpp",
                                  0x3d), iVar3 != 0)) {
    pcVar1 = (code *)swi(3);
    uVar4 = (*pcVar1)();
    return uVar4;
  }
  if (iVar2 == 0) {
    thunk_FUN_007113e0();
  }
  uStack_c = 0x811c9dc5;
  uStack_14 = 0;
  sVar5 = _wcslen(param_1);
  for (; uStack_14 < sVar5; uStack_14 = uStack_14 + sVar5 / 10 + 1) {
    uStack_c = uStack_c * 0x1000193 ^ (uint)(ushort)param_1[uStack_14];
  }
  return uStack_c;
}



long COleFrameHook::XOleCommandTarget::QueryStatus
               (_GUID *param_1,ulong param_2,_tagOLECMD *param_3,_tagOLECMDTEXT *param_4)

{
  CObject *pCVar1;
  _tagOLECMDTEXT *in_stack_00000014;
  long lStack_8;
  
  lStack_8 = -0x7ffbfefc;
  pCVar1 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_COleDocObjectItem_00bd4774,
                              (CObject *)param_1[-2].Data1);
  if (pCVar1 != (CObject *)0x0) {
    lStack_8 = _AfxQueryStatusOleCommandHelper
                         ((CCmdTarget *)pCVar1,(_GUID *)param_2,(ulong)param_3,(_tagOLECMD *)param_4
                          ,in_stack_00000014);
  }
  return lStack_8;
}



CMFCCaptionButtonEx * __thiscall CFrameImpl::GetSysButton(CFrameImpl *this,uint param_1)

{
  CObject *pCVar1;
  undefined4 *puVar2;
  int iStack_8;
  
  iStack_8 = thunk_FUN_006ccba0(this);
  do {
    if (iStack_8 == 0) {
      return (CMFCCaptionButtonEx *)0x0;
    }
    puVar2 = (undefined4 *)::GetNext(&iStack_8);
    pCVar1 = (CObject *)*puVar2;
    AfxAssertValidObject
              (pCVar1,"f:\\dd\\vctools\\vc7libs\\ship\\atlmfc\\src\\mfc\\afxframeimpl.cpp",0x7f0);
  } while (*(uint *)(pCVar1 + 0x1c) != param_1);
  return (CMFCCaptionButtonEx *)pCVar1;
}



undefined4 * __fastcall thunk_FUN_00716e80(undefined4 *param_1)

{
  *param_1 = 0;
  return param_1;
}



undefined4 thunk_FUN_00b3d050(undefined4 param_1,undefined4 param_2)

{
  return param_2;
}



void __thiscall CTooltipManager::~CTooltipManager(CTooltipManager *this)

{
  uint uVar1;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &LAB_00b61218;
  pvStack_10 = ExceptionList;
  uVar1 = DAT_00c4a700 ^ (uint)&stack0xfffffffc;
  ExceptionList = &pvStack_10;
  *(undefined ***)this = vftable;
  uStack_8 = 0;
  DAT_00c57d98 = 0;
  CList<>::~CList<>((CList<> *)(this + 0x26c));
  uStack_8 = 0xffffffff;
  thunk_FUN_006c98a0(uVar1);
  ExceptionList = pvStack_10;
  return;
}



void __fastcall thunk_FUN_0083ee80(CControlBar *param_1)

{
  CControlBar::~CControlBar(param_1);
  return;
}



undefined4 __fastcall FID_conflict_GetTooltipFixedWidthLargeImage(int param_1)

{
  return *(undefined4 *)(param_1 + 0x2c8);
}



Replicator * __thiscall Replicator::operator+=(Replicator *this,DName *param_1)

{
  int iVar1;
  int iStack_14;
  
  iVar1 = isFull(this);
  if (iVar1 == 0) {
    iVar1 = isFull((Replicator *)param_1);
    if (iVar1 == 0) {
      iVar1 = operator_new(8,&DAT_00c5afa4,0);
      if (iVar1 == 0) {
        iStack_14 = 0;
      }
      else {
        iStack_14 = thunk_FUN_00b19670(param_1);
      }
      if (iStack_14 != 0) {
        *(int *)this = *(int *)this + 1;
        *(int *)(this + *(int *)this * 4 + 4) = iStack_14;
      }
    }
  }
  return this;
}



uint __thiscall ATL::CComBSTR::Length(CComBSTR *this)

{
  uint uVar1;
  
  uVar1 = Ordinal_7(*(undefined4 *)this);
  return uVar1;
}



undefined ** thunk_FUN_00a63cb0(void)

{
  return &PTR_s_CTasksPaneNavigateButton_00c4955c;
}



void __fastcall thunk_FUN_00860db0(undefined4 param_1)

{
  thunk_FUN_00860dd0(param_1);
  return;
}



int __thiscall
CMFCVisualManagerOffice2003::GetToolTipInfo
          (CMFCVisualManagerOffice2003 *this,CMFCToolTipInfo *param_1,uint param_2)

{
  int iVar1;
  
  if ((8 < DAT_00c5593c) &&
     (iVar1 = AFX_GLOBAL_DATA::IsHighContrastMode((AFX_GLOBAL_DATA *)&DAT_00c55790), iVar1 == 0)) {
    *(undefined4 *)(param_1 + 0x10) = 1;
    *(undefined4 *)(param_1 + 8) = 1;
    *(undefined4 *)(param_1 + 4) = 1;
    *(undefined4 *)(param_1 + 0xc) = 1;
    *(undefined4 *)(param_1 + 0x14) = 0;
    *(undefined4 *)(param_1 + 0x24) = DAT_00c557e4;
    *(undefined4 *)(param_1 + 0x28) = DAT_00c557dc;
    *(undefined4 *)(param_1 + 0x2c) = DAT_00c557f0;
    *(undefined4 *)(param_1 + 0x30) = DAT_00c557e0;
    return 1;
  }
  iVar1 = CMFCVisualManager::GetToolTipInfo((CMFCVisualManager *)this,param_1,0xffffffff);
  return iVar1;
}



void __thiscall ATL::CHeapPtrBase<>::Attach(CHeapPtrBase<> *this,wchar_t *param_1)

{
  CComAllocator::Free(*(void **)this);
  *(wchar_t **)this = param_1;
  return;
}



ulong _AfxMapClientArea(HWND__ *param_1,tagPOINT param_2)

{
  code *pcVar1;
  BOOL BVar2;
  int iVar3;
  ulong uVar4;
  uint uVar5;
  ulong uStack_c;
  
  do {
    BVar2 = IsWindow(param_1);
    if ((BVar2 == 0) &&
       (iVar3 = AfxAssertFailedLine("f:\\dd\\vctools\\vc7libs\\ship\\atlmfc\\src\\mfc\\winfrmx.cpp",
                                    0x10a), iVar3 != 0)) {
      pcVar1 = (code *)swi(3);
      uVar4 = (*pcVar1)();
      return uVar4;
    }
    ScreenToClient(param_1,&param_2);
    uStack_c = SendMessageA(param_1,0x366,0,param_2.x & 0xffffU | param_2.y << 0x10);
    ClientToScreen(param_1,&param_2);
    uVar5 = GetWindowLongA(param_1,-0x10);
  } while ((((uVar5 & 0x40000000) != 0) && (param_1 = GetParent(param_1), param_1 != (HWND)0x0)) &&
          (uStack_c == 0));
  if (uStack_c == 0) {
    uStack_c = 0xffffffff;
  }
  return uStack_c;
}



int __thiscall CRect::operator==(CRect *this,tagRECT *param_1)

{
  BOOL BVar1;
  
  BVar1 = ::EqualRect((RECT *)this,param_1);
  return BVar1;
}



CDC * __thiscall
CMFCRibbonStatusBarCustomizeButton::GetIntermediateSize
          (CMFCRibbonStatusBarCustomizeButton *this,CDC *param_1)

{
  char cVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  CDC *in_stack_00000008;
  CStringT<> aCStack_2c [8];
  undefined1 auStack_24 [4];
  CObject *pCStack_20;
  int iStack_1c;
  int iStack_18;
  CStringT<> aCStack_14 [4];
  void *pvStack_10;
  undefined1 *puStack_c;
  int iStack_8;
  
  iStack_8 = 0xffffffff;
  puStack_c = &LAB_00b67dd0;
  pvStack_10 = ExceptionList;
  uVar2 = DAT_00c4a700 ^ (uint)&stack0xfffffffc;
  ExceptionList = &pvStack_10;
  AfxAssertValidObject
            ((CObject *)in_stack_00000008,
             "f:\\dd\\vctools\\vc7libs\\ship\\atlmfc\\src\\mfc\\afxribbonstatusbar.cpp",0x38);
  pCStack_20 = *(CObject **)(this + 0x44);
  AfxAssertValidObject
            (pCStack_20,"f:\\dd\\vctools\\vc7libs\\ship\\atlmfc\\src\\mfc\\afxribbonstatusbar.cpp",
             0x3b);
  CMFCRibbonButton::GetIntermediateSize((CMFCRibbonButton *)this,(CDC *)&iStack_1c);
  iStack_1c = iStack_1c + iStack_18 * 2;
  uVar3 = thunk_FUN_00951970(uVar2);
  thunk_FUN_006c4270(uVar3);
  iStack_8 = 0;
  iVar4 = thunk_FUN_006bf080();
  if (0x32 < iVar4) {
    uVar3 = ATL::CStringT<>::Left(aCStack_14,(int)auStack_24);
    iStack_8._0_1_ = 1;
    thunk_FUN_006c9180(uVar3);
    iStack_8 = (uint)iStack_8._1_3_ << 8;
    thunk_FUN_006bef70();
  }
  cVar1 = thunk_FUN_006b82d0();
  if (cVar1 == '\0') {
    piVar5 = (int *)CDC::GetTextExtent(in_stack_00000008,aCStack_2c);
    iStack_1c = *piVar5 + *(int *)(this + 0xbc) * 4 + iStack_1c;
  }
  *(int *)param_1 = iStack_1c;
  *(int *)(param_1 + 4) = iStack_18;
  iStack_8 = 0xffffffff;
  thunk_FUN_006bef70();
  ExceptionList = pvStack_10;
  return param_1;
}



void __thiscall CDC::DPtoLP(CDC *this,tagRECT *param_1)

{
  code *pcVar1;
  int iVar2;
  BOOL BVar3;
  
  if (*(int *)(this + 8) == 0) {
    iVar2 = AfxAssertFailedLine("f:\\dd\\vctools\\vc7libs\\ship\\atlmfc\\include\\afxwin1.inl",0x1b9
                               );
    if (iVar2 != 0) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  BVar3 = ::DPtoLP(*(HDC *)(this + 8),(LPPOINT)param_1,2);
  if (BVar3 == 0) {
    iVar2 = AfxAssertFailedLine("f:\\dd\\vctools\\vc7libs\\ship\\atlmfc\\include\\afxwin1.inl",0x1b9
                               );
    if (iVar2 != 0) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  return;
}



int __thiscall COleLinkingDoc::OnNewDocument(COleLinkingDoc *this)

{
  int iVar1;
  
  AfxAssertValidObject
            ((CObject *)this,"f:\\dd\\vctools\\vc7libs\\ship\\atlmfc\\src\\mfc\\olelink.cpp",0x9a);
  Revoke(this);
  (**(code **)(*(int *)this + 0x150))(0,1);
  iVar1 = COleDocument::OnNewDocument((COleDocument *)this);
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = CDocument::IsSearchAndOrganizeHandler((CDocument *)this);
    if (iVar1 == 0) {
      AfxOleSetUserCtrl(1);
    }
    iVar1 = 1;
  }
  return iVar1;
}



void __thiscall
CMFCVisualManager::OnFillOutlookPageButton
          (CMFCVisualManager *this,CDC *param_1,CRect *param_2,int param_3,int param_4,
          ulong *param_5)

{
  tagRECT *ptVar1;
  CBrush *pCVar2;
  
  AfxAssertValidObject
            ((CObject *)param_1,
             "f:\\dd\\vctools\\vc7libs\\ship\\atlmfc\\src\\mfc\\afxvisualmanager.cpp",0x6f9);
  pCVar2 = (CBrush *)&DAT_00c55858;
  ptVar1 = CRect::operator_struct_tagRECT_const_(param_2);
  CDC::FillRect(param_1,ptVar1,pCVar2);
  *param_5 = DAT_00c557f0;
  return;
}



void __thiscall CPaneDivider::StopTracking(CPaneDivider *this,int param_1)

{
  tagSIZE tVar1;
  tagSIZE tVar2;
  tagPOINT tVar3;
  tagPOINT *ptVar4;
  CPoint *pCVar5;
  tagSIZE *ptVar6;
  undefined1 *puVar7;
  LONG LVar8;
  undefined1 auStack_70 [8];
  LONG LStack_68;
  undefined4 uStack_64;
  LONG LStack_60;
  LONG LStack_5c;
  CPoint aCStack_58 [8];
  LONG LStack_50;
  LONG LStack_4c;
  tagRECT tStack_48;
  CRect aCStack_38 [16];
  uint uStack_28;
  CWindowDC aCStack_24 [20];
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_00b65838;
  pvStack_10 = ExceptionList;
  uStack_28 = DAT_00c4a700 ^ (uint)&stack0xfffffffc;
  ExceptionList = &pvStack_10;
  if (this[0x118] != (CPaneDivider)0x0) {
    thunk_FUN_00b31aa0(uStack_28);
    ptVar4 = (tagPOINT *)thunk_FUN_00b31df0();
    CWnd::ClientToScreen((CWnd *)this,ptVar4);
    pCVar5 = CRect::TopLeft(aCStack_38);
    LVar8 = *(LONG *)pCVar5;
    uStack_64 = *(undefined4 *)(pCVar5 + 4);
    puVar7 = auStack_70;
    LStack_68 = LVar8;
    pCVar5 = CRect::TopLeft((CRect *)(this + 0x124));
    tVar3.y = LVar8;
    tVar3.x = (LONG)puVar7;
    ptVar6 = (tagSIZE *)CPoint::operator-(pCVar5,tVar3);
    LStack_60 = ptVar6->cx;
    LStack_5c = ptVar6->cy;
    CPoint::CPoint(aCStack_58,*ptVar6);
    thunk_FUN_00b31aa0();
    thunk_FUN_00b31f60();
    CWindowDC::CWindowDC(aCStack_24,(CWnd *)0x0);
    uStack_8 = 0;
    thunk_FUN_00b31090(*(int *)(this + 0x108) / 2,*(int *)(this + 0x108) / 2);
    tVar1.cy = LStack_4c;
    tVar1.cx = LStack_50;
    tVar2.cy = LStack_4c;
    tVar2.cx = LStack_50;
    CDC::DrawDragRect((CDC *)aCStack_24,&tStack_48,tVar1,(tagRECT *)(this + 0x124),tVar2,
                      (CBrush *)0x0,(CBrush *)0x0);
    if (param_1 != 0) {
      (**(code **)(*(int *)this + 0x270))(aCStack_58,1);
    }
    thunk_FUN_00b31f60();
    ReleaseCapture();
    this[0x118] = (CPaneDivider)0x0;
    if (*(int *)(this + 0x158) != 0) {
      (**(code **)(**(int **)(this + 0x158) + 0x88))(0);
    }
    uStack_8 = 0xffffffff;
    CWindowDC::~CWindowDC(aCStack_24);
  }
  ExceptionList = pvStack_10;
  __security_check_cookie(uStack_28 ^ (uint)&stack0xfffffffc);
  return;
}



void __thiscall CMFCCustomizeButton::OnCancelMode(CMFCCustomizeButton *this)

{
  tagSIZE *ptVar1;
  int iVar2;
  
  CMFCToolBarMenuButton::OnCancelMode((CMFCToolBarMenuButton *)this);
  ptVar1 = (tagSIZE *)thunk_FUN_00b31090(0,0);
  iVar2 = CSize::operator!=((CSize *)(this + 0xec),*ptVar1);
  if ((iVar2 != 0) && (*(int *)(this + 0xf8) != 0)) {
    iVar2 = CMFCToolBar::ButtonToIndex(*(CMFCToolBar **)(this + 0xf8),(CMFCToolBarButton *)this);
    if (-1 < iVar2) {
      CMFCToolBar::InvalidateButton(*(CMFCToolBar **)(this + 0xf8),iVar2);
    }
  }
  return;
}



undefined4 * __thiscall
CComCtlWrapper::GetProcAddress_ImageList_SetDragCursorImage(CComCtlWrapper *this)

{
  char cVar1;
  HINSTANCE__ *hModule;
  FARPROC pFVar2;
  undefined4 *in_stack_00000004;
  char *lpProcName;
  
  cVar1 = ::FID_conflict_operator_();
  if (cVar1 != '\0') {
    lpProcName = "ImageList_SetDragCursorImage";
    hModule = CDllIsolationWrapperBase::GetModuleHandleA((CDllIsolationWrapperBase *)this);
    pFVar2 = GetProcAddress(hModule,lpProcName);
    ::FID_conflict_operator_(pFVar2);
  }
  *in_stack_00000004 = *(undefined4 *)(this + 0x78);
  return in_stack_00000004;
}



int __cdecl FID_conflict___vwprintf_s_l(wchar_t *_Format,_locale_t _Locale,va_list _ArgList)

{
  int iVar1;
  
  iVar1 = vprintf_helper(__output_l,_Format,_Locale,_ArgList);
  return iVar1;
}



void __fastcall RemoveAll(CObject *param_1)

{
  int iStack_c;
  uint uStack_8;
  
  AfxAssertValidObject(param_1,"f:\\dd\\vctools\\vc7libs\\ship\\atlmfc\\include\\afxtempl.h",0x5a2);
  if (*(int *)(param_1 + 4) != 0) {
    for (uStack_8 = 0; uStack_8 < *(uint *)(param_1 + 8); uStack_8 = uStack_8 + 1) {
      for (iStack_c = *(int *)(*(int *)(param_1 + 4) + uStack_8 * 4); iStack_c != 0;
          iStack_c = *(int *)(iStack_c + 8)) {
      }
    }
    abs(*(long *)(param_1 + 4));
    *(undefined4 *)(param_1 + 4) = 0;
  }
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  CPlex::FreeDataChain(*(CPlex **)(param_1 + 0x14));
  *(undefined4 *)(param_1 + 0x14) = 0;
  return;
}



ulong __thiscall CPaneDivider::GetPaneDividerStyle(CPaneDivider *this)

{
  return *(ulong *)(this + 0x104);
}



undefined4 __thiscall thunk_FUN_0078a9a0(undefined4 param_1,uint param_2)

{
  FID_conflict__CProgressCtrl();
  if ((param_2 & 1) != 0) {
    thunk_FUN_006c4610(param_1);
  }
  return param_1;
}



long CEnumArray::XEnumVOID::QueryInterface(_GUID *param_1,void **param_2)

{
  ulong uVar1;
  void **in_stack_0000000c;
  
  uVar1 = CCmdTarget::ExternalQueryInterface
                    ((CCmdTarget *)param_1[-4].Data4,param_2,in_stack_0000000c);
  return uVar1;
}



void __thiscall
CDocument::CDocumentAdapter::RemoveChunk(CDocumentAdapter *this,_GUID *param_1,ulong param_2)

{
  char *pcVar1;
  CTraceFileAndLineInfo *this_00;
  undefined2 *puVar2;
  char *pcVar3;
  
  AfxAssertValidObject
            (*(CObject **)(this + 8),"f:\\dd\\vctools\\vc7libs\\ship\\atlmfc\\include\\afxwin.h",
             0x175d);
  if (*(int *)(this + 8) == 0) {
    pcVar3 = "CDocumentAdapter::RemoveChunk is called, but its CDocument is NULL.";
    puVar2 = &DAT_00b8a004;
    pcVar1 = (char *)thunk_FUN_006bf580("f:\\dd\\vctools\\vc7libs\\ship\\atlmfc\\include\\afxwin.h",
                                        0x1760);
    ATL::CTraceFileAndLineInfo::operator()(this_00,pcVar1,puVar2,pcVar3);
  }
  else {
    (**(code **)(**(int **)(this + 8) + 0xd0))(param_1,param_2);
  }
  return;
}



long __thiscall CCheckListBox::OnLBAddString(CCheckListBox *this,uint param_1,long param_2)

{
  uint uVar1;
  ulong uVar2;
  AFX_CHECK_DATA *this_00;
  int iVar3;
  int iStack_2c;
  int iStack_18;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_00b52807;
  pvStack_10 = ExceptionList;
  uVar1 = DAT_00c4a700 ^ (uint)&stack0xfffffffc;
  ExceptionList = &pvStack_10;
  iStack_18 = 0;
  uVar2 = CWnd::GetExStyle((CWnd *)this);
  if ((uVar2 & 0x40) == 0) {
    this_00 = (AFX_CHECK_DATA *)
              operator_new(0xc,"f:\\dd\\vctools\\vc7libs\\ship\\atlmfc\\src\\mfc\\winctrl3.cpp",
                           0x325);
    uStack_8 = 0;
    if (this_00 == (AFX_CHECK_DATA *)0x0) {
      iStack_2c = 0;
    }
    else {
      iStack_2c = AFX_CHECK_DATA::AFX_CHECK_DATA(this_00);
    }
    uStack_8 = 0xffffffff;
    iStack_18 = iStack_2c;
    *(long *)(iStack_2c + 8) = param_2;
    param_2 = iStack_2c;
  }
  iVar3 = (**(code **)(*(int *)this + 0x124))(0x180,param_1,param_2,uVar1);
  if ((iVar3 == -1) && (iStack_18 != 0)) {
    thunk_FUN_006c4c90(iStack_18);
  }
  ExceptionList = pvStack_10;
  return iVar3;
}



exception * __thiscall thunk_FUN_00ac7d60(exception *param_1,exception *param_2)

{
  std::exception::exception(param_1,param_2);
  *(undefined ***)param_1 = std::bad_typeid::vftable;
  return param_1;
}



void __thiscall
CMFCPropertyGridCtrl::EnsureVisible
          (CMFCPropertyGridCtrl *this,CMFCPropertyGridProperty *param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  CMFCPropertyGridProperty *pCVar3;
  tagRECT *ptVar4;
  int iVar5;
  CRgn *pCVar6;
  uint uVar7;
  CMFCPropertyGridProperty *pCStack_2c;
  
  uVar2 = DAT_00c4a700 ^ (uint)&stack0xfffffffc;
  AfxAssertValidObject
            ((CObject *)this,
             "f:\\dd\\vctools\\vc7libs\\ship\\atlmfc\\src\\mfc\\afxpropertygridctrl.cpp",0x1274);
  AfxAssertValidObject
            ((CObject *)param_1,
             "f:\\dd\\vctools\\vc7libs\\ship\\atlmfc\\src\\mfc\\afxpropertygridctrl.cpp",0x1275);
  if (*(int *)(this + 0x314) != 0) {
    if ((param_2 != 0) &&
       (pCVar3 = CMFCPropertyGridProperty::GetParent(param_1),
       pCVar3 != (CMFCPropertyGridProperty *)0x0)) {
      pCStack_2c = param_1;
      while (pCStack_2c = CMFCPropertyGridProperty::GetParent(pCStack_2c),
            pCStack_2c != (CMFCPropertyGridProperty *)0x0) {
        AfxAssertValidObject
                  ((CObject *)pCStack_2c,
                   "f:\\dd\\vctools\\vc7libs\\ship\\atlmfc\\src\\mfc\\afxpropertygridctrl.cpp",
                   0x1282);
        CMFCPropertyGridProperty::Expand(pCStack_2c,1);
      }
    }
    iVar5 = *(int *)(param_1 + 0x30);
    iVar1 = *(int *)(param_1 + 0x38);
    if ((iVar5 < *(int *)(this + 0x2ec) + -1) || (*(int *)(this + 0x2f4) < iVar1)) {
      thunk_FUN_00b31f60();
      uVar7 = 0x105;
      pCVar6 = (CRgn *)0x0;
      ptVar4 = (tagRECT *)thunk_FUN_00b31df0();
      CWnd::RedrawWindow((CWnd *)this,ptVar4,pCVar6,uVar7);
      if ((iVar5 < *(int *)(this + 0x2ec) + -1) && (*(int *)(this + 0x2ec) + -1 <= iVar1)) {
        OnVScroll(this,0,0,(CScrollBar *)0x0);
      }
      else if ((*(int *)(this + 0x2f4) < iVar1) && (iVar5 <= *(int *)(this + 0x2f4))) {
        OnVScroll(this,1,0,(CScrollBar *)0x0);
      }
      else {
        OnVScroll(this,4,iVar5 / *(int *)(this + 0x314) - *(int *)(this + 0x31c),(CScrollBar *)0x0);
      }
      iVar5 = thunk_FUN_00b31e30();
      if (iVar5 == 0) {
        (**(code **)(*(int *)param_1 + 0x80))();
        uVar7 = 0x105;
        pCVar6 = (CRgn *)0x0;
        ptVar4 = (tagRECT *)thunk_FUN_00b31df0();
        CWnd::RedrawWindow((CWnd *)this,ptVar4,pCVar6,uVar7);
      }
    }
  }
  __security_check_cookie(uVar2 ^ (uint)&stack0xfffffffc);
  return;
}



int __thiscall CWnd::GetScrollPos(CWnd *this,int param_1)

{
  CScrollBar *this_00;
  int iVar1;
  
  this_00 = (CScrollBar *)(**(code **)(*(int *)this + 0x80))(param_1);
  if (this_00 == (CScrollBar *)0x0) {
    iVar1 = ::GetScrollPos(*(HWND *)(this + 0x20),param_1);
  }
  else {
    iVar1 = CScrollBar::GetScrollPos(this_00);
  }
  return iVar1;
}



void __thiscall
InsertItem(CTreeCtrl *param_1,char *param_2,int param_3,int param_4,_TREEITEM *param_5,
          _TREEITEM *param_6)

{
  code *pcVar1;
  BOOL BVar2;
  int iVar3;
  
  BVar2 = IsWindow(*(HWND *)(param_1 + 0x20));
  if (BVar2 == 0) {
    iVar3 = AfxAssertFailedLine("f:\\dd\\vctools\\vc7libs\\ship\\atlmfc\\include\\afxcmn.inl",0x10a)
    ;
    if (iVar3 != 0) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  CTreeCtrl::InsertItem(param_1,0x23,param_2,param_3,param_4,0,0,0,param_5,param_6);
  return;
}



int __thiscall CFrameImpl::DeleteToolBar(CFrameImpl *this,CMFCToolBar *param_1)

{
  __POSITION *p_Var1;
  int iVar2;
  undefined4 uVar3;
  CObject *pCVar4;
  CObject *pCVar5;
  
  AfxAssertValidObject
            (*(CObject **)(this + 0xb0),
             "f:\\dd\\vctools\\vc7libs\\ship\\atlmfc\\src\\mfc\\afxframeimpl.cpp",0x222);
  AfxAssertValidObject
            ((CObject *)param_1,"f:\\dd\\vctools\\vc7libs\\ship\\atlmfc\\src\\mfc\\afxframeimpl.cpp"
             ,0x223);
  p_Var1 = CObList::Find((CObList *)(this + 0x54),(CObject *)param_1,(__POSITION *)0x0);
  if (p_Var1 == (__POSITION *)0x0) {
    iVar2 = 0;
  }
  else {
    CObList::RemoveAt((CObList *)(this + 0x54),p_Var1);
    uVar3 = thunk_FUN_006bf040(0xffffffff,0xffffffff);
    (**(code **)(*(int *)param_1 + 0x388))(uVar3);
    pCVar4 = (CObject *)(**(code **)(*(int *)param_1 + 0x1a4))();
    pCVar5 = (CObject *)(**(code **)(*(int *)param_1 + 0x22c))(0);
    if (pCVar4 == (CObject *)0x0) {
      if (pCVar5 != (CObject *)0x0) {
        AfxAssertValidObject
                  (pCVar5,"f:\\dd\\vctools\\vc7libs\\ship\\atlmfc\\src\\mfc\\afxframeimpl.cpp",0x237
                  );
        (**(code **)(*(int *)pCVar5 + 0x180))(param_1,0,0);
      }
    }
    else {
      AfxAssertValidObject
                (pCVar4,"f:\\dd\\vctools\\vc7libs\\ship\\atlmfc\\src\\mfc\\afxframeimpl.cpp",0x232);
      (**(code **)(*(int *)pCVar4 + 0x280))(param_1,0);
    }
    (**(code **)(*(int *)param_1 + 0x68))();
    if (param_1 != (CMFCToolBar *)0x0) {
      (**(code **)(*(int *)param_1 + 4))(1);
    }
    (**(code **)(**(int **)(this + 0xb0) + 0x17c))(1);
    iVar2 = 1;
  }
  return iVar2;
}



void __fastcall thunk_FUN_006d0c80(CObject *param_1)

{
  CObject::AssertValid(param_1);
  return;
}



undefined ** thunk_FUN_00a29470(void)

{
  return &PTR_s_CMFCToolBarsCommandsPropertyPage_00bcc318;
}



int __thiscall
CMFCPropertyGridToolTipCtrl::PreTranslateMessage(CMFCPropertyGridToolTipCtrl *this,tagMSG *param_1)

{
  int iVar1;
  tagPOINT tStack_10;
  uint uStack_8;
  
  if ((param_1->message < 0x200) || (0x20e < param_1->message)) {
    iVar1 = CWnd::PreTranslateMessage((CWnd *)this,param_1);
  }
  else {
    if (param_1->message != 0x200) {
      Hide(this);
    }
    AfxAssertValidObject
              (*(CObject **)(this + 0x90),
               "f:\\dd\\vctools\\vc7libs\\ship\\atlmfc\\src\\mfc\\afxpropertygridtooltipctrl.cpp",
               0x11e);
    thunk_FUN_00b31510(param_1->lParam & 0xffff,(uint)param_1->lParam >> 0x10);
    CWnd::MapWindowPoints((CWnd *)this,*(CWnd **)(this + 0x90),&tStack_10,1);
    uStack_8 = tStack_10.x & 0xffffU | tStack_10.y << 0x10;
    CWnd::SendMessageA(*(CWnd **)(this + 0x90),param_1->message,param_1->wParam,uStack_8);
    iVar1 = 1;
  }
  return iVar1;
}



void __thiscall CMiniDockFrameWnd::~CMiniDockFrameWnd(CMiniDockFrameWnd *this)

{
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &LAB_00b5be78;
