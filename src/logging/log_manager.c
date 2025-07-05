/*
 * 日誌與錯誤管理模組
 * 行數範圍：28001-30000
 */

    *(int *)(param_1 + 4) = iStack_14;
    *(int *)(param_1 + 8) = iStack_10;
    *(int *)(param_1 + 0xc) = iStack_c;
  }
  __security_check_cookie(uStack_8 ^ (uint)&stack0xfffffffc);
  return;
}



void __thiscall CMFCColorPropertySheet::ResizeControl(CMFCColorPropertySheet *this)

{
  tagPOINT *ptVar1;
  int iVar2;
  int iVar3;
  tagRECT *ptVar4;
  uint uVar5;
  tagPOINT atStack_40 [2];
  CPropertyPage *pCStack_30;
  int iStack_2c;
  uint uStack_18;
  int iStack_14;
  int iStack_10;
  int iStack_c;
  CTabCtrl *pCStack_8;
  
  uStack_18 = DAT_00c4a700 ^ (uint)&stack0xfffffffc;
  pCStack_8 = CPropertySheet::GetTabControl((CPropertySheet *)this);
  if (pCStack_8 != (CTabCtrl *)0x0) {
    thunk_FUN_00b31aa0();
    ptVar1 = (tagPOINT *)thunk_FUN_00b31df0();
    CWnd::ScreenToClient((CWnd *)this,ptVar1);
    uVar5 = 0x14;
    iVar2 = thunk_FUN_00b31c60();
    iVar3 = thunk_FUN_00b31c40();
    CWnd::SetWindowPos((CWnd *)pCStack_8,(CWnd *)0x0,0,0,iVar3,iVar2,uVar5);
    iStack_c = CPropertySheet::GetPageCount((CPropertySheet *)this);
    iStack_14 = GetSystemMetrics(0x2d);
    iStack_10 = GetSystemMetrics(0x2e);
    for (iStack_2c = 0; iStack_2c <= iStack_c + -1; iStack_2c = iStack_2c + 1) {
      pCStack_30 = CPropertySheet::GetPage((CPropertySheet *)this,iStack_2c);
      if ((pCStack_30 != (CPropertyPage *)0x0) && (*(int *)(pCStack_30 + 0x20) != 0)) {
        thunk_FUN_00b31aa0();
        CWnd::ClientToScreen((CWnd *)pCStack_30,atStack_40);
        ptVar4 = (tagRECT *)thunk_FUN_00b31df0();
        CWnd::ScreenToClient((CWnd *)pCStack_8,ptVar4);
        uVar5 = 0x14;
        iVar2 = thunk_FUN_00b31c60();
        iVar2 = iVar2 - (atStack_40[0].y + iStack_10);
        iVar3 = thunk_FUN_00b31c40();
        CWnd::SetWindowPos((CWnd *)pCStack_30,(CWnd *)0x0,atStack_40[0].x,atStack_40[0].y,
                           iVar3 + iStack_14 * -3,iVar2,uVar5);
      }
    }
  }
  __security_check_cookie(uStack_18 ^ (uint)&stack0xfffffffc);
  return;
}



undefined4 * __fastcall thunk_FUN_00785600(undefined4 *param_1)

{
  *param_1 = 0;
  return param_1;
}



int __thiscall CMFCRibbonPanel::GetIndex(CMFCRibbonPanel *this,CMFCRibbonBaseElement *param_1)

{
  CObject *pCVar1;
  int iVar2;
  CMFCRibbonBaseElement **ppCVar3;
  int iStack_8;
  
  AfxAssertValidObject
            ((CObject *)this,"f:\\dd\\vctools\\vc7libs\\ship\\atlmfc\\src\\mfc\\afxribbonpanel.cpp",
             0xa7b);
  iStack_8 = 0;
  while( true ) {
    iVar2 = thunk_FUN_007fcfa0();
    if (iVar2 <= iStack_8) {
      return -1;
    }
    ppCVar3 = CArray<>::operator[]((CArray<> *)(this + 0x254),iStack_8);
    pCVar1 = (CObject *)*ppCVar3;
    AfxAssertValidObject
              (pCVar1,"f:\\dd\\vctools\\vc7libs\\ship\\atlmfc\\src\\mfc\\afxribbonpanel.cpp",0xa80);
    if (pCVar1 == (CObject *)param_1) break;
    iStack_8 = iStack_8 + 1;
  }
  return iStack_8;
}



undefined4 __cdecl UnDecorator::getStorageConvention(void)

{
  undefined4 in_stack_00000004;
  
  getDataIndirectType();
  return in_stack_00000004;
}



void __thiscall COleClientItem::DeactivateUI(COleClientItem *this)

{
  code *pcVar1;
  int iVar2;
  uint uVar3;
  IUnknown *This;
  HRESULT HVar4;
  COleClientItem *this_00;
  
  AfxAssertValidObject
            ((CObject *)this,"f:\\dd\\vctools\\vc7libs\\ship\\atlmfc\\src\\mfc\\olecli2.cpp",0x35a);
  iVar2._0_2_ = ((IID *)((int)this + 0x20))->Data2;
  iVar2._2_2_ = ((IID *)((int)this + 0x20))->Data3;
  if (iVar2 == 0) {
    iVar2 = AfxAssertFailedLine("f:\\dd\\vctools\\vc7libs\\ship\\atlmfc\\src\\mfc\\olecli2.cpp",
                                0x35b);
    if (iVar2 != 0) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  uVar3 = GetItemState(this);
  if (uVar3 != 4) {
    iVar2 = AfxAssertFailedLine("f:\\dd\\vctools\\vc7libs\\ship\\atlmfc\\src\\mfc\\olecli2.cpp",
                                0x35c);
    if (iVar2 != 0) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  This = _AfxQueryInterface(*(IUnknown **)&((IID *)((int)this + 0x20))->Data2,(_GUID *)&DAT_00bf938c
                           );
  if (This == (IUnknown *)0x0) {
    Close(this,0);
  }
  else {
    HVar4 = (*This->lpVtbl[2].QueryInterface)(This,(IID *)this,&This->lpVtbl);
    ((IID *)((int)this + 0x30))->Data2 = (short)HVar4;
    ((IID *)((int)this + 0x30))->Data3 = (short)((uint)HVar4 >> 0x10);
    this_00 = (COleClientItem *)0x9e7bc4;
    (*This->lpVtbl->Release)(This);
    if (*(int *)(this_00 + 0x34) < 0) {
      Close(this_00,0);
    }
    else if (*(int *)(this_00 + 0x50) == 4) {
      *(undefined4 *)(this_00 + 0x50) = 3;
    }
  }
  return;
}



int __thiscall CMFCToolBarComboBoxButton::IsOwnerOf(CMFCToolBarComboBoxButton *this,HWND__ *param_1)

{
  int iVar1;
  HWND__ *pHVar2;
  HWND pHVar3;
  BOOL BVar4;
  
  iVar1 = thunk_FUN_006d9400(this);
  if (iVar1 != 0) {
    pHVar2 = (HWND__ *)thunk_FUN_006d9400(this);
    if (pHVar2 == param_1) {
      return 1;
    }
    pHVar2 = param_1;
    pHVar3 = (HWND)thunk_FUN_006d9400();
    BVar4 = IsChild(pHVar3,pHVar2);
    if (BVar4 != 0) {
      return 1;
    }
  }
  iVar1 = thunk_FUN_006d9400(this);
  if (iVar1 == 0) {
LAB_008da87b:
    iVar1 = 0;
  }
  else {
    pHVar2 = (HWND__ *)thunk_FUN_006d9400(this);
    if (pHVar2 != param_1) {
      pHVar3 = (HWND)thunk_FUN_006d9400();
      BVar4 = IsChild(pHVar3,param_1);
      if (BVar4 == 0) goto LAB_008da87b;
    }
    iVar1 = 1;
  }
  return iVar1;
}



int __thiscall CButton::GetCheck(CButton *this)

{
  code *pcVar1;
  BOOL BVar2;
  int iVar3;
  LRESULT LVar4;
  
  BVar2 = IsWindow(*(HWND *)(this + 0x20));
  if (BVar2 == 0) {
    iVar3 = AfxAssertFailedLine("f:\\dd\\vctools\\vc7libs\\ship\\atlmfc\\include\\afxwin2.inl",0x2cc
                               );
    if (iVar3 != 0) {
      pcVar1 = (code *)swi(3);
      iVar3 = (*pcVar1)();
      return iVar3;
    }
  }
  LVar4 = SendMessageA(*(HWND *)(this + 0x20),0xf0,0,0);
  return LVar4;
}



COlePasteSpecialDialog * __thiscall thunk_FUN_00a97080(COlePasteSpecialDialog *param_1,uint param_2)

{
  COlePasteSpecialDialog::~COlePasteSpecialDialog(param_1);
  if ((param_2 & 1) != 0) {
    thunk_FUN_006c4610(param_1);
  }
  return param_1;
}



int __thiscall CToolTipCtrl::DestroyToolTipCtrl(CToolTipCtrl *this)

{
  (**(code **)(*(int *)this + 0x68))();
  if (this != (CToolTipCtrl *)0x0) {
    (**(code **)(*(int *)this + 4))(1);
  }
  return 1;
}



void __thiscall
FID_conflict_GetPropertyGridGroupTextColor(CMFCVisualManager *param_1,CMFCPropertyGridCtrl *param_2)

{
  CMFCVisualManager::GetPropertyGridGroupTextColor(param_1,param_2);
  return;
}



undefined4 __fastcall __NLG_Notify1(undefined4 param_1)

{
  undefined4 in_EAX;
  undefined4 unaff_EBP;
  
  DAT_00c4bb08 = param_1;
  DAT_00c4bb04 = in_EAX;
  DAT_00c4bb0c = unaff_EBP;
  return in_EAX;
}



undefined4 __fastcall FID_conflict_IsWrapLabelsEnabled(int param_1)

{
  return *(undefined4 *)(param_1 + 0x370);
}



AFX_AUTOHIDE_DOCKSITE_SAVE_INFO * __thiscall CList<>::GetNext(CList<> *this,__POSITION **param_1)

{
  __POSITION *p_Var1;
  code *pcVar2;
  int iVar3;
  AFX_AUTOHIDE_DOCKSITE_SAVE_INFO *pAVar4;
  
  p_Var1 = *param_1;
  iVar3 = AfxIsValidAddress(p_Var1,0x50,1);
  if (iVar3 == 0) {
    iVar3 = AfxAssertFailedLine("f:\\dd\\vctools\\vc7libs\\ship\\atlmfc\\include\\afxtempl.h",0x32a)
    ;
    if (iVar3 != 0) {
      pcVar2 = (code *)swi(3);
      pAVar4 = (AFX_AUTOHIDE_DOCKSITE_SAVE_INFO *)(*pcVar2)();
      return pAVar4;
    }
  }
  *param_1 = *(__POSITION **)p_Var1;
  return (AFX_AUTOHIDE_DOCKSITE_SAVE_INFO *)(p_Var1 + 8);
}



long CDocObjectServer::XOleDocumentView::Show(int param_1)

{
  int iVar1;
  int in_stack_00000008;
  int iStack_14;
  AFX_MAINTAIN_STATE2 aAStack_c [8];
  
  thunk_FUN_006c4460();
  AFX_MAINTAIN_STATE2::AFX_MAINTAIN_STATE2(aAStack_c,*(AFX_MODULE_STATE **)(param_1 + -0x20));
  AfxAssertValidObject
            ((CObject *)(param_1 + -0x3c),
             "f:\\dd\\vctools\\vc7libs\\ship\\atlmfc\\src\\mfc\\oledocvw.cpp",0x13c);
  if (in_stack_00000008 == 0) {
    iStack_14 = (**(code **)(*(int *)(*(int *)(param_1 + -0x18) + 0x16c) + 0x14))
                          (*(int *)(param_1 + -0x18) + 0x16c);
  }
  else {
    iVar1 = COleServerDoc::ActivateInPlace(*(COleServerDoc **)(param_1 + -0x18));
    iStack_14 = (-(uint)(iVar1 != 0) & 0x7fffbffb) + 0x80004005;
  }
  AFX_MAINTAIN_STATE2::~AFX_MAINTAIN_STATE2(aAStack_c);
  return iStack_14;
}



CMFCToolBar * __thiscall
CMFCPopupMenuBar::FindDestintationToolBar(CMFCPopupMenuBar *this,LONG param_2,LONG param_3)

{
  tagPOINT tVar1;
  tagPOINT tVar2;
  CWnd *pCVar3;
  int iVar4;
  CMFCToolBar *pCVar5;
  tagRECT tStack_24;
  uint uStack_14;
  CObject *pCStack_10;
  CObject *pCStack_c;
  CWnd *pCStack_8;
  
  uStack_14 = DAT_00c4a700 ^ (uint)&stack0xfffffffc;
  CWnd::ScreenToClient((CWnd *)this,(tagPOINT *)&param_2);
  thunk_FUN_00b31aa0();
  pCVar3 = CWnd::SetCapture((CWnd *)this);
  pCStack_10 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMFCPopupMenu_00c46068,(CObject *)pCVar3);
  if (pCStack_10 == (CObject *)0x0) {
    pCStack_10 = (CObject *)0x0;
  }
  else {
    AfxAssertValidObject
              (pCStack_10,"f:\\dd\\vctools\\vc7libs\\ship\\atlmfc\\src\\mfc\\afxpopupmenubar.cpp",
               0x684);
    do {
      pCStack_c = pCStack_10;
      pCStack_10 = (CObject *)CMFCPopupMenu::GetParentPopupMenu((CMFCPopupMenu *)pCStack_10);
      if (pCStack_10 == (CObject *)0x0) {
        AfxAssertValidObject
                  (pCStack_c,"f:\\dd\\vctools\\vc7libs\\ship\\atlmfc\\src\\mfc\\afxpopupmenubar.cpp"
                   ,0x699);
        pCStack_8 = (CWnd *)CMFCPopupMenu::GetParentToolBar((CMFCPopupMenu *)pCStack_c);
        if (pCStack_8 != (CWnd *)0x0) {
          CWnd::ScreenToClient(pCStack_8,(tagPOINT *)&tStack_24);
          CWnd::MapWindowPoints(pCStack_8,(CWnd *)this,&tStack_24);
          tVar2.y = param_3;
          tVar2.x = param_2;
          CRect::PtInRect((CRect *)&tStack_24,tVar2);
        }
        break;
      }
      pCVar3 = (CWnd *)(**(code **)(*(int *)pCStack_10 + 0x1c8))();
      AfxAssertValidObject
                ((CObject *)pCVar3,
                 "f:\\dd\\vctools\\vc7libs\\ship\\atlmfc\\src\\mfc\\afxpopupmenubar.cpp",0x68c);
      CWnd::ScreenToClient(pCVar3,(tagPOINT *)&tStack_24);
      CWnd::MapWindowPoints(pCVar3,(CWnd *)this,&tStack_24);
      tVar1.y = param_3;
      tVar1.x = param_2;
      iVar4 = CRect::PtInRect((CRect *)&tStack_24,tVar1);
    } while (iVar4 == 0);
  }
  pCVar5 = (CMFCToolBar *)__security_check_cookie(uStack_14 ^ (uint)&stack0xfffffffc);
  return pCVar5;
}



void __thiscall CMFCPropertyGridProperty::Redraw(CMFCPropertyGridProperty *this)

{
  tagRECT *ptVar1;
  CMFCPropertyGridProperty **ppCVar2;
  int iVar3;
  __POSITION *p_Stack_8;
  
  AfxAssertValidObject
            ((CObject *)this,
             "f:\\dd\\vctools\\vc7libs\\ship\\atlmfc\\src\\mfc\\afxpropertygridctrl.cpp",0x1e9);
  if (*(int *)(this + 0xc0) != 0) {
    AfxAssertValidObject
              (*(CObject **)(this + 0xc0),
               "f:\\dd\\vctools\\vc7libs\\ship\\atlmfc\\src\\mfc\\afxpropertygridctrl.cpp",0x1ed);
    iVar3 = 1;
    ptVar1 = (tagRECT *)thunk_FUN_00b31df0();
    CWnd::InvalidateRect(*(CWnd **)(this + 0xc0),ptVar1,iVar3);
    if ((*(int *)(this + 0xc4) != 0) && (*(int *)(*(int *)(this + 0xc4) + 0x68) != 0)) {
      iVar3 = 1;
      ptVar1 = (tagRECT *)thunk_FUN_00b31df0();
      CWnd::InvalidateRect(*(CWnd **)(this + 0xc0),ptVar1,iVar3);
    }
    if (*(int *)(this + 0x68) != 0) {
      p_Stack_8 = (__POSITION *)thunk_FUN_0085fa30();
      while (p_Stack_8 != (__POSITION *)0x0) {
        ppCVar2 = CList<>::GetNext((CList<> *)(this + 200),&p_Stack_8);
        AfxAssertValidObject
                  ((CObject *)*ppCVar2,
                   "f:\\dd\\vctools\\vc7libs\\ship\\atlmfc\\src\\mfc\\afxpropertygridctrl.cpp",0x1fa
                  );
        iVar3 = 1;
        ptVar1 = (tagRECT *)thunk_FUN_00b31df0();
        CWnd::InvalidateRect(*(CWnd **)(this + 0xc0),ptVar1,iVar3);
      }
    }
    CWnd::UpdateWindow(*(CWnd **)(this + 0xc0));
  }
  return;
}



__POSITION * __thiscall CMap<>::GetStartPosition(CMap<> *this)

{
  return (__POSITION *)-(uint)(*(int *)(this + 0xc) != 0);
}



void __thiscall CMFCRibbonStatusBarPane::SetMargin(CMFCRibbonStatusBarPane *this,CSize *param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)thunk_FUN_00b31090(9,0);
  uVar1 = puVar2[1];
  *(undefined4 *)(this + 0xbc) = *puVar2;
  *(undefined4 *)(this + 0xc0) = uVar1;
  return;
}



void thunk_FUN_00853270(void)

{
  return;
}



undefined ** thunk_FUN_00a00300(void)

{
  return &PTR_thunk_FUN_006f5490_00bc736c;
}



// WARNING: Removing unreachable block (ram,0x00ae2784)
// WARNING: Removing unreachable block (ram,0x00ae28d1)
// WARNING: Removing unreachable block (ram,0x00ae262f)

size_t __cdecl
__fread_nolock_s(void *_DstBuf,size_t _DstSize,size_t _ElementSize,size_t _Count,FILE *_File)

{
  code *pcVar1;
  int iVar2;
  size_t sVar3;
  int *piVar4;
  uint uVar5;
  bool bVar6;
  wchar_t *_DstBuf_00;
  uint uStack_48;
  uint uStack_40;
  undefined1 uStack_24;
  wchar_t *pwStack_20;
  uint uStack_1c;
  size_t sStack_14;
  uint uStack_c;
  uint uStack_8;
  
  pwStack_20 = (wchar_t *)_DstBuf;
  sStack_14 = _DstSize;
  if ((_ElementSize == 0) || (_Count == 0)) {
    _Count = 0;
  }
  else {
    if ((_DstBuf == (void *)0x0) &&
       (iVar2 = FID_conflict___CrtDbgReport
                          (2,L"f:\\dd\\vctools\\crt_bld\\self_x86\\crt\\src\\fread.c",0x93,0,
                           L"(buffer != NULL)"), iVar2 == 1)) {
      pcVar1 = (code *)swi(3);
      sVar3 = (*pcVar1)();
      return sVar3;
    }
    if (_DstBuf != (void *)0x0) {
      if ((_File == (FILE *)0x0) || ((uint)(0xffffffff / (ulonglong)_ElementSize) < _Count)) {
        if (_DstSize != 0xffffffff) {
          _memset(_DstBuf,0xfe,_DstSize);
        }
        if ((_File == (FILE *)0x0) &&
           (iVar2 = FID_conflict___CrtDbgReport
                              (2,L"f:\\dd\\vctools\\crt_bld\\self_x86\\crt\\src\\fread.c",0x9b,0,
                               L"(stream != NULL)"), iVar2 == 1)) {
          pcVar1 = (code *)swi(3);
          sVar3 = (*pcVar1)();
          return sVar3;
        }
        if (_File == (FILE *)0x0) {
          piVar4 = __errno();
          *piVar4 = 0x16;
          __invalid_parameter(L"(stream != NULL)",L"_fread_nolock_s",
                              L"f:\\dd\\vctools\\crt_bld\\self_x86\\crt\\src\\fread.c",0x9b,0);
          return 0;
        }
        bVar6 = (uint)(0xffffffff / (ulonglong)_ElementSize) < _Count;
        if ((bVar6) &&
           (iVar2 = FID_conflict___CrtDbgReport
                              (2,L"f:\\dd\\vctools\\crt_bld\\self_x86\\crt\\src\\fread.c",0x9c,0,
                               L"num <= (SIZE_MAX / elementSize)"), iVar2 == 1)) {
          pcVar1 = (code *)swi(3);
          sVar3 = (*pcVar1)();
          return sVar3;
        }
        if (bVar6) {
          piVar4 = __errno();
          *piVar4 = 0x16;
          __invalid_parameter(L"num <= (SIZE_MAX / elementSize)",L"_fread_nolock_s",
                              L"f:\\dd\\vctools\\crt_bld\\self_x86\\crt\\src\\fread.c",0x9c,0);
          return 0;
        }
      }
      uVar5 = _ElementSize * _Count;
      uStack_8 = uVar5;
      if ((_File->_flag & 0x10cU) == 0) {
        uStack_c = 0x1000;
      }
      else {
        uStack_c = _File->_bufsiz;
      }
      while (uStack_8 != 0) {
        if (((_File->_flag & 0x10cU) == 0) || (_File->_cnt == 0)) {
          if (uStack_8 < uStack_c) {
            iVar2 = __filbuf(_File);
            if (iVar2 == -1) {
              return (uVar5 - uStack_8) / _ElementSize;
            }
            if (sStack_14 == 0) {
              if (_DstSize != 0xffffffff) {
                _memset(_DstBuf,0xfe,_DstSize);
              }
              iVar2 = FID_conflict___CrtDbgReport
                                (2,L"f:\\dd\\vctools\\crt_bld\\self_x86\\crt\\src\\fread.c",0x118,0,
                                 L"(\"buffer too small\", 0)");
              if (iVar2 != 1) {
                piVar4 = __errno();
                *piVar4 = 0x22;
                __invalid_parameter(L"(\"buffer too small\", 0)",L"_fread_nolock_s",
                                    L"f:\\dd\\vctools\\crt_bld\\self_x86\\crt\\src\\fread.c",0x118,0
                                   );
                return 0;
              }
              pcVar1 = (code *)swi(3);
              sVar3 = (*pcVar1)();
              return sVar3;
            }
            uStack_24 = (undefined1)iVar2;
            *(undefined1 *)pwStack_20 = uStack_24;
            pwStack_20 = (wchar_t *)((int)pwStack_20 + 1);
            uStack_8 = uStack_8 - 1;
            sStack_14 = sStack_14 - 1;
            uStack_c = _File->_bufsiz;
          }
          else {
            if (uStack_c == 0) {
              if (uStack_8 < 0x80000000) {
                uStack_48 = uStack_8;
              }
              else {
                uStack_48 = 0x7fffffff;
              }
              uStack_1c = uStack_48;
            }
            else if (uStack_8 < 0x80000000) {
              uStack_1c = uStack_8 - uStack_8 % uStack_c;
            }
            else {
              uStack_1c = 0x7fffffff - (int)(0x7fffffff % (ulonglong)uStack_c);
            }
            if (sStack_14 < uStack_1c) {
              if (_DstSize != 0xffffffff) {
                _memset(_DstBuf,0xfe,_DstSize);
              }
              iVar2 = FID_conflict___CrtDbgReport
                                (2,L"f:\\dd\\vctools\\crt_bld\\self_x86\\crt\\src\\fread.c",0xf4,0,
                                 L"(\"buffer too small\", 0)");
              if (iVar2 != 1) {
                piVar4 = __errno();
                *piVar4 = 0x22;
                __invalid_parameter(L"(\"buffer too small\", 0)",L"_fread_nolock_s",
                                    L"f:\\dd\\vctools\\crt_bld\\self_x86\\crt\\src\\fread.c",0xf4,0)
                ;
                return 0;
              }
              pcVar1 = (code *)swi(3);
              sVar3 = (*pcVar1)();
              return sVar3;
            }
            _DstBuf_00 = pwStack_20;
            iVar2 = __fileno(_File);
            iVar2 = __read(iVar2,_DstBuf_00,uStack_1c);
            if (iVar2 == 0) {
              _File->_flag = _File->_flag | 0x10;
              return (uVar5 - uStack_8) / _ElementSize;
            }
            if (iVar2 == -1) {
              _File->_flag = _File->_flag | 0x20;
              return (uVar5 - uStack_8) / _ElementSize;
            }
            uStack_8 = uStack_8 - iVar2;
            pwStack_20 = (wchar_t *)((int)pwStack_20 + iVar2);
            sStack_14 = sStack_14 - iVar2;
          }
        }
        else {
          if (_File->_cnt < 0) {
            if ((_File->_cnt < 0) &&
               (iVar2 = FID_conflict___CrtDbgReport
                                  (2,L"f:\\dd\\vctools\\crt_bld\\self_x86\\crt\\src\\fread.c",0xb5,0
                                   ,
                                   L"(\"Inconsistent Stream Count. Flush between consecutive read and write\", stream->_cnt >= 0)"
                                  ), iVar2 == 1)) {
              pcVar1 = (code *)swi(3);
              sVar3 = (*pcVar1)();
              return sVar3;
            }
            _File->_flag = _File->_flag | 0x20;
            return (uVar5 - uStack_8) / _ElementSize;
          }
          if (uStack_8 < (uint)_File->_cnt) {
            uStack_40 = uStack_8;
          }
          else {
            uStack_40 = _File->_cnt;
          }
          if (sStack_14 < uStack_40) {
            if (_DstSize != 0xffffffff) {
              _memset(_DstBuf,0xfe,_DstSize);
            }
            iVar2 = FID_conflict___CrtDbgReport
                              (2,L"f:\\dd\\vctools\\crt_bld\\self_x86\\crt\\src\\fread.c",0xc2,0,
                               L"(\"buffer too small\", 0)");
            if (iVar2 != 1) {
              piVar4 = __errno();
              *piVar4 = 0x22;
              __invalid_parameter(L"(\"buffer too small\", 0)",L"_fread_nolock_s",
                                  L"f:\\dd\\vctools\\crt_bld\\self_x86\\crt\\src\\fread.c",0xc2,0);
              return 0;
            }
            pcVar1 = (code *)swi(3);
            sVar3 = (*pcVar1)();
            return sVar3;
          }
          _wmemcpy_s(pwStack_20,sStack_14,(wchar_t *)_File->_ptr,uStack_40);
          uStack_8 = uStack_8 - uStack_40;
          _File->_cnt = _File->_cnt - uStack_40;
          _File->_ptr = _File->_ptr + uStack_40;
          pwStack_20 = (wchar_t *)((int)pwStack_20 + uStack_40);
          sStack_14 = sStack_14 - uStack_40;
        }
      }
    }
    else {
      piVar4 = __errno();
      *piVar4 = 0x16;
      __invalid_parameter(L"(buffer != NULL)",L"_fread_nolock_s",
                          L"f:\\dd\\vctools\\crt_bld\\self_x86\\crt\\src\\fread.c",0x93,0);
      _Count = 0;
    }
  }
  return _Count;
}



long COleControlSite::XBoundObjectSite::QueryInterface(_GUID *param_1,void **param_2)

{
  ulong uVar1;
  void **in_stack_0000000c;
  AFX_MAINTAIN_STATE2 aAStack_c [8];
  
  thunk_FUN_006c4460();
  AFX_MAINTAIN_STATE2::AFX_MAINTAIN_STATE2
            (aAStack_c,*(AFX_MODULE_STATE **)(param_1[-0xd].Data4 + 4));
  uVar1 = CCmdTarget::ExternalQueryInterface
                    ((CCmdTarget *)(param_1 + -0xe),param_2,in_stack_0000000c);
  AFX_MAINTAIN_STATE2::~AFX_MAINTAIN_STATE2(aAStack_c);
  return uVar1;
}



// WARNING: Function: __RTC_CheckEsp replaced with injection: __RTC_CheckEsp

bool thunk_FUN_006c1f30(byte *param_1,FILE *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 auStack_c4 [48];
  
  puVar2 = auStack_c4;
  for (iVar1 = 0x30; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0xcccccccc;
    puVar2 = puVar2 + 1;
  }
  iVar1 = _ungetc((uint)*param_1,param_2);
  return iVar1 != -1;
}



void __thiscall CSmartDockingStandaloneGuide::Show(CSmartDockingStandaloneGuide *this,int param_1)

{
  BOOL BVar1;
  
  BVar1 = IsWindow(*(HWND *)(this + 0x28));
  if (BVar1 != 0) {
    CWnd::ShowWindow((CWnd *)(this + 8),-(uint)(param_1 != 0) & 5);
  }
  return;
}



int __thiscall CRect::EqualRect(CRect *this,tagRECT *param_1)

{
  BOOL BVar1;
  
  BVar1 = ::EqualRect((RECT *)this,param_1);
  return BVar1;
}



CPoint * __thiscall CPoint::CPoint(CPoint *this,tagSIZE param_1)

{
  *(LONG *)this = param_1.cx;
  *(LONG *)(this + 4) = param_1.cy;
  return this;
}



int __thiscall CWnd::LockWindowUpdate(CWnd *this)

{
  code *pcVar1;
  BOOL BVar2;
  int iVar3;
  
  BVar2 = IsWindow(*(HWND *)(this + 0x20));
  if (BVar2 == 0) {
    iVar3 = AfxAssertFailedLine("f:\\dd\\vctools\\vc7libs\\ship\\atlmfc\\include\\afxwin2.inl",0xb2)
    ;
    if (iVar3 != 0) {
      pcVar1 = (code *)swi(3);
      iVar3 = (*pcVar1)();
      return iVar3;
    }
  }
  BVar2 = ::LockWindowUpdate(*(HWND *)(this + 0x20));
  return BVar2;
}



CPrintingDialog * __thiscall CPrintingDialog::CPrintingDialog(CPrintingDialog *this,CWnd *param_1)

{
  uint uVar1;
  int iVar2;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_00b7c258;
  pvStack_10 = ExceptionList;
  uVar1 = DAT_00c4a700 ^ (uint)&stack0xfffffffc;
  ExceptionList = &pvStack_10;
  CDialog::CDialog((CDialog *)this);
  uStack_8 = 0;
  *(undefined ***)this = vftable;
  CDialog::Create((CDialog *)this,0x7802,param_1);
  iVar2 = thunk_FUN_00abefc0(uVar1);
  *(undefined4 *)(iVar2 + 4) = 0;
  ExceptionList = pvStack_10;
  return this;
}



int __thiscall CMFCBaseTabCtrl::SetTabTextColor(CMFCBaseTabCtrl *this,int param_1,ulong param_2)

{
  CObject *pCVar1;
  int iVar2;
  void **ppvVar3;
  
  AfxAssertValidObject
            ((CObject *)this,"f:\\dd\\vctools\\vc7libs\\ship\\atlmfc\\src\\mfc\\afxbasetabctrl.cpp",
             0x894);
  if ((param_1 < 0) || (*(int *)(this + 0x9c) <= param_1)) {
    iVar2 = 0;
  }
  else {
    ppvVar3 = CPtrArray::operator[]((CPtrArray *)(this + 0x88),param_1);
    pCVar1 = (CObject *)*ppvVar3;
    AfxAssertValidObject
              (pCVar1,"f:\\dd\\vctools\\vc7libs\\ship\\atlmfc\\src\\mfc\\afxbasetabctrl.cpp",0x89c);
    *(ulong *)(pCVar1 + 0x2c) = param_2;
    iVar2 = 1;
  }
  return iVar2;
}



bool __fastcall FID_conflict_operator_(int *param_1)

{
  return *param_1 == 0;
}



void __thiscall CPaneFrameWnd::SetHotPoint(CPaneFrameWnd *this,CPoint *param_1)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(this + 0x124) = *(undefined4 *)param_1;
  *(undefined4 *)(this + 0x128) = uVar1;
  return;
}



long ATL::AtlIAccessibleGetIDsOfNamesHelper
               (_GUID *param_1,wchar_t **param_2,uint param_3,ulong param_4,long *param_5)

{
  bool bVar1;
  int iVar2;
  uint uStack_10;
  uint uStack_8;
  
  uStack_8 = 0;
  while( true ) {
    if (param_3 <= uStack_8) {
      return 0;
    }
    bVar1 = false;
    for (uStack_10 = 0; uStack_10 < 0x13; uStack_10 = uStack_10 + 1) {
      iVar2 = lstrcmpW(param_2[uStack_8],(LPCWSTR)(&PTR_u_accParent_00c42be0)[uStack_10]);
      if (iVar2 == 0) {
        bVar1 = true;
        param_5[uStack_8] = *(long *)(&DAT_00c42b80 + uStack_10 * 4);
      }
    }
    if (!bVar1) break;
    uStack_8 = uStack_8 + 1;
  }
  return -0x7ffdfffa;
}



void __fastcall thunk_FUN_009e36d0(COleIPFrameWnd *param_1)

{
  COleIPFrameWnd::AssertValid(param_1);
  return;
}



void __thiscall CMFCRibbonComboBox::CommonInit(CMFCRibbonComboBox *this)

{
  *(undefined4 *)(this + 0x1d0) = 0xffffffff;
  *(undefined4 *)(this + 0x1d4) = 0x96;
  *(undefined4 *)(this + 0x1d8) = 0;
  *(undefined4 *)(this + 0x17c) = 1;
  *(undefined4 *)(this + 0xec) = 3;
  *(undefined4 *)(this + 0x1dc) = 1;
  return;
}



undefined4 * __fastcall thunk_FUN_007170a0(undefined4 *param_1)

{
  *param_1 = 0;
  return param_1;
}



CControlBarInfo * __thiscall CControlBarInfo::CControlBarInfo(CControlBarInfo *this)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  
  CPoint::CPoint((CPoint *)(this + 0x14));
  thunk_FUN_00b31aa0();
  CPoint::CPoint((CPoint *)(this + 0x3c));
  CUIntArray::CUIntArray((CUIntArray *)(this + 0x44));
  *(undefined4 *)this = 0;
  *(undefined4 *)(this + 0x20) = 0;
  *(undefined4 *)(this + 0xc) = 0;
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)(this + 0x10) = 0;
  *(undefined4 *)(this + 0x58) = 0;
  *(undefined4 *)(this + 0x18) = 0xffffffff;
  *(undefined4 *)(this + 0x14) = 0xffffffff;
  *(undefined4 *)(this + 0x1c) = 0x7fff;
  *(undefined4 *)(this + 0x24) = 0;
  thunk_FUN_00b31f60();
  *(undefined4 *)(this + 0x38) = 0;
  puVar2 = (undefined4 *)thunk_FUN_00b31510(0,0);
  uVar1 = puVar2[1];
  *(undefined4 *)(this + 0x3c) = *puVar2;
  *(undefined4 *)(this + 0x40) = uVar1;
  return this;
}



void __CrtMemDumpStatistics(int param_1)

{
  code *pcVar1;
  int iVar2;
  int *piVar3;
  int iStack_8;
  
  if (param_1 == 0) {
    iVar2 = FID_conflict___CrtDbgReport
                      (2,L"f:\\dd\\vctools\\crt_bld\\self_x86\\crt\\src\\dbgheap.c",0x9cd,0,
                       L"state != NULL");
    if (iVar2 == 1) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (param_1 != 0) {
    for (iStack_8 = 0; iStack_8 < 5; iStack_8 = iStack_8 + 1) {
      iVar2 = FID_conflict___CrtDbgReport
                        (0,0,0,0,"%Id bytes in %Id %hs Blocks.\n",
                         *(undefined4 *)(param_1 + 0x18 + iStack_8 * 4),
                         *(undefined4 *)(param_1 + 4 + iStack_8 * 4),(&PTR_DAT_00bdd698)[iStack_8]);
      if (iVar2 == 1) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    iVar2 = FID_conflict___CrtDbgReport
                      (0,0,0,0,"Largest number used: %Id bytes.\n",*(undefined4 *)(param_1 + 0x2c));
    if (iVar2 == 1) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    iVar2 = FID_conflict___CrtDbgReport
                      (0,0,0,0,"Total allocations: %Id bytes.\n",*(undefined4 *)(param_1 + 0x30));
    if (iVar2 == 1) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  else {
    piVar3 = __errno();
    *piVar3 = 0x16;
    __invalid_parameter(L"state != NULL",L"_CrtMemDumpStatistics",
                        L"f:\\dd\\vctools\\crt_bld\\self_x86\\crt\\src\\dbgheap.c",0x9cd,0);
  }
  return;
}



CMFCBaseTabCtrl * __thiscall CBasePane::GetParentTabWnd(CBasePane *this,HWND__ **param_1)

{
  CWnd *pCVar1;
  HWND__ *pHVar2;
  CMFCBaseTabCtrl *pCVar3;
  CObject *pCVar4;
  CWnd *pCStack_10;
  
  AfxAssertValidObject
            ((CObject *)this,"f:\\dd\\vctools\\vc7libs\\ship\\atlmfc\\src\\mfc\\afxbasepane.cpp",
             0x386);
  pCVar1 = CWnd::SetCapture((CWnd *)this);
  pCStack_10 = (CWnd *)AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CDockablePaneAdapter_00c47ed8,
                                          (CObject *)pCVar1);
  if (pCStack_10 == (CWnd *)0x0) {
    pHVar2 = (HWND__ *)thunk_FUN_006d9400();
    *param_1 = pHVar2;
    pCStack_10 = (CWnd *)this;
  }
  else {
    pHVar2 = (HWND__ *)thunk_FUN_006d9400();
    *param_1 = pHVar2;
  }
  pCVar1 = CWnd::SetCapture(pCStack_10);
  pCVar3 = (CMFCBaseTabCtrl *)
           AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMFCBaseTabCtrl_00bb33a0,(CObject *)pCVar1);
  if (pCVar3 == (CMFCBaseTabCtrl *)0x0) {
    pCVar1 = CWnd::SetCapture(pCStack_10);
    pCVar4 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CBaseTabbedPane_00bb56a8,(CObject *)pCVar1);
    if (pCVar4 != (CObject *)0x0) {
      pCVar3 = (CMFCBaseTabCtrl *)(**(code **)(*(int *)pCVar4 + 0x3ac))();
    }
  }
  return pCVar3;
}



void __thiscall CSize::operator+=(CSize *this,tagSIZE param_1)

{
  *(int *)this = *(int *)this + param_1.cx;
  *(int *)(this + 4) = *(int *)(this + 4) + param_1.cy;
  return;
}



void __thiscall FID_conflict_operator_(undefined4 *param_1,undefined4 param_2)

{
  *param_1 = param_2;
  return;
}



void thunk_FUN_009e9430(int param_1)

{
  uint uStack_3c;
  AFX_MAINTAIN_STATE2 aAStack_1c [8];
  undefined1 *puStack_14;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_00b6e2c8;
  pvStack_10 = ExceptionList;
  uStack_3c = DAT_00c4a700 ^ (uint)&stack0xfffffffc;
  puStack_14 = (undefined1 *)&uStack_3c;
  ExceptionList = &pvStack_10;
  thunk_FUN_006c4460();
  AFX_MAINTAIN_STATE2::AFX_MAINTAIN_STATE2(aAStack_1c,*(AFX_MODULE_STATE **)(param_1 + -0x5c));
  uStack_8 = 0;
  AfxAssertValidObject
            ((CObject *)(param_1 + -0x78),
             "f:\\dd\\vctools\\vc7libs\\ship\\atlmfc\\src\\mfc\\olecli2.cpp",0x57a);
  uStack_8 = CONCAT31(uStack_8._1_3_,1);
  (**(code **)(*(int *)(param_1 + -0x78) + 0x9c))();
  FUN_009e94f3();
  return;
}



undefined4 thunk_FUN_0085eae0(void)

{
  return 1;
}



void __thiscall CMFCScanliner::empty(CMFCScanliner *this)

{
  *(undefined4 *)this = 0;
  *(undefined4 *)(this + 0xc) = 0;
  *(undefined4 *)(this + 0x10) = 0;
  *(undefined4 *)(this + 0x14) = 0;
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined4 *)(this + 0x1c) = 0;
  *(undefined4 *)(this + 0x20) = 0;
  *(undefined4 *)(this + 0x28) = 0;
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)(this + 8) = 0;
  return;
}



undefined ** thunk_FUN_00a1fc40(void)

{
  return &PTR_s_CDockState_00c481a0;
}



void CMFCToolBarMenuButton::GetTextHorzOffsets(int *param_1,int *param_2)

{
  int *piVar1;
  
  piVar1 = (int *)CMFCToolBar::GetMenuImageSize();
  *param_1 = *piVar1 / 2 + 3;
  piVar1 = (int *)CMenuImages::Size();
  *param_2 = *piVar1;
  return;
}



undefined4 __fastcall thunk_FUN_00a5eea0(int param_1)

{
  return *(undefined4 *)(param_1 + 8);
}



int __thiscall COleIPFrameWndEx::OnShowPanes(COleIPFrameWndEx *this,int param_1)

{
  int iVar1;
  
  AfxAssertValidObject
            ((CObject *)this,
             "f:\\dd\\vctools\\vc7libs\\ship\\atlmfc\\src\\mfc\\afxoleipframewndex.cpp",0x242);
  iVar1 = (**(code **)(*(int *)(this + 0x29c) + 0x58))(param_1);
  (**(code **)(*(int *)this + 0x1e4))(0);
  return iVar1;
}



void __fastcall thunk_FUN_007ac310(undefined4 param_1)

{
  thunk_FUN_007aca40(param_1);
  return;
}



bool __fastcall thunk_FUN_00a15f10(int param_1)

{
  return *(int *)(param_1 + 0x10d8) == 0;
}



void __thiscall
AddButton(CMFCOutlookBarPane *param_1,HICON param_2,undefined4 param_3,undefined4 param_4,
         undefined4 param_5,int param_6)

{
  code *pcVar1;
  tagSIZE tVar2;
  uint uVar3;
  int iVar4;
  HDC__ *hdc;
  HBITMAP__ *pHVar5;
  int yTop;
  UINT istepIfAniCur;
  HBRUSH hbrFlickerFreeDraw;
  UINT diFlags;
  CDC aCStack_7c [16];
  CBitmap aCStack_6c [8];
  CClientDC aCStack_64 [20];
  CBitmap *pCStack_50;
  uint uStack_4c;
  undefined1 auStack_48 [4];
  undefined4 uStack_44;
  undefined4 uStack_40;
  int iStack_30;
  LONG LStack_2c;
  LONG LStack_28;
  ICONINFO IStack_24;
  void *pvStack_10;
  undefined1 *puStack_c;
  int iStack_8;
  
  iStack_8 = 0xffffffff;
  puStack_c = &LAB_00b6c8f8;
  pvStack_10 = ExceptionList;
  uVar3 = DAT_00c4a700 ^ (uint)&stack0xfffffffc;
  ExceptionList = &pvStack_10;
  uStack_4c = (uint)(param_2 != (HICON)0x0);
  if ((uStack_4c == 0) &&
     (iVar4 = AfxAssertFailedLine("f:\\dd\\vctools\\vc7libs\\ship\\atlmfc\\src\\mfc\\afxoutlookbarpane.cpp"
                                  ,0xb2), iVar4 != 0)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (uStack_4c == 0) {
    thunk_FUN_007113e0(uVar3);
  }
  iStack_30 = 0xffffffff;
  GetIconInfo(param_2,&IStack_24);
  GetObjectA(IStack_24.hbmColor,0x18,auStack_48);
  thunk_FUN_00b31090(uStack_44,uStack_40);
  if (param_6 == 0) {
    CClientDC::CClientDC(aCStack_64,(CWnd *)param_1);
    iStack_8 = 0;
    CDC::CDC(aCStack_7c);
    iStack_8._0_1_ = 1;
    CDC::CreateCompatibleDC(aCStack_7c,(CDC *)aCStack_64);
    CBitmap::CBitmap(aCStack_6c);
    iStack_8 = CONCAT31(iStack_8._1_3_,2);
    CBitmap::CreateCompatibleBitmap(aCStack_6c,(CDC *)aCStack_64,LStack_2c,LStack_28);
    pCStack_50 = CDC::SelectObject(aCStack_7c,aCStack_6c);
    if (*(int *)(param_1 + 0xccc) != -1) {
      CDC::FillSolidRect(aCStack_7c,0,0,LStack_2c,LStack_28,*(ulong *)(param_1 + 0xccc));
    }
    diFlags = 3;
    hbrFlickerFreeDraw = (HBRUSH)0x0;
    istepIfAniCur = 0;
    yTop = 0;
    iVar4 = 0;
    hdc = CDC::GetSafeHdc(aCStack_7c);
    DrawIconEx(hdc,iVar4,yTop,param_2,LStack_2c,LStack_28,istepIfAniCur,hbrFlickerFreeDraw,diFlags);
    CDC::SelectObject(aCStack_7c,pCStack_50);
    DeleteObject(IStack_24.hbmColor);
    DeleteObject(IStack_24.hbmMask);
    pHVar5 = (HBITMAP__ *)CGdiObject::GetSafeHandle((CGdiObject *)aCStack_6c);
    iStack_30 = CMFCOutlookBarPane::AddBitmapImage(param_1,pHVar5);
    iStack_8._0_1_ = 1;
    thunk_FUN_006e6300();
    iStack_8 = (uint)iStack_8._1_3_ << 8;
    CDC::~CDC(aCStack_7c);
    iStack_8 = 0xffffffff;
    CClientDC::~CClientDC(aCStack_64);
  }
  else {
    iVar4 = thunk_FUN_007b22c0();
    if (iVar4 == 0) {
      DAT_00c58e3c = LStack_2c;
      DAT_00c58e40 = LStack_28;
      tVar2.cy = LStack_28;
      tVar2.cx = LStack_2c;
      CMFCToolBarImages::SetImageSize((CMFCToolBarImages *)&DAT_00c58d30,tVar2,0);
    }
    iStack_30 = CMFCToolBarImages::AddIcon((CMFCToolBarImages *)&DAT_00c58d30,param_2,1);
  }
  InternalAddButton(iStack_30,param_3,param_4,param_5);
  ExceptionList = pvStack_10;
  return;
}



undefined4 __fastcall thunk_FUN_00b3dcc0(int param_1)

{
  return *(undefined4 *)(param_1 + 4);
}



int __thiscall CSize::operator!=(CSize *this,tagSIZE param_1)

{
  int iStack_c;
  
  if ((*(int *)this == param_1.cx) && (*(int *)(this + 4) == param_1.cy)) {
    iStack_c = 0;
  }
  else {
    iStack_c = 1;
  }
  return iStack_c;
}



void __thiscall CDockablePane::OnBeforeChangeParent(CDockablePane *this,CWnd *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  AfxAssertValidObject
            ((CObject *)this,"f:\\dd\\vctools\\vc7libs\\ship\\atlmfc\\src\\mfc\\afxdockablepane.cpp"
             ,0x112);
  if (param_1 != (CWnd *)0x0) {
    iVar1 = CObject::IsKindOf((CObject *)param_1,(CRuntimeClass *)&PTR_s_CMDIChildWndEx_00ba3478);
    if (iVar1 != 0) {
      (**(code **)(*(int *)this + 0x324))();
    }
    iVar2 = CObject::IsKindOf((CObject *)param_1,(CRuntimeClass *)&PTR_s_CPaneFrameWnd_00c44ee0);
    if (((iVar2 != 0) ||
        (iVar2 = CObject::IsKindOf((CObject *)param_1,(CRuntimeClass *)&PTR_s_CMFCTabCtrl_00baebe4),
        iVar2 != 0)) || (iVar1 != 0)) {
      (**(code **)(*(int *)this + 0x244))(param_2);
    }
    CPane::OnBeforeChangeParent((CPane *)this,param_1,0);
    return;
  }
  return;
}



uint __thiscall CShellManager::GetItemSize(CShellManager *this,_ITEMIDLIST *param_1)

{
  uint uStack_c;
  _ITEMIDLIST *p_Stack_8;
  
  uStack_c = 0;
  p_Stack_8 = param_1;
  if (param_1 != (_ITEMIDLIST *)0x0) {
    for (; (p_Stack_8->mkid).cb != 0; p_Stack_8 = GetNextItem(this,p_Stack_8)) {
      uStack_c = (p_Stack_8->mkid).cb + uStack_c;
    }
    uStack_c = uStack_c + 2;
  }
  return uStack_c;
}



IUnknown * __fastcall thunk_FUN_00a790a0(IUnknown *param_1)

{
  IUnknown::IUnknown(param_1);
  return param_1;
}



int __thiscall
COccManager::CreateDlgControl
          (COccManager *this,CWnd *param_1,HWND__ *param_2,int param_3,DLGITEMTEMPLATE *param_4,
          ushort param_5,uchar *param_6,ulong param_7,HWND__ **param_8)

{
  ushort uVar1;
  code *pcVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  CDataBoundProperty *this_00;
  undefined4 uVar7;
  undefined4 uVar8;
  CDataBoundProperty *pCStack_e8;
  int iStack_a8;
  CDataBoundProperty *pCStack_9c;
  CLSID CStack_98;
  undefined4 uStack_88;
  int iStack_84;
  ushort uStack_80;
  DLGITEMTEMPLATE *pDStack_7c;
  int iStack_78;
  COleControlSite *pCStack_74;
  undefined1 auStack_70 [4];
  uint uStack_6c;
  CMemFile aCStack_68 [44];
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined2 uStack_34;
  undefined2 uStack_32;
  undefined2 uStack_30;
  undefined2 uStack_2e;
  undefined2 uStack_2c;
  tagRECT tStack_28;
  uint uStack_18;
  undefined4 uStack_14;
  void *pvStack_10;
  undefined1 *puStack_c;
  int iStack_8;
  
  iStack_8 = 0xffffffff;
  puStack_c = &LAB_00b4ce8a;
  pvStack_10 = ExceptionList;
  uVar3 = DAT_00c4a700 ^ (uint)&stack0xfffffffc;
  ExceptionList = &pvStack_10;
  pDStack_7c = param_4 + 0x12;
  if (param_3 != 0) {
    uStack_3c = *(undefined4 *)(param_4 + 8);
    uStack_38 = *(undefined4 *)(param_4 + 4);
    uStack_34 = *(undefined2 *)(param_4 + 0xc);
    uStack_32 = *(undefined2 *)(param_4 + 0xe);
    uStack_30 = *(undefined2 *)(param_4 + 0x10);
    uStack_2e = *(undefined2 *)(param_4 + 0x12);
    uStack_2c = *(undefined2 *)(param_4 + 0x14);
    pDStack_7c = param_4 + 0x18;
    param_4 = (DLGITEMTEMPLATE *)&uStack_3c;
  }
  uStack_18 = uVar3;
  CRect::CRect((CRect *)&tStack_28,(int)*(short *)(param_4 + 8),(int)*(short *)(param_4 + 10),
               (int)*(short *)(param_4 + 8) + (int)*(short *)(param_4 + 0xc),
               (int)*(short *)(param_4 + 10) + (int)*(short *)(param_4 + 0xe));
  MapDialogRect(*(HWND *)(param_1 + 0x20),&tStack_28);
  iStack_84 = 0;
  if (3 < param_7) {
    iVar4 = *(int *)param_6;
    param_6 = param_6 + 4;
    param_7 = param_7 - 4;
    if (iVar4 != 0) {
      iStack_84 = Ordinal_4(param_6,iVar4,uVar3);
      param_6 = param_6 + iVar4 * 2;
      param_7 = param_7 + iVar4 * -2;
    }
  }
  if (((param_5 == 0x378) && (param_7 != 0)) &&
     (iVar4 = AfxAssertFailedLine("f:\\dd\\vctools\\vc7libs\\ship\\atlmfc\\src\\mfc\\occmgr.cpp",
                                  0x271), iVar4 != 0)) {
    pcVar2 = (code *)swi(3);
    iVar4 = (*pcVar2)();
    return iVar4;
  }
  pCStack_9c = (CDataBoundProperty *)0x0;
  thunk_FUN_006bef10();
  iStack_8 = 0;
  uStack_80 = 0;
  uStack_88 = 0;
  uStack_14 = 0;
  if ((param_5 == 0x37a) || (param_5 == 0x37b)) {
    iVar4 = *(int *)param_6;
    if ((*(int *)(param_6 + 4) != 1) &&
       (iVar5 = AfxAssertFailedLine("f:\\dd\\vctools\\vc7libs\\ship\\atlmfc\\src\\mfc\\occmgr.cpp",
                                    0x284), iVar5 != 0)) {
      pcVar2 = (code *)swi(3);
      iVar4 = (*pcVar2)();
      return iVar4;
    }
    param_6 = param_6 + 0xc;
    iStack_a8 = iVar4 + -0xc;
    while (iStack_a8 != 0) {
      iVar5 = *(int *)param_6;
      uVar1 = *(ushort *)(param_6 + 4);
      if (iVar5 == -0x7ffeffff) {
        uStack_88 = *(undefined4 *)(param_6 + 6);
        uStack_14 = *(undefined4 *)(param_6 + 10);
        if ((*(int *)(param_6 + 0xe) != -0x7ffefffe) &&
           (iVar5 = AfxAssertFailedLine("f:\\dd\\vctools\\vc7libs\\ship\\atlmfc\\src\\mfc\\occmgr.cpp"
                                        ,0x29f), iVar5 != 0)) {
          pcVar2 = (code *)swi(3);
          iVar4 = (*pcVar2)();
          return iVar4;
        }
        thunk_FUN_006bf0e0(param_6 + 0x16);
        iVar5 = thunk_FUN_006bf080();
        iVar6 = thunk_FUN_006bf080();
        param_6 = param_6 + iVar5 + 0x17;
        iStack_a8 = (iStack_a8 + -0x16) - (iVar6 + 1);
        uStack_80 = uVar1;
      }
      else {
        this_00 = (CDataBoundProperty *)
                  operator_new(0x1c,"f:\\dd\\vctools\\vc7libs\\ship\\atlmfc\\src\\mfc\\occmgr.cpp",
                               0x2aa);
        iStack_8._0_1_ = 1;
        if (this_00 == (CDataBoundProperty *)0x0) {
          pCStack_e8 = (CDataBoundProperty *)0x0;
        }
        else {
          pCStack_e8 = (CDataBoundProperty *)
                       CDataBoundProperty::CDataBoundProperty(this_00,pCStack_9c,iVar5,uVar1);
        }
        iStack_8 = (uint)iStack_8._1_3_ << 8;
        pCStack_9c = pCStack_e8;
        param_6 = param_6 + 6;
        iStack_a8 = iStack_a8 + -6;
      }
    }
    param_7 = param_7 - iVar4;
    param_5 = param_5 - 4;
  }
  if (*(short *)pDStack_7c == 0x7b) {
    iStack_78 = CLSIDFromString((LPCOLESTR)pDStack_7c,&CStack_98);
  }
  else {
    iStack_78 = CLSIDFromProgID((LPCOLESTR)pDStack_7c,&CStack_98);
  }
  if (iStack_78 < 0) {
    uVar7 = thunk_FUN_006bf6d0(0,"Unable to convert \"%ls\" to a class ID.\n",pDStack_7c);
    uVar8 = thunk_FUN_006bf580("f:\\dd\\vctools\\vc7libs\\ship\\atlmfc\\src\\mfc\\occmgr.cpp",700);
    thunk_FUN_006bf5d0(uVar8,uVar7);
    uVar7 = thunk_FUN_006bf6d0(0,">>> Result code: 0x%08lx\n",iStack_78);
    uVar8 = thunk_FUN_006bf580("f:\\dd\\vctools\\vc7libs\\ship\\atlmfc\\src\\mfc\\occmgr.cpp",0x2bd)
    ;
    thunk_FUN_006bf5d0(uVar8,uVar7);
    if (*(short *)pDStack_7c != 0x7b) {
      uVar7 = thunk_FUN_006bf6d0(0,">>> Is the control properly registered?\n");
      uVar8 = thunk_FUN_006bf580("f:\\dd\\vctools\\vc7libs\\ship\\atlmfc\\src\\mfc\\occmgr.cpp",
                                 0x2bf);
      thunk_FUN_006bf5d0(uVar8,uVar7);
    }
  }
  CMemFile::CMemFile(aCStack_68,param_6,param_7,0);
  iStack_8 = CONCAT31(iStack_8._1_3_,2);
  uStack_6c = -(uint)(param_5 != 0x378) & (uint)aCStack_68;
  pCStack_74 = (COleControlSite *)0x0;
  if (((-1 < iStack_78) && (iVar4 = thunk_FUN_007717d0(1), iVar4 != 0)) &&
     (iVar4 = CreateControl(0,&CStack_98,0,*(undefined4 *)param_4,&tStack_28,
                            *(undefined2 *)(param_4 + 0x10),uStack_6c,param_5 == 0x377,iStack_84,
                            &pCStack_74), iVar4 != 0)) {
    if ((pCStack_74 == (COleControlSite *)0x0) &&
       (iVar4 = AfxAssertFailedLine("f:\\dd\\vctools\\vc7libs\\ship\\atlmfc\\src\\mfc\\occmgr.cpp",
                                    0x2ce), iVar4 != 0)) {
      pcVar2 = (code *)swi(3);
      iVar4 = (*pcVar2)();
      return iVar4;
    }
    COleControlSite::FreezeEvents(pCStack_74,1);
    SetWindowPos(*(HWND *)(pCStack_74 + 0x24),param_2,0,0,0,0,0x13);
    *(CDataBoundProperty **)(pCStack_74 + 0x94) = pCStack_9c;
    thunk_FUN_006c9180(auStack_70);
    *(ushort *)(pCStack_74 + 0x98) = uStack_80;
    *(undefined4 *)(pCStack_74 + 0x9c) = uStack_88;
    *(undefined4 *)(pCStack_74 + 0xa0) = uStack_14;
  }
  if (iStack_84 != 0) {
    Ordinal_6(iStack_84);
  }
  if (pCStack_74 == (COleControlSite *)0x0) {
    *param_8 = (HWND__ *)0x0;
    iStack_8 = (uint)iStack_8._1_3_ << 8;
    CMemFile::~CMemFile(aCStack_68);
    iStack_8 = 0xffffffff;
    thunk_FUN_006bef70();
  }
  else {
    *param_8 = *(HWND__ **)(pCStack_74 + 0x24);
    iStack_8 = (uint)iStack_8._1_3_ << 8;
    CMemFile::~CMemFile(aCStack_68);
    iStack_8 = 0xffffffff;
    thunk_FUN_006bef70();
  }
  ExceptionList = pvStack_10;
  iVar4 = __security_check_cookie(uStack_18 ^ (uint)&stack0xfffffffc);
  return iVar4;
}



void __fastcall thunk_FUN_008d6d30(undefined4 param_1)

{
  thunk_FUN_008d6d50(param_1);
  return;
}



void __thiscall Dump(CObject *param_1,CDumpContext *param_2)

{
  CDumpContext *pCVar1;
  int iVar2;
  IControlSiteFactory **ppIVar3;
  ulong uVar4;
  char *pcVar5;
  IControlSiteFactory *pIStack_c;
  __POSITION *p_Stack_8;
  
  CObject::Dump(param_1,param_2);
  pcVar5 = " elements";
  uVar4 = *(ulong *)(param_1 + 0xc);
  pCVar1 = CDumpContext::operator<<(param_2,"with ");
  pCVar1 = CDumpContext::operator<<(pCVar1,uVar4);
  CDumpContext::operator<<(pCVar1,pcVar5);
  iVar2 = CDumpContext::GetDepth(param_2);
  if (0 < iVar2) {
    p_Stack_8 = (__POSITION *)thunk_FUN_006e4db0();
    while (p_Stack_8 != (__POSITION *)0x0) {
      ppIVar3 = CList<>::GetNext((CList<> *)param_1,&p_Stack_8);
      pIStack_c = *ppIVar3;
      CDumpContext::operator<<(param_2,"\n");
      DumpElements<>(param_2,&pIStack_c,1);
    }
  }
  CDumpContext::operator<<(param_2,"\n");
  return;
}



void __thiscall
CMFCVisualManagerOffice2007::OnDrawComboBorder
          (CMFCVisualManagerOffice2007 *this,CDC *param_1,LONG param_3,LONG param_4,LONG param_5,
          LONG param_6,int param_7,int param_8,int param_9,undefined4 param_10)

{
  uint uVar1;
  int iVar2;
  ulong uStack_28;
  CDrawingManager aCStack_20 [8];
  ulong uStack_18;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_00b59428;
  pvStack_10 = ExceptionList;
  uVar1 = DAT_00c4a700 ^ (uint)&stack0xfffffffc;
  ExceptionList = &pvStack_10;
  iVar2 = CanDrawImage(this);
  if (iVar2 == 0) {
    CMFCVisualManagerOffice2003::OnDrawComboBorder
              ((CMFCVisualManagerOffice2003 *)this,param_1,param_3,param_4,param_5,param_6,param_7,
               param_8,param_9,param_10);
  }
  else {
    CRect::DeflateRect((CRect *)&param_3,1,1);
    uStack_18 = *(ulong *)(this + 0x89dc);
    if (param_7 == 0) {
      if ((param_9 != 0) || (param_8 != 0)) {
        if (param_8 == 0) {
          uStack_28 = *(ulong *)(this + 0x89e8);
        }
        else {
          uStack_28 = *(ulong *)(this + 0x89e4);
        }
        uStack_18 = uStack_28;
      }
    }
    else {
      uStack_18 = *(ulong *)(this + 0x89e0);
    }
    if (DAT_00c57bbc == 0) {
      CDC::Draw3dRect(param_1,(tagRECT *)&param_3,uStack_18,uStack_18);
    }
    else {
      CDrawingManager::CDrawingManager(aCStack_20,param_1);
      uStack_8 = 0;
      CDrawingManager::DrawRect(aCStack_20,(CRect *)&param_3,0xffffffff,uStack_18);
      uStack_8 = 0xffffffff;
      thunk_FUN_00943a10(uVar1);
    }
  }
  ExceptionList = pvStack_10;
  return;
}



undefined4 * __fastcall thunk_FUN_007170e0(undefined4 *param_1)

{
  *param_1 = 0;
  return param_1;
}



void __thiscall
CMFCStandardColorsPropertyPage::AdjustControlWidth
          (CMFCStandardColorsPropertyPage *this,CMFCColorPickerCtrl *param_1,int param_2)

{
  uint uVar1;
  HWND hWnd;
  BOOL BVar2;
  tagPOINT *ptVar3;
  tagRECT *ptVar4;
  int iVar5;
  uint uVar6;
  int iStack_14;
  
  uVar1 = DAT_00c4a700 ^ (uint)&stack0xfffffffc;
  AfxAssertValidObject
            ((CObject *)param_1,
             "f:\\dd\\vctools\\vc7libs\\ship\\atlmfc\\src\\mfc\\afxstandardcolorspropertypage.cpp",
             0x80);
  hWnd = (HWND)thunk_FUN_006d9400();
  BVar2 = IsWindow(hWnd);
  if (BVar2 != 0) {
    thunk_FUN_00b31aa0();
    ptVar3 = (tagPOINT *)thunk_FUN_00b31df0();
    CWnd::ClientToScreen((CWnd *)param_1,ptVar3);
    ptVar4 = (tagRECT *)thunk_FUN_00b31df0();
    CWnd::ScreenToClient((CWnd *)this,ptVar4);
    uVar6 = 0x14;
    iVar5 = thunk_FUN_00b31c60();
    CWnd::SetWindowPos((CWnd *)param_1,(CWnd *)0x0,*(int *)(this + 0x224),iStack_14,
                       param_2 + *(int *)(this + 0x224) * -2,iVar5,uVar6);
  }
  __security_check_cookie(uVar1 ^ (uint)&stack0xfffffffc);
  return;
}



CPtrList * __thiscall CPtrList::CPtrList(CPtrList *this,int param_1)

{
  code *pcVar1;
  int iVar2;
  CPtrList *pCVar3;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_00b525e8;
  pvStack_10 = ExceptionList;
  ExceptionList = &pvStack_10;
  thunk_FUN_006c9880(DAT_00c4a700 ^ (uint)&stack0xfffffffc);
  uStack_8 = 0;
  *(undefined ***)this = vftable;
  if (param_1 < 1) {
    iVar2 = AfxAssertFailedLine("f:\\dd\\vctools\\vc7libs\\ship\\atlmfc\\src\\mfc\\list_p.cpp",0x1e)
    ;
    if (iVar2 != 0) {
      pcVar1 = (code *)swi(3);
      pCVar3 = (CPtrList *)(*pcVar1)();
      return pCVar3;
    }
  }
  *(undefined4 *)(this + 0xc) = 0;
  *(undefined4 *)(this + 0x10) = 0;
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)(this + 0x14) = 0;
  *(int *)(this + 0x18) = param_1;
  ExceptionList = pvStack_10;
  return this;
}



int __cdecl __mbsnbcmp_l(uchar *_Str1,uchar *_Str2,size_t _MaxCount,_locale_t _Locale)

{
  bool bVar1;
  code *pcVar2;
  int iVar3;
  localeinfo_struct *plVar4;
  int *piVar5;
  size_t sVar6;
  uchar *puVar7;
  ushort uStack_40;
  _LocaleUpdate a_Stack_1c [16];
  ushort uStack_c;
  ushort uStack_8;
  
  if (_MaxCount == 0) {
    iVar3 = 0;
  }
  else {
    _LocaleUpdate::_LocaleUpdate(a_Stack_1c,_Locale);
    plVar4 = _LocaleUpdate::GetLocaleT(a_Stack_1c);
    if (plVar4->mbcinfo->ismbcodepage == 0) {
      iVar3 = _strncmp((char *)_Str1,(char *)_Str2,_MaxCount);
      _LocaleUpdate::~_LocaleUpdate(a_Stack_1c);
    }
    else {
      if ((_Str1 == (uchar *)0x0) &&
         (iVar3 = FID_conflict___CrtDbgReport
                            (2,L"f:\\dd\\vctools\\crt_bld\\self_x86\\crt\\src\\mbsnbcmp.c",0x3e,0,
                             L"s1 != NULL"), iVar3 == 1)) {
        pcVar2 = (code *)swi(3);
        iVar3 = (*pcVar2)();
        return iVar3;
      }
      if (_Str1 != (uchar *)0x0) {
        if ((_Str2 == (uchar *)0x0) &&
           (iVar3 = FID_conflict___CrtDbgReport
                              (2,L"f:\\dd\\vctools\\crt_bld\\self_x86\\crt\\src\\mbsnbcmp.c",0x3f,0,
                               L"s2 != NULL"), iVar3 == 1)) {
          pcVar2 = (code *)swi(3);
          iVar3 = (*pcVar2)();
          return iVar3;
        }
        if (_Str2 != (uchar *)0x0) {
          do {
            sVar6 = _MaxCount - 1;
            if (_MaxCount == 0) {
              _LocaleUpdate::~_LocaleUpdate(a_Stack_1c);
              return 0;
            }
            uStack_8 = (ushort)*_Str1;
            puVar7 = _Str1 + 1;
            plVar4 = _LocaleUpdate::GetLocaleT(a_Stack_1c);
            if ((plVar4->mbcinfo->mbctype[(byte)uStack_8 + 5] & 4) == 0) {
LAB_00ad808c:
              _Str1 = puVar7;
              uStack_c = (ushort)*_Str2;
              puVar7 = _Str2 + 1;
              plVar4 = _LocaleUpdate::GetLocaleT(a_Stack_1c);
              if ((plVar4->mbcinfo->mbctype[(byte)uStack_c + 5] & 4) != 0) {
                if (sVar6 == 0) {
                  uStack_c = 0;
                }
                else {
                  sVar6 = _MaxCount - 2;
                  if (*puVar7 == '\0') {
                    uStack_c = 0;
                  }
                  else {
                    uStack_c = (ushort)CONCAT21(uStack_c,*puVar7);
                    puVar7 = _Str2 + 2;
                  }
                }
              }
            }
            else {
              if (sVar6 != 0) {
                if (*puVar7 == '\0') {
                  uStack_8 = 0;
                }
                else {
                  uStack_8 = (ushort)CONCAT21(uStack_8,*puVar7);
                  puVar7 = _Str1 + 2;
                }
                goto LAB_00ad808c;
              }
              uStack_8 = 0;
              plVar4 = _LocaleUpdate::GetLocaleT(a_Stack_1c);
              if ((plVar4->mbcinfo->mbctype[*_Str2 + 5] & 4) == 0) {
                uStack_40 = (ushort)*_Str2;
              }
              else {
                uStack_40 = 0;
              }
              uStack_c = uStack_40;
              _Str1 = puVar7;
              puVar7 = _Str2;
            }
            _MaxCount = sVar6;
            _Str2 = puVar7;
            if (uStack_8 != uStack_c) {
              bVar1 = uStack_c < uStack_8;
              _LocaleUpdate::~_LocaleUpdate(a_Stack_1c);
              return (uint)bVar1 * 2 + -1;
            }
          } while (uStack_8 != 0);
          _LocaleUpdate::~_LocaleUpdate(a_Stack_1c);
          iVar3 = 0;
        }
        else {
          piVar5 = __errno();
          *piVar5 = 0x16;
          __invalid_parameter(L"s2 != NULL",L"_mbsnbcmp_l",
                              L"f:\\dd\\vctools\\crt_bld\\self_x86\\crt\\src\\mbsnbcmp.c",0x3f,0);
          _LocaleUpdate::~_LocaleUpdate(a_Stack_1c);
          iVar3 = 0x7fffffff;
        }
      }
      else {
        piVar5 = __errno();
        *piVar5 = 0x16;
        __invalid_parameter(L"s1 != NULL",L"_mbsnbcmp_l",
                            L"f:\\dd\\vctools\\crt_bld\\self_x86\\crt\\src\\mbsnbcmp.c",0x3e,0);
        _LocaleUpdate::~_LocaleUpdate(a_Stack_1c);
        iVar3 = 0x7fffffff;
      }
    }
  }
  return iVar3;
}



void ___(undefined4 param_1,undefined4 param_2)

{
  _IsEqualGUID(param_1,param_2);
  return;
}



undefined ** thunk_FUN_007973d0(void)

{
  return &PTR_s_CStatusBarCtrl_00b9b46c;
}



undefined ** thunk_FUN_008a1980(void)

{
  return &PTR_s_CMFCCustomizeButton_00c45c94;
}



void __thiscall DoDataExchange(int param_1,CDataExchange *param_2)

{
  thunk_FUN_006dc9a0(param_2);
  DDX_Control(param_2,0x4090,(CWnd *)(param_1 + 0xa8));
  DDX_Control(param_2,0x4104,(CWnd *)(param_1 + 0x11c));
  DDX_Control(param_2,0x4102,(CWnd *)(param_1 + 0x1a8));
  DDX_Control(param_2,0x408e,(CWnd *)(param_1 + 0x21c));
  DDX_Control(param_2,0x4106,(CWnd *)(param_1 + 0x290));
  DDX_Control(param_2,0x4103,(CWnd *)(param_1 + 0x304));
  DDX_Control(param_2,0x4101,(CWnd *)(param_1 + 0x378));
  DDX_Control(param_2,0x40d9,(CWnd *)(param_1 + 0x3ec));
  DDX_Control(param_2,0x4105,(CWnd *)(param_1 + 0x460));
  DDX_Text(param_2,0x4082,(CStringT<> *)(param_1 + 0x4d4));
  DDX_Text(param_2,0x408f,(CStringT<> *)(param_1 + 0x4d8));
  return;
}



undefined4 __thiscall thunk_FUN_009cf5e0(undefined4 param_1,uint param_2)

{
  thunk_FUN_009cf680();
  if ((param_2 & 1) != 0) {
    thunk_FUN_006c4610(param_1);
  }
  return param_1;
}



int __thiscall
CDockablePane::DockToFrameWindow
          (CDockablePane *this,ulong param_1,tagRECT *param_2,ulong param_3,CBasePane *param_4,
          int param_5,int param_6)

{
  code *pcVar1;
  int iVar2;
  CFrameWnd *pCVar3;
  BOOL BVar4;
  CWnd *pCVar5;
  char *pcVar6;
  tagPOINT *ptVar7;
  CTraceFileAndLineInfo *this_00;
  undefined2 *puVar8;
  CRuntimeClass *pCVar9;
  char *pcVar10;
  undefined4 uVar11;
  CRect aCStack_3c [16];
  int iStack_2c;
  int iStack_28;
  int iStack_24;
  int iStack_20;
  uint uStack_1c;
  int iStack_18;
  int iStack_14;
  CPaneDivider *pCStack_10;
  int iStack_c;
  CDockingManager *pCStack_8;
