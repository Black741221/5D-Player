/*
 * 系統初始化與配置模組
 * 行數範圍：10001-12000
 */

  pvStack_10 = ExceptionList;
  ExceptionList = &pvStack_10;
  uStack_8 = 0;
  CDockBar::~CDockBar((CDockBar *)(this + 0x120));
  uStack_8 = 0xffffffff;
  CMiniFrameWnd::~CMiniFrameWnd((CMiniFrameWnd *)this);
  ExceptionList = pvStack_10;
  return;
}



undefined4 thunk_FUN_008296f0(void)

{
  return 1;
}



int __thiscall
CMFCToolBarComboBoxButton::SelectItem(CMFCToolBarComboBoxButton *this,int param_1,int param_2)

{
  bool bVar1;
  int iVar2;
  char *pcVar3;
  int iStack_1c;
  CStringT<> aCStack_14 [4];
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_00b6f308;
  pvStack_10 = ExceptionList;
  ExceptionList = &pvStack_10;
  iVar2 = thunk_FUN_006cced0(DAT_00c4a700 ^ (uint)&stack0xfffffffc);
  if (param_1 < iVar2) {
    if (param_1 < -1) {
      iStack_1c = -1;
    }
    else {
      iStack_1c = param_1;
    }
    *(int *)(this + 0x74) = iStack_1c;
    iVar2 = thunk_FUN_006d9400();
    if (iVar2 == 0) {
      iVar2 = 1;
    }
    else {
      if (*(int *)(this + 0x74) < 0) {
        thunk_FUN_006c03f0();
      }
      else {
        CComboBox::GetLBText(*(CComboBox **)(this + 0xb4),param_1,(CStringT<> *)(this + 0xb8));
      }
      if (*(int *)(this + 0xb0) != 0) {
        thunk_FUN_006bef10();
        uStack_8 = 0;
        CWnd::GetWindowTextA(*(CWnd **)(this + 0xb0),aCStack_14);
        bVar1 = ATL::operator!=(aCStack_14,(CStringT<> *)(this + 0xb8));
        if (bVar1) {
          pcVar3 = (char *)thunk_FUN_006bf040();
          CWnd::SetWindowTextA(*(CWnd **)(this + 0xb0),pcVar3);
        }
        uStack_8 = 0xffffffff;
        thunk_FUN_006bef70();
      }
      iVar2 = CComboBox::GetCurSel(*(CComboBox **)(this + 0xb4));
      if (iVar2 == param_1) {
        iVar2 = 1;
      }
      else {
        iVar2 = CComboBox::SetCurSel(*(CComboBox **)(this + 0xb4),param_1);
        if (iVar2 == -1) {
          iVar2 = 0;
        }
        else {
          if (param_2 != 0) {
            (**(code **)(*(int *)this + 0x48))(9);
          }
          iVar2 = 1;
        }
      }
    }
  }
  else {
    iVar2 = 0;
  }
  ExceptionList = pvStack_10;
  return iVar2;
}



void __thiscall CThreadSlotData::~CThreadSlotData(CThreadSlotData *this)

{
  CThreadData *pCVar1;
  HGLOBAL hMem;
  CThreadData *pCStack_8;
  
  pCStack_8 = (CThreadData *)thunk_FUN_0072bba0();
  while (pCStack_8 != (CThreadData *)0x0) {
    pCVar1 = *(CThreadData **)(pCStack_8 + 4);
    DeleteValues(this,pCStack_8,(HINSTANCE__ *)0x0);
    pCStack_8 = pCVar1;
  }
  if (*(int *)this != -1) {
    TlsFree(*(DWORD *)this);
    *(undefined4 *)this = 0xffffffff;
  }
  if (*(int *)(this + 0x10) != 0) {
    hMem = GlobalHandle(*(LPCVOID *)(this + 0x10));
    GlobalUnlock(hMem);
    GlobalFree(hMem);
    *(undefined4 *)(this + 0x10) = 0;
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)(this + 0x1c));
  return;
}



undefined4 __thiscall CPair(undefined4 param_1,undefined4 param_2)

{
  thunk_FUN_006c4270(param_2);
  thunk_FUN_006bef10();
  return param_1;
}



uchar * __thiscall CMemFile::Realloc(CMemFile *this,uchar *param_1,ulong param_2)

{
  code *pcVar1;
  int iVar2;
  uchar *puVar3;
  
  if (param_2 == 0) {
    iVar2 = AfxAssertFailedLine("f:\\dd\\vctools\\vc7libs\\ship\\atlmfc\\src\\mfc\\filemem.cpp",0x61
                               );
    if (iVar2 != 0) {
      pcVar1 = (code *)swi(3);
      puVar3 = (uchar *)(*pcVar1)();
      return puVar3;
    }
  }
  puVar3 = (uchar *)_realloc(param_1,param_2);
  return puVar3;
}



DName * __cdecl UnDecorator::getDataType(DName *param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  DName *in_stack_00000008;
  DName aDStack_20 [8];
  DName aDStack_18 [8];
  DName *pDStack_10;
  DName aDStack_c [8];
  
  DName::DName(aDStack_c,in_stack_00000008);
  cVar1 = *DAT_00c5afc4;
  if (cVar1 == '\0') {
    ::operator+((DNameStatus)param_1,(DName *)0x1);
  }
  else if (cVar1 == '?') {
    DAT_00c5afc4 = DAT_00c5afc4 + 1;
    pDStack_10 = (DName *)&DAT_00b899f7;
    iVar2 = DName::DName(aDStack_18);
    uVar3 = getDataIndirectType(aDStack_20,(char *)aDStack_c,pDStack_10,iVar2);
    thunk_FUN_00b1ae80(uVar3);
    getPrimaryDataType(param_1);
  }
  else if (cVar1 == 'X') {
    DAT_00c5afc4 = DAT_00c5afc4 + 1;
    iVar2 = Replicator::isFull((Replicator *)aDStack_c);
    if (iVar2 == 0) {
      ::operator+((char *)param_1,(DName *)"void ");
    }
    else {
      DName::DName(param_1,"void");
    }
  }
  else {
    getPrimaryDataType(param_1);
  }
  return param_1;
}



int __thiscall
CMFCToolBar::OnDrop(CMFCToolBar *this,undefined4 param_1,int param_2,undefined4 param_4,
                   undefined4 param_5)

{
  CMFCToolBarButton *pCVar1;
  code *pcVar2;
  int iVar3;
  CMFCToolBarButton *pCVar4;
  int *piVar5;
  CWnd *pCVar6;
  CObject *pCVar7;
  undefined **ppuVar8;
  int iStack_48;
  int iStack_18;
  
  AfxAssertValidObject
            ((CObject *)this,"f:\\dd\\vctools\\vc7libs\\ship\\atlmfc\\src\\mfc\\afxtoolbar.cpp",
             0xb9c);
  if (*(int *)(this + 0xb44) == 0) {
    iStack_18 = *(int *)(this + 0xb8c);
    if (iStack_18 < 0) {
      iVar3 = 0;
    }
    else {
      pCVar1 = *(CMFCToolBarButton **)(this + 0xc98);
      *(undefined4 *)(this + 0xc98) = 0;
      (**(code **)(*(int *)this + 0x3d8))();
      iVar3 = (**(code **)(*(int *)this + 0x398))(param_4,param_5);
      if ((iVar3 < 0) || (pCVar4 = GetButton(this,iVar3), pCVar1 != pCVar4)) {
        piVar5 = (int *)(**(code **)(*(int *)this + 0x400))(param_1);
        if (piVar5 == (int *)0x0) {
          iVar3 = 0;
        }
        else {
          iVar3 = (**(code **)(*piVar5 + 0x80))(this);
          if (iVar3 == 0) {
            if (piVar5 != (int *)0x0) {
              (**(code **)(*piVar5 + 4))(1);
            }
            iVar3 = 1;
          }
          else {
            piVar5[7] = 0;
            if ((pCVar1 != (CMFCToolBarButton *)0x0) && (param_2 != 1)) {
              iVar3 = ButtonToIndex(this,pCVar1);
              if ((iStack_18 == iVar3) || (iStack_18 == iVar3 + 1)) {
                (**(code **)(*(int *)this + 0x418))(pCVar1,this + 0xc80,&param_4);
                if (piVar5 != (int *)0x0) {
                  (**(code **)(*piVar5 + 4))(1);
                }
                return 1;
              }
              (**(code **)(*(int *)this + 0x354))(iVar3);
              if (iVar3 < iStack_18) {
                iStack_18 = iStack_18 + -1;
              }
              iVar3 = thunk_FUN_006cca30();
              if (iStack_18 < iVar3) {
                iStack_48 = iStack_18;
              }
              else {
                iStack_48 = thunk_FUN_006cca30();
              }
              iStack_18 = iStack_48;
            }
            iVar3 = (**(code **)(*(int *)this + 0x348))(piVar5,iStack_18);
            if (iVar3 == -1) {
              iVar3 = AfxAssertFailedLine("f:\\dd\\vctools\\vc7libs\\ship\\atlmfc\\src\\mfc\\afxtoolbar.cpp"
                                          ,0xbd8);
              if (iVar3 != 0) {
                pcVar2 = (code *)swi(3);
                iVar3 = (*pcVar2)();
                return iVar3;
              }
              if (piVar5 != (int *)0x0) {
                (**(code **)(*piVar5 + 4))(1);
              }
              iVar3 = 0;
            }
            else {
              (**(code **)(*(int *)this + 0x210))();
              ppuVar8 = &PTR_s_CMFCTabCtrl_00baebe4;
              pCVar6 = CWnd::SetCapture((CWnd *)this);
              iVar3 = CObject::IsKindOf((CObject *)pCVar6,(CRuntimeClass *)ppuVar8);
              if (iVar3 != 0) {
                pCVar6 = CWnd::SetCapture((CWnd *)this);
                pCVar6 = CWnd::SetCapture(pCVar6);
                pCVar7 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMFCToolBar_00c44928,
                                            (CObject *)pCVar6);
                if (pCVar7 != (CObject *)0x0) {
                  (**(code **)(*(int *)pCVar7 + 0x214))();
                }
              }
              if (DAT_00c55eb8 != 0) {
                (**(code **)(*piVar5 + 0x88))();
              }
              *(undefined4 *)(this + 0xb80) = 0xffffffff;
              CWnd::RedrawWindow((CWnd *)this,(tagRECT *)0x0,(CRgn *)0x0,0x505);
              pCVar6 = CWnd::SetCapture((CWnd *)this);
              pCVar7 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMFCPopupMenu_00c46068,
                                          (CObject *)pCVar6);
              if (pCVar7 != (CObject *)0x0) {
                AfxAssertValidObject
                          (pCVar7,"f:\\dd\\vctools\\vc7libs\\ship\\atlmfc\\src\\mfc\\afxtoolbar.cpp"
                           ,0xbf4);
                CWnd::RedrawWindow((CWnd *)pCVar7,(tagRECT *)0x0,(CRgn *)0x0,0x505);
              }
              iVar3 = 1;
            }
          }
        }
      }
      else {
        iVar3 = 0;
      }
    }
  }
  else {
    iVar3 = 0;
  }
  return iVar3;
}



uint __chvalidator_l(localeinfo_struct *param_1,int param_2,uint param_3)

{
  ushort uVar1;
  code *pcVar2;
  int iVar3;
  uint uVar4;
  localeinfo_struct *plVar5;
  _LocaleUpdate a_Stack_14 [16];
  
  _LocaleUpdate::_LocaleUpdate(a_Stack_14,param_1);
  if (0x100 < param_2 + 1U) {
    iVar3 = FID_conflict___CrtDbgReport
                      (2,L"f:\\dd\\vctools\\crt_bld\\self_x86\\crt\\src\\isctype.c",0x44,0,
                       L"(unsigned)(c + 1) <= 256");
    if (iVar3 == 1) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return uVar4;
    }
  }
  if ((param_2 < -1) || (0xff < param_2)) {
    plVar5 = _LocaleUpdate::GetLocaleT(a_Stack_14);
    uVar1 = *(ushort *)(plVar5->locinfo[1].lc_category[0].locale + -2);
    _LocaleUpdate::~_LocaleUpdate(a_Stack_14);
  }
  else {
    plVar5 = _LocaleUpdate::GetLocaleT(a_Stack_14);
    uVar1 = *(ushort *)(plVar5->locinfo[1].lc_category[0].locale + param_2 * 2);
    _LocaleUpdate::~_LocaleUpdate(a_Stack_14);
  }
  return uVar1 & param_3;
}



bool __fastcall FID_conflict_operator_(int *param_1)

{
  return *param_1 == 0;
}



undefined4 __fastcall thunk_FUN_00844650(int param_1)

{
  return *(undefined4 *)(param_1 + 4);
}



CDC * __thiscall CMFCRibbonLinkCtrl::GetCompactSize(CMFCRibbonLinkCtrl *this,CDC *param_1)

{
  undefined4 in_stack_00000008;
  
  AfxAssertValidObject
            ((CObject *)this,
             "f:\\dd\\vctools\\vc7libs\\ship\\atlmfc\\src\\mfc\\afxribbonlinkctrl.cpp",0x55);
  (**(code **)(*(int *)this + 0x5c))(param_1,in_stack_00000008);
  return param_1;
}



void __thiscall CMFCToolBarButtonsListButton::RedrawSelection(CMFCToolBarButtonsListButton *this)

{
  CRect *pCVar1;
  tagRECT *ptVar2;
  int iVar3;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  uint uStack_8;
  
  uStack_8 = DAT_00c4a700 ^ (uint)&stack0xfffffffc;
  if (*(int *)(this + 0x110) != 0) {
    pCVar1 = CMFCToolBarButton::Rect(*(CMFCToolBarButton **)(this + 0x110));
    uStack_18 = *(undefined4 *)pCVar1;
    uStack_14 = *(undefined4 *)(pCVar1 + 4);
    uStack_10 = *(undefined4 *)(pCVar1 + 8);
    uStack_c = *(undefined4 *)(pCVar1 + 0xc);
    CRect::OffsetRect((CRect *)&uStack_18,0,-*(int *)(this + 0x114));
    CRect::InflateRect((CRect *)&uStack_18,2,2);
    iVar3 = 1;
    ptVar2 = (tagRECT *)thunk_FUN_00b31df0();
    CWnd::InvalidateRect((CWnd *)this,ptVar2,iVar3);
    CWnd::UpdateWindow((CWnd *)this);
  }
  __security_check_cookie(uStack_8 ^ (uint)&stack0xfffffffc);
  return;
}



int __thiscall CMap<>::Lookup(CMap<> *this,HMENU__ **param_1,void **param_2)

{
  int iVar1;
  undefined1 auStack_10 [8];
  undefined1 auStack_8 [4];
  
  AfxAssertValidObject
            ((CObject *)this,"f:\\dd\\vctools\\vc7libs\\ship\\atlmfc\\include\\afxtempl.h",0x614);
  iVar1 = ::GetAssocAt(param_1,auStack_10,auStack_8);
  if (iVar1 != 0) {
    *param_2 = *(void **)(iVar1 + 4);
  }
  return (uint)(iVar1 != 0);
}



void __thiscall CMFCTabCtrl::SetResizeMode(CMFCTabCtrl *this,ResizeMode param_1)

{
  *(ResizeMode *)(this + 0x27e4) = param_1;
  (**(code **)(*(int *)this + 0x188))();
  return;
}



void __thiscall DeleteValue(int *param_1,LPCSTR param_2)

{
  code *pcVar1;
  int iVar2;
  
  if ((*param_1 == 0) &&
     (iVar2 = FID_conflict___CrtDbgReport
                        (2,L"f:\\dd\\vctools\\vc7libs\\ship\\atlmfc\\include\\atlbase.h",0x164f,0,
                         L"m_hKey != 0"), iVar2 == 1)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  RegDeleteValueA((HKEY)*param_1,param_2);
  return;
}



int __thiscall CMDIChildWndEx::IsTabbedPane(CMDIChildWndEx *this)

{
  return (uint)(*(int *)(this + 0x434) != 0);
}



undefined4 __fastcall thunk_FUN_006cc700(int param_1)

{
  return *(undefined4 *)(param_1 + 4);
}



void __thiscall
CMFCPropertyGridToolTipCtrl::SetTextMargin(CMFCPropertyGridToolTipCtrl *this,int param_1)

{
  *(int *)(this + 0x88) = param_1;
  return;
}



void __thiscall CMFCTabCtrl::StopResize(CMFCTabCtrl *this,int param_1)

{
  tagPOINT *ptVar1;
  CWnd *this_00;
  uint uVar2;
  undefined1 *puVar3;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined1 auStack_28 [8];
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined1 auStack_18 [16];
  uint uStack_8;
  
  uStack_8 = DAT_00c4a700 ^ (uint)&stack0xfffffffc;
  if (*(int *)(this + 0x250) != 0) {
    thunk_FUN_00b31aa0();
    thunk_FUN_00b31f60();
    (**(code **)(*(int *)this + 0x2f4))(auStack_18,this + 0x2c0);
    *(undefined4 *)(this + 0x250) = 0;
    ReleaseCapture();
    if (param_1 == 0) {
      thunk_FUN_00b31aa0();
      ptVar1 = (tagPOINT *)thunk_FUN_00b31df0();
      CWnd::ClientToScreen((CWnd *)this,ptVar1);
      if (*(int *)(this + 0x27e4) == 1) {
        uStack_30 = *(undefined4 *)(this + 0x2c8);
      }
      else if (*(int *)(this + 0x27e4) == 2) {
        uStack_2c = *(undefined4 *)(this + 0x2cc);
      }
      uStack_20 = uStack_30;
      uStack_1c = uStack_2c;
      puVar3 = auStack_28;
      uVar2 = DAT_00c57e2c;
      this_00 = CWnd::SetCapture((CWnd *)this);
      CWnd::SendMessageA(this_00,uVar2,(uint)this,(long)puVar3);
    }
    thunk_FUN_00b31f60();
    thunk_FUN_00b31f60();
  }
  __security_check_cookie(uStack_8 ^ (uint)&stack0xfffffffc);
  return;
}



int __thiscall CSliderCtrl::GetRangeMax(CSliderCtrl *this)

{
  code *pcVar1;
  BOOL BVar2;
  int iVar3;
  LRESULT LVar4;
  
  BVar2 = IsWindow(*(HWND *)(this + 0x20));
  if (BVar2 == 0) {
    iVar3 = AfxAssertFailedLine("f:\\dd\\vctools\\vc7libs\\ship\\atlmfc\\include\\afxcmn.inl",0x1d1)
    ;
    if (iVar3 != 0) {
      pcVar1 = (code *)swi(3);
      iVar3 = (*pcVar1)();
      return iVar3;
    }
  }
  LVar4 = SendMessageA(*(HWND *)(this + 0x20),0x402,0,0);
  return LVar4;
}



int __thiscall
CMFCRibbonMainPanel::GetPreferedMenuLocation(CMFCRibbonMainPanel *this,CRect *param_1)

{
  uint uVar1;
  undefined4 *puVar2;
  CMFCVisualManager *this_00;
  int iVar3;
  int iStack_24;
  
  uVar1 = DAT_00c4a700 ^ (uint)&stack0xfffffffc;
  AfxAssertValidObject
            ((CObject *)this,
             "f:\\dd\\vctools\\vc7libs\\ship\\atlmfc\\src\\mfc\\afxribbonmainpanel.cpp",0x215);
  if (*(int *)(this + 0x288) != 0) {
    AfxAssertValidObject
              (*(CObject **)(this + 0x288),
               "f:\\dd\\vctools\\vc7libs\\ship\\atlmfc\\src\\mfc\\afxribbonmainpanel.cpp",0x21c);
    puVar2 = (undefined4 *)CMFCRibbonBaseElement::GetRect(*(CMFCRibbonBaseElement **)(this + 0x288))
    ;
    *(undefined4 *)param_1 = *puVar2;
    *(undefined4 *)(param_1 + 4) = puVar2[1];
    *(undefined4 *)(param_1 + 8) = puVar2[2];
    *(undefined4 *)(param_1 + 0xc) = puVar2[3];
    CRect::DeflateRect(param_1,1,1);
    iVar3 = CMFCMenuBar::IsMenuShadows();
    if (((iVar3 == 0) || (iVar3 = CMFCToolBar::IsCustomizeMode(), iVar3 != 0)) || (DAT_00c5593c < 9)
       ) {
      iStack_24 = 0;
    }
    else {
      this_00 = CMFCVisualManager::GetInstance();
      iStack_24 = CMFCVisualManager::GetMenuShadowDepth(this_00);
    }
    *(int *)(param_1 + 8) = *(int *)(param_1 + 8) - (iStack_24 + 3);
    *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) - (iStack_24 + 3);
  }
  iVar3 = __security_check_cookie(uVar1 ^ (uint)&stack0xfffffffc);
  return iVar3;
}



CMFCImageEditorDialog * __thiscall
CMFCImageEditorDialog::CMFCImageEditorDialog
          (CMFCImageEditorDialog *this,CBitmap *param_1,CWnd *param_2,int param_3)

{
  undefined4 uVar1;
  code *pcVar2;
  undefined4 *puVar3;
  int iVar4;
  CMFCImageEditorDialog *pCVar5;
  uint uStack_38;
  tagBITMAP tStack_28;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_00b7192c;
  pvStack_10 = ExceptionList;
  ExceptionList = &pvStack_10;
  CDialogEx::CDialogEx((CDialogEx *)this,0x3f05,param_2);
  uStack_8 = 0;
  *(undefined ***)this = vftable;
  CStatic::CStatic((CStatic *)(this + 0xb8));
  uStack_8._0_1_ = 1;
  CStatic::CStatic((CStatic *)(this + 300));
  uStack_8._0_1_ = 2;
  CStatic::CStatic((CStatic *)(this + 0x1a0));
  uStack_8._0_1_ = 3;
  CMFCImagePaintArea::CMFCImagePaintArea((CMFCImagePaintArea *)(this + 0x214),this);
  uStack_8._0_1_ = 4;
  *(CBitmap **)(this + 0x300) = param_1;
  CSize::CSize((CSize *)(this + 0x304));
  thunk_FUN_00b31aa0();
  thunk_FUN_00b31aa0();
  CMFCColorBar::CMFCColorBar((CMFCColorBar *)(this + 0x330));
  uStack_8._0_1_ = 5;
  CMFCImageEditorPaletteBar::CMFCImageEditorPaletteBar((CMFCImageEditorPaletteBar *)(this + 0x1120))
  ;
  uStack_8 = CONCAT31(uStack_8._1_3_,6);
  AfxAssertValidObject
            (*(CObject **)(this + 0x300),
             "f:\\dd\\vctools\\vc7libs\\ship\\atlmfc\\src\\mfc\\afximageeditordialog.cpp",0x1f);
  CBitmap::GetBitmap(*(CBitmap **)(this + 0x300),&tStack_28);
  puVar3 = (undefined4 *)thunk_FUN_00b31090(tStack_28.bmWidth,tStack_28.bmHeight);
  uVar1 = puVar3[1];
  *(undefined4 *)(this + 0x304) = *puVar3;
  *(undefined4 *)(this + 0x308) = uVar1;
  if (param_3 == -1) {
    uStack_38 = (uint)tStack_28.bmBitsPixel;
  }
  else {
    uStack_38 = param_3;
  }
  *(uint *)(this + 0x30c) = uStack_38;
  if (*(int *)(this + 0x30c) < 4) {
    iVar4 = AfxAssertFailedLine("f:\\dd\\vctools\\vc7libs\\ship\\atlmfc\\src\\mfc\\afximageeditordialog.cpp"
                                ,0x27);
    if (iVar4 != 0) {
      pcVar2 = (code *)swi(3);
      pCVar5 = (CMFCImageEditorDialog *)(*pcVar2)();
      return pCVar5;
    }
  }
  ExceptionList = pvStack_10;
  return this;
}



int __thiscall CReBarCtrl::GetRect(CReBarCtrl *this,uint param_1,tagRECT *param_2)

{
  code *pcVar1;
  BOOL BVar2;
  int iVar3;
  LRESULT LVar4;
  
  BVar2 = IsWindow(*(HWND *)(this + 0x20));
  if (BVar2 == 0) {
    iVar3 = AfxAssertFailedLine("f:\\dd\\vctools\\vc7libs\\ship\\atlmfc\\include\\afxcmn2.inl",0xd1)
    ;
    if (iVar3 != 0) {
      pcVar1 = (code *)swi(3);
      iVar3 = (*pcVar1)();
      return iVar3;
    }
  }
  LVar4 = SendMessageA(*(HWND *)(this + 0x20),0x409,param_1,(LPARAM)param_2);
  return LVar4;
}



void __thiscall CMFCToolTipCtrl::SetParams(CMFCToolTipCtrl *this,CMFCToolTipInfo *param_1)

{
  CMFCToolTipInfo aCStack_38 [52];
  
  AfxAssertValidObject
            ((CObject *)this,"f:\\dd\\vctools\\vc7libs\\ship\\atlmfc\\src\\mfc\\afxtooltipctrl.cpp",
             0x25a);
  if (param_1 == (CMFCToolTipInfo *)0x0) {
    CMFCToolTipInfo::CMFCToolTipInfo(aCStack_38);
    CMFCToolTipInfo::operator=((CMFCToolTipInfo *)(this + 0xa0),aCStack_38);
  }
  else {
    CMFCToolTipInfo::operator=((CMFCToolTipInfo *)(this + 0xa0),param_1);
  }
  return;
}



void __thiscall COleIPFrameWnd::RecalcLayout(COleIPFrameWnd *this,int param_1)

{
  int iVar1;
  CWnd *pCVar2;
  tagRECT tStack_54;
  CWnd *pCStack_44;
  tagRECT tStack_40;
  undefined4 uStack_30;
  COleServerDoc *pCStack_2c;
  tagRECT tStack_28;
  tagRECT tStack_18;
  uint uStack_8;
  
  uStack_8 = DAT_00c4a700 ^ (uint)&stack0xfffffffc;
  AfxAssertValidObject
            ((CObject *)this,"f:\\dd\\vctools\\vc7libs\\ship\\atlmfc\\src\\mfc\\oleipfrm.cpp",0x16f)
  ;
  pCStack_44 = CWnd::SetCapture((CWnd *)this);
  AfxAssertValidObject
            ((CObject *)pCStack_44,"f:\\dd\\vctools\\vc7libs\\ship\\atlmfc\\src\\mfc\\oleipfrm.cpp",
             0x173);
  uStack_30 = 0;
  pCStack_2c = (COleServerDoc *)(**(code **)(*(int *)this + 0x170))();
  if (pCStack_2c != (COleServerDoc *)0x0) {
    AfxAssertValidObject
              ((CObject *)pCStack_2c,
               "f:\\dd\\vctools\\vc7libs\\ship\\atlmfc\\src\\mfc\\oleipfrm.cpp",0x17c);
    iVar1 = COleServerDoc::IsDocObject(pCStack_2c);
    if (iVar1 != 0) {
      uStack_30 = 1;
    }
  }
  CRect::CRect((CRect *)&tStack_18,0,0,0x3fffffff,0x3fffffff);
  thunk_FUN_00b31aa0();
  CWnd::RepositionBars((CWnd *)this,0,0xffff,0xe900,1,&tStack_40,&tStack_18,1);
  tStack_28.left = *(int *)(this + 0x158) - tStack_40.left;
  tStack_28.top = *(int *)(this + 0x15c) - tStack_40.top;
  tStack_28.right = (0x3fffffff - tStack_40.right) + *(int *)(this + 0x160);
  tStack_28.bottom = (0x3fffffff - tStack_40.bottom) + *(int *)(this + 0x164);
  pCVar2 = CWnd::GetDlgItem((CWnd *)this,0xe900);
  if (pCVar2 != (CWnd *)0x0) {
    tStack_18.left = *(LONG *)(this + 0x158);
    tStack_18.top = *(LONG *)(this + 0x15c);
    tStack_18.right = *(LONG *)(this + 0x160);
    tStack_18.bottom = *(LONG *)(this + 0x164);
    (**(code **)(*(int *)pCVar2 + 0x70))(&tStack_18,1);
    tStack_28.left = tStack_28.left - (*(int *)(this + 0x158) - tStack_18.left);
    tStack_28.top = tStack_28.top - (*(int *)(this + 0x15c) - tStack_18.top);
    tStack_28.right = (tStack_18.right - *(int *)(this + 0x160)) + tStack_28.right;
    tStack_28.bottom = (tStack_18.bottom - *(int *)(this + 0x164)) + tStack_28.bottom;
  }
  (**(code **)(*(int *)this + 0x70))(&tStack_28,uStack_30);
  thunk_FUN_00b31aa0();
  CRect::IntersectRect((CRect *)&tStack_54,&tStack_28,(tagRECT *)(this + 0x168));
  AfxRepositionWindow((AFX_SIZEPARENTPARAMS *)0x0,*(HWND__ **)(this + 0x20),&tStack_54);
  CWnd::ClientToScreen(pCStack_44,&tStack_28);
  CWnd::ScreenToClient((CWnd *)this,&tStack_28);
  CWnd::RepositionBars((CWnd *)this,0,0xffff,0xe900,0,(tagRECT *)0x0,&tStack_28,1);
  __security_check_cookie(uStack_8 ^ (uint)&stack0xfffffffc);
  return;
}



void AfxInitCommonControls(void)

{
  AFX_MODULE_STATE *pAVar1;
  
  pAVar1 = AfxGetModuleState();
  CComCtlWrapper::_InitCommonControls((CComCtlWrapper *)**(undefined4 **)(pAVar1 + 0x78));
  return;
}



// WARNING: Function: __RTC_CheckEsp replaced with injection: __RTC_CheckEsp

undefined4 * thunk_FUN_0069ca80(void)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 auStack_d0 [49];
  undefined4 *puStack_c;
  
  puVar2 = auStack_d0;
  for (iVar1 = 0x33; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0xcccccccc;
    puVar2 = puVar2 + 1;
  }
  CWinApp(0);
  *puStack_c = CShezhi2App::vftable;
  return puStack_c;
}



undefined4 __fastcall thunk_FUN_006c03b0(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 auStack_d0 [51];
  
  puVar2 = auStack_d0;
  for (iVar1 = 0x33; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0xcccccccc;
    puVar2 = puVar2 + 1;
  }
  return *param_1;
}



int AfxEndDeferRegisterClass(long param_1)

{
  uint uVar1;
  int iVar2;
  tagWNDCLASSA tStack_3c;
  uint uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  AFX_MODULE_STATE *pAStack_8;
  
  pAStack_8 = AfxGetModuleState();
  param_1 = ~*(uint *)(pAStack_8 + 0x18) & param_1;
  if (param_1 == 0) {
    uVar1 = 1;
  }
  else {
    uStack_14 = 0;
    _memset(&tStack_3c,0,0x28);
    tStack_3c.lpfnWndProc = DefWindowProcA_exref;
    tStack_3c.hInstance = AfxGetInstanceHandle();
    tStack_3c.hCursor = DAT_00c55df8;
    uStack_10 = 8;
    if ((param_1 & 1U) != 0) {
      tStack_3c.style = 0xb;
      tStack_3c.lpszClassName = "AfxWnd100sd";
      iVar2 = thunk_FUN_006f3910(&tStack_3c);
      if (iVar2 != 0) {
        uStack_14 = uStack_14 | 1;
      }
    }
    if ((param_1 & 0x20U) != 0) {
      tStack_3c.style = tStack_3c.style | 0x8b;
      tStack_3c.lpszClassName = "AfxOleControl100sd";
      iVar2 = thunk_FUN_006f3910(&tStack_3c);
      if (iVar2 != 0) {
        uStack_14 = uStack_14 | 0x20;
      }
    }
    if ((param_1 & 2U) != 0) {
      tStack_3c.style = 0;
      tStack_3c.lpszClassName = "AfxControlBar100sd";
      tStack_3c.hbrBackground = (HBRUSH)0x10;
      iVar2 = thunk_FUN_006f3910(&tStack_3c);
      if (iVar2 != 0) {
        uStack_14 = uStack_14 | 2;
      }
    }
    if ((param_1 & 4U) != 0) {
      tStack_3c.style = 8;
      tStack_3c.hbrBackground = (HBRUSH)0x0;
      iVar2 = _AfxRegisterWithIcon(&tStack_3c,"AfxMDIFrame100sd",0x7a01);
      if (iVar2 != 0) {
        uStack_14 = uStack_14 | 4;
      }
    }
    if ((param_1 & 8U) != 0) {
      tStack_3c.style = 0xb;
      tStack_3c.hbrBackground = (HBRUSH)0x6;
      iVar2 = _AfxRegisterWithIcon(&tStack_3c,"AfxFrameOrView100sd",0x7a02);
      if (iVar2 != 0) {
        uStack_14 = uStack_14 | 8;
      }
    }
    if ((param_1 & 0x10U) != 0) {
      uStack_c = 0xff;
      uVar1 = _AfxInitCommonControls((tagINITCOMMONCONTROLSEX *)&uStack_10,0x3fc0);
      uStack_14 = uVar1 | uStack_14;
      param_1 = param_1 & 0xffffc03f;
    }
    if ((param_1 & 0x40U) != 0) {
      uStack_c = 0x10;
      uVar1 = _AfxInitCommonControls((tagINITCOMMONCONTROLSEX *)&uStack_10,0x40);
      uStack_14 = uVar1 | uStack_14;
    }
    if ((param_1 & 0x80U) != 0) {
      uStack_c = 2;
      uVar1 = _AfxInitCommonControls((tagINITCOMMONCONTROLSEX *)&uStack_10,0x80);
      uStack_14 = uVar1 | uStack_14;
    }
    if ((param_1 & 0x100U) != 0) {
      uStack_c = 8;
      uVar1 = _AfxInitCommonControls((tagINITCOMMONCONTROLSEX *)&uStack_10,0x100);
      uStack_14 = uVar1 | uStack_14;
    }
    if ((param_1 & 0x200U) != 0) {
      uStack_c = 0x20;
      uVar1 = _AfxInitCommonControls((tagINITCOMMONCONTROLSEX *)&uStack_10,0x200);
      uStack_14 = uVar1 | uStack_14;
    }
    if ((param_1 & 0x400U) != 0) {
      uStack_c = 1;
      uVar1 = _AfxInitCommonControls((tagINITCOMMONCONTROLSEX *)&uStack_10,0x400);
      uStack_14 = uVar1 | uStack_14;
    }
    if ((param_1 & 0x800U) != 0) {
      uStack_c = 0x40;
      uVar1 = _AfxInitCommonControls((tagINITCOMMONCONTROLSEX *)&uStack_10,0x800);
      uStack_14 = uVar1 | uStack_14;
    }
    if ((param_1 & 0x1000U) != 0) {
      uStack_c = 4;
      uVar1 = _AfxInitCommonControls((tagINITCOMMONCONTROLSEX *)&uStack_10,0x1000);
      uStack_14 = uVar1 | uStack_14;
    }
    if ((param_1 & 0x2000U) != 0) {
      uStack_c = 0x80;
      uVar1 = _AfxInitCommonControls((tagINITCOMMONCONTROLSEX *)&uStack_10,0x2000);
      uStack_14 = uVar1 | uStack_14;
    }
    if ((param_1 & 0x4000U) != 0) {
      uStack_c = 0x800;
      uVar1 = _AfxInitCommonControls((tagINITCOMMONCONTROLSEX *)&uStack_10,0x4000);
      uStack_14 = uVar1 | uStack_14;
    }
    if ((param_1 & 0x8000U) != 0) {
      uStack_c = 0x400;
      uVar1 = _AfxInitCommonControls((tagINITCOMMONCONTROLSEX *)&uStack_10,0x8000);
      uStack_14 = uVar1 | uStack_14;
    }
    if ((param_1 & 0x10000U) != 0) {
      uStack_c = 0x200;
      uVar1 = _AfxInitCommonControls((tagINITCOMMONCONTROLSEX *)&uStack_10,0x10000);
      uStack_14 = uVar1 | uStack_14;
    }
    if ((param_1 & 0x20000U) != 0) {
      uStack_c = 0x100;
      uVar1 = _AfxInitCommonControls((tagINITCOMMONCONTROLSEX *)&uStack_10,0x20000);
      uStack_14 = uVar1 | uStack_14;
    }
    if ((param_1 & 0x40000U) != 0) {
      uStack_c = 0x8000;
      uVar1 = _AfxInitCommonControls((tagINITCOMMONCONTROLSEX *)&uStack_10,0x40000);
      uStack_14 = uVar1 | uStack_14;
    }
    if ((param_1 & 0x80000U) != 0) {
      uStack_c = 0x1000;
      uVar1 = _AfxInitCommonControls((tagINITCOMMONCONTROLSEX *)&uStack_10,0x80000);
      uStack_14 = uVar1 | uStack_14;
    }
    *(uint *)(pAStack_8 + 0x18) = *(uint *)(pAStack_8 + 0x18) | uStack_14;
    if ((*(uint *)(pAStack_8 + 0x18) & 0x3fc0) == 0x3fc0) {
      *(uint *)(pAStack_8 + 0x18) = *(uint *)(pAStack_8 + 0x18) | 0x10;
      uStack_14 = uStack_14 | 0x10;
    }
    uVar1 = (uint)((param_1 & uStack_14) == param_1);
  }
  return uVar1;
}



void __thiscall CMFCToolBarDropSource::~CMFCToolBarDropSource(CMFCToolBarDropSource *this)

{
  *(undefined ***)this = vftable;
  if (*(int *)(this + 0x4c) != 0) {
    DeleteObject(*(HGDIOBJ *)(this + 0x4c));
  }
  if (*(int *)(this + 0x50) != 0) {
    DeleteObject(*(HGDIOBJ *)(this + 0x50));
  }
  if (*(int *)(this + 0x54) != 0) {
    DeleteObject(*(HGDIOBJ *)(this + 0x54));
  }
  thunk_FUN_008b3a80();
  return;
}



void __thiscall
FID_conflict_DoPrepareDC(undefined4 param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  (**(code **)(*param_2 + 0x1a8))(param_3,param_4,param_1);
  return;
}



undefined ** thunk_FUN_00861900(void)

{
  return &PTR_s_CMFCMaskedEdit_00baa574;
}



undefined ** thunk_FUN_008528a0(void)

{
  return &PTR_s_CMFCPropertyGridColorProperty_00ba9128;
}



double __thiscall AFX_GLOBAL_DATA::GetRibbonImageScale(AFX_GLOBAL_DATA *this)

{
  double dStack_10;
  
  if (*(int *)(this + 0x1e4) == 0) {
    dStack_10 = 1.0;
  }
  else {
    dStack_10 = *(double *)(this + 0x1dc);
  }
  return dStack_10;
}



wchar_t * __thiscall ATL::CSimpleStringT<wchar_t,0>::GetBuffer(CSimpleStringT<wchar_t,0> *this)

{
  char cVar1;
  int iVar2;
  
  iVar2 = thunk_FUN_0070fa90();
  cVar1 = thunk_FUN_006bfdb0();
  if (cVar1 != '\0') {
    CSimpleStringT<char,0>::Fork((CSimpleStringT<char,0> *)this,*(int *)(iVar2 + 4));
  }
  return *(wchar_t **)this;
}



void __thiscall AFX_GLOBAL_DATA::ReleaseTaskBarRefs(AFX_GLOBAL_DATA *this)

{
  *(undefined4 *)(this + 0x21c) = 0;
  if (*(int *)(this + 0x220) != 0) {
    if (*(int *)(this + 0x220) != 0) {
      (**(code **)(**(int **)(this + 0x220) + 8))(*(undefined4 *)(this + 0x220));
      *(undefined4 *)(this + 0x220) = 0;
    }
    *(undefined4 *)(this + 0x220) = 0;
  }
  if (*(int *)(this + 0x224) != 0) {
    if (*(int *)(this + 0x224) != 0) {
      (**(code **)(**(int **)(this + 0x224) + 8))(*(undefined4 *)(this + 0x224));
      *(undefined4 *)(this + 0x224) = 0;
    }
    *(undefined4 *)(this + 0x224) = 0;
  }
  if (*(int *)(this + 0x218) != 0) {
    CoUninitialize();
    *(undefined4 *)(this + 0x218) = 0;
  }
  return;
}



undefined ** thunk_FUN_009dcb20(void)

{
  return &PTR_s_CCtrlView_00bc3890;
}



void __thiscall
CMFCRibbonCommandsListBox::DrawItem(CMFCRibbonCommandsListBox *this,tagDRAWITEMSTRUCT *param_1)

{
  uint uVar1;
  CDC *this_00;
  int iVar2;
  CObject *pCVar3;
  HBRUSH hbr;
  RECT *lprc;
  HDC__ *hDC;
  tagRECT *ptVar4;
  CBrush *pCVar5;
  int iStack_4c;
  undefined1 auStack_30 [4];
  int iStack_2c;
  undefined4 uStack_28;
  CRect aCStack_24 [16];
  uint uStack_14;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_00b7b0c8;
  pvStack_10 = ExceptionList;
  uStack_14 = DAT_00c4a700 ^ (uint)&stack0xfffffffc;
  ExceptionList = &pvStack_10;
  this_00 = CDC::FromHandle(*(HDC__ **)(param_1 + 0x18));
  AfxAssertValidObject
            ((CObject *)this_00,
             "f:\\dd\\vctools\\vc7libs\\ship\\atlmfc\\src\\mfc\\afxribboncommandslistbox.cpp",0x3f);
  CRect::CRect(aCStack_24,(tagRECT *)(param_1 + 0x1c));
  if (*(int *)(param_1 + 8) != -1) {
    iVar2 = AFX_GLOBAL_DATA::IsRibbonImageScaleEnabled((AFX_GLOBAL_DATA *)&DAT_00c55790);
    AFX_GLOBAL_DATA::EnableRibbonImageScale((AFX_GLOBAL_DATA *)&DAT_00c55790,0);
    CDC::SetBkMode(this_00,1);
    if (((*(uint *)(param_1 + 0x10) & 1) == 0) || ((*(uint *)(param_1 + 0x10) & 0x10) == 0)) {
      iStack_4c = 0;
    }
    else {
      iStack_4c = 1;
    }
    iStack_2c = iStack_4c;
    uVar1 = *(uint *)(param_1 + 0x10);
    pCVar3 = (CObject *)CListBox::GetItemData((CListBox *)this,*(int *)(param_1 + 8));
    AfxAssertValidObject
              (pCVar3,
               "f:\\dd\\vctools\\vc7libs\\ship\\atlmfc\\src\\mfc\\afxribboncommandslistbox.cpp",0x51
              );
    thunk_FUN_006bef10();
    uStack_8 = 0;
    GetText();
    if (iStack_2c == 0) {
      if ((uVar1 & 1) == 0) {
        pCVar5 = (CBrush *)&DAT_00c55850;
        ptVar4 = (tagRECT *)thunk_FUN_00b31df0();
        CDC::FillRect(this_00,ptVar4,pCVar5);
        (**(code **)(*(int *)this_00 + 0x38))();
      }
      else {
        pCVar5 = (CBrush *)&DAT_00c55820;
        ptVar4 = (tagRECT *)thunk_FUN_00b31df0();
        CDC::FillRect(this_00,ptVar4,pCVar5);
        (**(code **)(*(int *)this_00 + 0x38))();
      }
    }
    else {
      hbr = GetSysColorBrush(0xd);
      lprc = (RECT *)thunk_FUN_00b31df0();
      hDC = CDC::GetSafeHdc(this_00);
      FillRect(hDC,lprc,hbr);
      GetSysColor(0xe);
      (**(code **)(*(int *)this_00 + 0x38))();
    }
    uStack_28 = *(undefined4 *)(pCVar3 + 0x98);
    *(undefined4 *)(pCVar3 + 0x98) = *(undefined4 *)(this + 0x78);
    thunk_FUN_006c9150(auStack_30);
    (**(code **)(*(int *)pCVar3 + 0xe0))(this_00);
    *(undefined4 *)(pCVar3 + 0x98) = uStack_28;
    AFX_GLOBAL_DATA::EnableRibbonImageScale((AFX_GLOBAL_DATA *)&DAT_00c55790,iVar2);
    uStack_8 = 0xffffffff;
    thunk_FUN_006bef70();
  }
  ExceptionList = pvStack_10;
  __security_check_cookie(uStack_14 ^ (uint)&stack0xfffffffc);
  return;
}



void __thiscall
CMFCControlRenderer::Draw
          (CMFCControlRenderer *this,undefined4 param_1,int param_3,int param_4,int param_5,
          int param_6,undefined4 param_7,undefined1 param_8)

{
  uint uVar1;
  
  uVar1 = DAT_00c4a700 ^ (uint)&stack0xfffffffc;
  (**(code **)(*(int *)this + 0x24))
            (param_1,param_3 + *(int *)(this + 0x138),param_4 + *(int *)(this + 0x13c),
             param_5 - *(int *)(this + 0x140),param_6 - *(int *)(this + 0x144),param_7,param_8);
  (**(code **)(*(int *)this + 0x1c))(param_1,param_3,param_4,param_5,param_6,param_7,param_8);
  __security_check_cookie(uVar1 ^ (uint)&stack0xfffffffc);
  return;
}



void __thiscall
CMFCRibbonKeyboardCustomizeDialog::OnSelchangeCurrentKeysList
          (CMFCRibbonKeyboardCustomizeDialog *this)

{
  code *pcVar1;
  int iVar2;
  ulong uVar3;
  int iVar4;
  
  iVar2 = CListBox::GetCurSel((CListBox *)(this + 0x290));
  if (iVar2 == -1) {
    *(undefined4 *)(this + 0x504) = 0;
    CWnd::EnableWindow((CWnd *)(this + 0x1a8),0);
  }
  else {
    uVar3 = CListBox::GetItemData((CListBox *)(this + 0x290),iVar2);
    *(ulong *)(this + 0x504) = uVar3;
    iVar2 = *(int *)(this + 0x504);
    if ((iVar2 == 0) &&
       (iVar4 = AfxAssertFailedLine("f:\\dd\\vctools\\vc7libs\\ship\\atlmfc\\src\\mfc\\afxribbonkeyboardcustomizedialog.cpp"
                                    ,0x139), iVar4 != 0)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    if (iVar2 == 0) {
      thunk_FUN_007113e0();
    }
    CWnd::EnableWindow((CWnd *)(this + 0x1a8),1);
  }
  return;
}



int __thiscall
CMFCDropDownToolBar::OnSendCommand(CMFCDropDownToolBar *this,CMFCToolBarButton *param_1)

{
  code *pcVar1;
  int iVar2;
  CWnd *this_00;
  CFrameWnd *pCVar3;
  HWND hWnd;
  UINT Msg;
  WPARAM wParam;
  
  AfxAssertValidObject
            ((CObject *)param_1,
             "f:\\dd\\vctools\\vc7libs\\ship\\atlmfc\\src\\mfc\\afxdropdowntoolbar.cpp",0x2b);
  if ((((*(uint *)(param_1 + 0x24) & 0x40000) == 0) && (*(int *)(param_1 + 0x20) != 0)) &&
     (*(int *)(param_1 + 0x20) != -1)) {
    this_00 = CWnd::SetCapture((CWnd *)this);
    iVar2 = CObject::IsKindOf((CObject *)this_00,(CRuntimeClass *)&PTR_s_CMFCDropDownFrame_00c45f34)
    ;
    if (iVar2 == 0) {
      iVar2 = AfxAssertFailedLine("f:\\dd\\vctools\\vc7libs\\ship\\atlmfc\\src\\mfc\\afxdropdowntoolbar.cpp"
                                  ,0x33);
      if (iVar2 != 0) {
        pcVar1 = (code *)swi(3);
        iVar2 = (*pcVar1)();
        return iVar2;
      }
    }
    CMFCDropDownToolbarButton::SetDefaultCommand
              (*(CMFCDropDownToolbarButton **)(this_00 + 0x124),*(uint *)(param_1 + 0x20));
    pCVar3 = CWnd::GetParentFrame((CWnd *)this);
    AfxAssertValidObject
              ((CObject *)pCVar3,
               "f:\\dd\\vctools\\vc7libs\\ship\\atlmfc\\src\\mfc\\afxdropdowntoolbar.cpp",0x39);
    wParam = 0;
    Msg = *(UINT *)(param_1 + 0x20);
    hWnd = (HWND)0x111;
    CWnd::GetOwner((CWnd *)this);
    FID_conflict_PostMessageW(hWnd,Msg,wParam,(LPARAM)this);
    (**(code **)(*(int *)pCVar3 + 0x68))();
    iVar2 = 1;
  }
  else {
    iVar2 = 0;
  }
  return iVar2;
}



void __thiscall
Create(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5)

{
  (**(code **)(*param_1 + 0x5c))("COMBOBOX",0,param_2,param_3,param_4,param_5,0);
  return;
}



bool __thiscall LookupKey(CObject *param_1,undefined4 param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  bool bVar2;
  undefined1 auStack_10 [4];
  int iStack_c;
  undefined1 auStack_8 [4];
  
  AfxAssertValidObject(param_1,"f:\\dd\\vctools\\vc7libs\\ship\\atlmfc\\src\\mfc\\map_sp.cpp",0xd8);
  iStack_c = GetAssocAt(param_2,auStack_10,auStack_8);
  bVar2 = iStack_c != 0;
  if (bVar2) {
    uVar1 = thunk_FUN_006bf040();
    *param_3 = uVar1;
  }
  return bVar2;
}



bool __thiscall Lookup(CMap<> *param_1,char *param_2)

{
  bool bVar1;
  uint uStack_10;
  CAssoc *pCStack_c;
  uint uStack_8;
  
  AfxAssertValidObject
            ((CObject *)param_1,"f:\\dd\\vctools\\vc7libs\\ship\\atlmfc\\include\\afxtempl.h",0x614)
  ;
  pCStack_c = CMap<>::GetAssocAt(param_1,param_2,&uStack_10,&uStack_8);
  bVar1 = pCStack_c != (CAssoc *)0x0;
  if (bVar1) {
    thunk_FUN_006c9180(pCStack_c + 4);
  }
  return bVar1;
}



int __thiscall CMFCBaseTabCtrl::GetTabRect(CMFCBaseTabCtrl *this,int param_1,CRect *param_2)

{
  int iVar1;
  CObject *pCVar2;
  
  if ((param_1 < 0) || (*(int *)(this + 0x9c) <= param_1)) {
    iVar1 = 0;
  }
  else {
    pCVar2 = (CObject *)CPtrArray::operator[]((CPtrArray *)(this + 0x88),param_1);
    AfxAssertValidObject
              (pCVar2,"f:\\dd\\vctools\\vc7libs\\ship\\atlmfc\\src\\mfc\\afxbasetabctrl.cpp",0x28f);
    if (*(int *)(pCVar2 + 0x34) == 0) {
      thunk_FUN_00b31f60();
      iVar1 = 0;
    }
    else {
      *(undefined4 *)param_2 = *(undefined4 *)(pCVar2 + 0x10);
      *(undefined4 *)(param_2 + 4) = *(undefined4 *)(pCVar2 + 0x14);
      *(undefined4 *)(param_2 + 8) = *(undefined4 *)(pCVar2 + 0x18);
      *(undefined4 *)(param_2 + 0xc) = *(undefined4 *)(pCVar2 + 0x1c);
      iVar1 = 1;
    }
  }
  return iVar1;
}



int __thiscall FID_conflict_operator__(CObject *param_1,undefined4 param_2)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  int iStack_10;
  int iStack_c;
  undefined4 uStack_8;
  
  AfxAssertValidObject(param_1,"f:\\dd\\vctools\\vc7libs\\ship\\atlmfc\\include\\afxtempl.h",0x636);
  iStack_c = GetAssocAt(param_2,&iStack_10,&uStack_8);
  if (iStack_c == 0) {
    if (*(int *)(param_1 + 4) == 0) {
      InitHashTable(*(undefined4 *)(param_1 + 8),1);
    }
    iVar3 = *(int *)(param_1 + 4);
    if ((iVar3 == 0) &&
       (iVar2 = AfxAssertFailedLine("f:\\dd\\vctools\\vc7libs\\ship\\atlmfc\\include\\afxtempl.h",
                                    0x63f), iVar2 != 0)) {
      pcVar1 = (code *)swi(3);
      iVar3 = (*pcVar1)();
      return iVar3;
    }
    if (iVar3 == 0) {
      thunk_FUN_007113e0();
    }
    iStack_c = NewAssoc(param_2);
    *(undefined4 *)(iStack_c + 0xc) = uStack_8;
    *(undefined4 *)(iStack_c + 8) = *(undefined4 *)(*(int *)(param_1 + 4) + iStack_10 * 4);
    *(int *)(*(int *)(param_1 + 4) + iStack_10 * 4) = iStack_c;
  }
  return iStack_c + 4;
}



void __thiscall CMFCBaseTabCtrl::InitAutoColors(CMFCBaseTabCtrl *this)

{
  if (*(int *)(this + 0x1d0) != 0) {
    CArray<>::RemoveAll((CArray<> *)(this + 0x1b8));
    if (DAT_00c5593c < 9) {
      CArray<>::Add((CArray<> *)(this + 0x1b8),0xff00);
      CArray<>::Add((CArray<> *)(this + 0x1b8),0xffff00);
      CArray<>::Add((CArray<> *)(this + 0x1b8),0xff00ff);
      CArray<>::Add((CArray<> *)(this + 0x1b8),0xc0c0c0);
      CArray<>::Add((CArray<> *)(this + 0x1b8),0xffff);
    }
    else {
      CArray<>::Add((CArray<> *)(this + 0x1b8),0xf2d4c5);
      CArray<>::Add((CArray<> *)(this + 0x1b8),0x78dcff);
      CArray<>::Add((CArray<> *)(this + 0x1b8),0xa1cebe);
      CArray<>::Add((CArray<> *)(this + 0x1b8),0xa1a0f0);
      CArray<>::Add((CArray<> *)(this + 0x1b8),0xe1a8bc);
      CArray<>::Add((CArray<> *)(this + 0x1b8),0xb6c19c);
      CArray<>::Add((CArray<> *)(this + 0x1b8),0x86b8f7);
      CArray<>::Add((CArray<> *)(this + 0x1b8),0xc2add9);
      CArray<>::Add((CArray<> *)(this + 0x1b8),0xd7c2a5);
      CArray<>::Add((CArray<> *)(this + 0x1b8),0xbea6b3);
      CArray<>::Add((CArray<> *)(this + 0x1b8),0xa3d6ea);
      CArray<>::Add((CArray<> *)(this + 0x1b8),0x7dfaf6);
      CArray<>::Add((CArray<> *)(this + 0x1b8),0x9de9b5);
      CArray<>::Add((CArray<> *)(this + 0x1b8),0xcfc35f);
      CArray<>::Add((CArray<> *)(this + 0x1b8),0x8383c1);
      CArray<>::Add((CArray<> *)(this + 0x1b8),0xd5caca);
    }
  }
  return;
}



undefined4 __thiscall GetNameTooltip(CObject *param_1,undefined4 param_2)

{
  AfxAssertValidObject
            (param_1,"f:\\dd\\vctools\\vc7libs\\ship\\atlmfc\\src\\mfc\\afxpropertygridctrl.cpp",
             0x6fc);
  thunk_FUN_006c4270(&DAT_00b899f7);
  return param_2;
}



int __thiscall CMFCBaseVisualManager::DrawRadioButton(CMFCBaseVisualManager *this,CDC *param_1)

{
  int iVar1;
  HDC__ *pHVar2;
  int in_stack_00000018;
  int in_stack_0000001c;
  int in_stack_00000020;
  int in_stack_00000024;
  undefined4 uVar3;
  undefined1 *puVar4;
  undefined4 uVar5;
  int iStack_c;
  
  if (*(int *)(this + 0x10) == 0) {
    iVar1 = 0;
  }
  else {
    AfxAssertValidObject
              ((CObject *)param_1,
               "f:\\dd\\vctools\\vc7libs\\ship\\atlmfc\\src\\mfc\\afxvisualmanager.cpp",0x1127);
    iStack_c = (uint)(in_stack_0000001c != 0) * 4 + 1;
    if (in_stack_00000020 == 0) {
      iStack_c = (uint)(in_stack_0000001c != 0) * 4 + 4;
    }
    else if (in_stack_00000024 == 0) {
      if (in_stack_00000018 != 0) {
        iStack_c = (uint)(in_stack_0000001c != 0) * 4 + 2;
      }
    }
    else {
      iStack_c = (uint)(in_stack_0000001c != 0) * 4 + 3;
    }
    if (*(int *)(this + 0x58) != 0) {
      uVar5 = 0;
      puVar4 = &stack0x00000008;
      uVar3 = 2;
      pHVar2 = CDC::GetSafeHdc(param_1);
      (**(code **)(this + 0x58))(*(undefined4 *)(this + 0x10),pHVar2,uVar3,iStack_c,puVar4,uVar5);
    }
    iVar1 = 1;
  }
  return iVar1;
}



void __thiscall thunk_FUN_009ec910(COleClientItem *param_1,undefined4 param_2)

{
  code *pcVar1;
  int iVar2;
  IUnknown *pIVar3;
  OLE_OBJTYPE OVar4;
  undefined4 uVar5;
  char *pcVar6;
  uint uStack_84;
  undefined4 uStack_74;
  CStringT<> aCStack_28 [4];
  CStringT<> aCStack_24 [4];
  undefined4 uStack_20;
  IUnknown *pIStack_1c;
  IUnknown *pIStack_18;
  undefined1 *puStack_14;
  void *pvStack_10;
  undefined1 *puStack_c;
  int iStack_8;
  
  iStack_8 = 0xffffffff;
  puStack_c = &LAB_00b6e6b0;
  pvStack_10 = ExceptionList;
  uStack_84 = DAT_00c4a700 ^ (uint)&stack0xfffffffc;
  puStack_14 = (undefined1 *)&uStack_84;
  ExceptionList = &pvStack_10;
  AfxAssertValidObject
            ((CObject *)param_1,"f:\\dd\\vctools\\vc7libs\\ship\\atlmfc\\src\\mfc\\olecli1.cpp",
             0x1a9);
  if (*(int *)(param_1 + 0x58) != 0) {
    iVar2 = AfxAssertFailedLine("f:\\dd\\vctools\\vc7libs\\ship\\atlmfc\\src\\mfc\\olecli1.cpp",
                                0x1aa);
    if (iVar2 != 0) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  iStack_8 = 0;
  if (*(int *)(param_1 + 0x24) != 0) {
    pIStack_18 = *(IUnknown **)(param_1 + 0x24);
    pIVar3 = _AfxQueryInterface(pIStack_18,(_GUID *)&DAT_00bf9300);
    *(IUnknown **)(param_1 + 0x24) = pIVar3;
    (*pIStack_18->lpVtbl->Release)(pIStack_18);
    if (*(int *)(param_1 + 0x24) == 0) {
      AfxThrowOleException(-0x7ff8fff2);
    }
  }
  (**(code **)(*(int *)param_1 + 0xd0))(param_2);
  COleClientItem::UpdateItemType(param_1);
  pIVar3 = _AfxQueryInterface(*(IUnknown **)(param_1 + 0x24),(_GUID *)&DAT_00bf93dc);
  *(IUnknown **)(param_1 + 0x28) = pIVar3;
  if (*(int *)(param_1 + 0x28) == 0) {
    (**(code **)(*(int *)param_1 + 0xd0))(0x80004002);
  }
  if (*(int *)(param_1 + 0x28) == 0) {
    iVar2 = AfxAssertFailedLine("f:\\dd\\vctools\\vc7libs\\ship\\atlmfc\\src\\mfc\\olecli1.cpp",
                                0x1c1);
    if (iVar2 != 0) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  OVar4 = COleClientItem::GetType(param_1);
  if (OVar4 != 3) {
    pIStack_1c = CCmdTarget::GetInterface((CCmdTarget *)param_1,&DAT_00bf8db0);
    if (pIStack_1c == (IUnknown *)0x0) {
      iVar2 = AfxAssertFailedLine("f:\\dd\\vctools\\vc7libs\\ship\\atlmfc\\src\\mfc\\olecli1.cpp",
                                  0x1c8);
      if (iVar2 != 0) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    uVar5 = (**(code **)(**(int **)(param_1 + 0x24) + 0x4c))
                      (*(undefined4 *)(param_1 + 0x24),pIStack_1c,param_1 + 0x40);
    (**(code **)(*(int *)param_1 + 0xd0))(uVar5);
    if (*(int *)(param_1 + 0x40) == 0) {
      iVar2 = AfxAssertFailedLine("f:\\dd\\vctools\\vc7libs\\ship\\atlmfc\\src\\mfc\\olecli1.cpp",
                                  0x1ca);
      if (iVar2 != 0) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    iVar2 = (**(code **)(**(int **)(param_1 + 0x28) + 0x1c))
                      (*(undefined4 *)(param_1 + 0x28),1,0,pIStack_1c);
    if (iVar2 != 0) {
      iVar2 = AfxAssertFailedLine("f:\\dd\\vctools\\vc7libs\\ship\\atlmfc\\src\\mfc\\olecli1.cpp",
                                  0x1ce);
      if (iVar2 != 0) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    pcVar6 = AfxGetAppName();
    ATL::CStringT<>::CStringT<>(aCStack_24,pcVar6);
    iStack_8._0_1_ = 1;
    CDocument::GetTitle(*(CDocument **)(param_1 + 0x20));
    pcVar6 = (char *)thunk_FUN_006bf040();
    ATL::CStringT<>::CStringT<>(aCStack_28,pcVar6);
    iStack_8 = CONCAT31(iStack_8._1_3_,2);
    CDocument::GetTitle(*(CDocument **)(param_1 + 0x20));
    iVar2 = thunk_FUN_006bf040();
    if (iVar2 == 0) {
      uStack_74 = 0;
    }
    else {
      uStack_74 = FID_conflict_operator_struct_IBindCtx_();
    }
    uStack_20 = uStack_74;
    uVar5 = FID_conflict_operator_struct_IBindCtx_(uStack_74);
    (**(code **)(**(int **)(param_1 + 0x24) + 0x14))(*(undefined4 *)(param_1 + 0x24),uVar5);
    iStack_8._0_1_ = 1;
    thunk_FUN_0070f1b0();
    iStack_8 = (uint)iStack_8._1_3_ << 8;
    thunk_FUN_0070f1b0();
  }
  OleSetContainedObject(*(LPUNKNOWN *)(param_1 + 0x24),1);
  *(undefined4 *)(param_1 + 0x50) = 1;
  FUN_009ecc61();
  return;
}



void __thiscall CMFCBaseTabCtrl::InvalidateTab(CMFCBaseTabCtrl *this,int param_1)

{
  int iVar1;
  tagRECT *ptVar2;
  undefined1 auStack_18 [16];
  uint uStack_8;
  
  uStack_8 = DAT_00c4a700 ^ (uint)&stack0xfffffffc;
  AfxAssertValidObject
            ((CObject *)this,"f:\\dd\\vctools\\vc7libs\\ship\\atlmfc\\src\\mfc\\afxbasetabctrl.cpp",
             0x642);
  if (-1 < param_1) {
    thunk_FUN_00b31aa0();
    iVar1 = (**(code **)(*(int *)this + 0x1bc))(param_1,auStack_18);
    if (iVar1 != 0) {
      iVar1 = 1;
      ptVar2 = (tagRECT *)thunk_FUN_00b31df0();
      CWnd::InvalidateRect((CWnd *)this,ptVar2,iVar1);
      CWnd::UpdateWindow((CWnd *)this);
    }
  }
  __security_check_cookie(uStack_8 ^ (uint)&stack0xfffffffc);
  return;
}



__POSITION * __thiscall CList<>::AddTail(CList<> *this,AFX_AUTOHIDE_DOCKSITE_SAVE_INFO *param_1)

{
  CNode *pCVar1;
  
  AfxAssertValidObject
            ((CObject *)this,"f:\\dd\\vctools\\vc7libs\\ship\\atlmfc\\include\\afxtempl.h",0x3c4);
  pCVar1 = NewNode(this,*(CNode **)(this + 8),(CNode *)0x0);
  AFX_AUTOHIDE_DOCKSITE_SAVE_INFO::operator=
            ((AFX_AUTOHIDE_DOCKSITE_SAVE_INFO *)(pCVar1 + 8),param_1);
  if (*(int *)(this + 8) == 0) {
    *(CNode **)(this + 4) = pCVar1;
  }
  else {
    **(undefined4 **)(this + 8) = pCVar1;
  }
  *(CNode **)(this + 8) = pCVar1;
  return (__POSITION *)pCVar1;
}



CWnd * CWnd::WindowFromPoint(tagPOINT param_1)

{
  HWND pHVar1;
  CWnd *pCVar2;
  
  pHVar1 = ::WindowFromPoint(param_1);
  pCVar2 = FromHandle(pHVar1);
  return pCVar2;
}



void AfxLockGlobals(int param_1)

{
  code *pcVar1;
  int iVar2;
  
  if ((0x10U < (uint)param_1) &&
     (iVar2 = AfxAssertFailedLine("f:\\dd\\vctools\\vc7libs\\ship\\atlmfc\\src\\mfc\\afxcrit.cpp",
                                  0x46), iVar2 != 0)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (0x10U < (uint)param_1) {
    thunk_FUN_007113e0();
  }
  if (((DAT_00c55afc == 0) && (AfxCriticalInit(), DAT_00c55afc == 0)) &&
     (iVar2 = AfxAssertFailedLine("f:\\dd\\vctools\\vc7libs\\ship\\atlmfc\\src\\mfc\\afxcrit.cpp",
                                  0x4c), iVar2 != 0)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (*(int *)(&DAT_00c55d08 + param_1 * 4) == 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)&DAT_00c55cec);
    if (*(int *)(&DAT_00c55d08 + param_1 * 4) == 0) {
      InitializeCriticalSection((LPCRITICAL_SECTION)(&DAT_00c55b00 + param_1 * 0x18));
      iVar2 = *(int *)(&DAT_00c55d08 + param_1 * 4);
      *(int *)(&DAT_00c55d08 + param_1 * 4) = iVar2 + 1;
      if ((iVar2 + 1 == 0) &&
         (iVar2 = AfxAssertFailedLine("f:\\dd\\vctools\\vc7libs\\ship\\atlmfc\\src\\mfc\\afxcrit.cpp"
                                      ,0x56), iVar2 != 0)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_00c55cec);
  }
  EnterCriticalSection((LPCRITICAL_SECTION)(&DAT_00c55b00 + param_1 * 0x18));
  iVar2 = *(int *)(&DAT_00c55d60 + param_1 * 4);
  *(int *)(&DAT_00c55d60 + param_1 * 4) = iVar2 + 1;
  if ((iVar2 + 1 < 1) &&
     (iVar2 = AfxAssertFailedLine("f:\\dd\\vctools\\vc7libs\\ship\\atlmfc\\src\\mfc\\afxcrit.cpp",
                                  0x5e), iVar2 != 0)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  return;
}



void __thiscall CPropertySheet::EndDialog(CPropertySheet *this,int param_1)

{
  AfxAssertValidObject
            ((CObject *)this,"f:\\dd\\vctools\\vc7libs\\ship\\atlmfc\\src\\mfc\\dlgprop.cpp",0x509);
  CWnd::EndModalLoop((CWnd *)this,param_1);
  PostMessageA(*(HWND *)(this + 0x20),0x471,5,0);
  return;
}



long COleServerDoc::XPersistStorage::HandsOffStorage(void)

{
  code *pcVar1;
  COleDocument *this;
  __POSITION *riid;
  COleClientItem *pCVar2;
  int iVar3;
  long lVar4;
  int in_stack_00000004;
  __POSITION *ppvObject;
  
  this = (COleDocument *)(in_stack_00000004 + -0x160);
  if (*(int *)(in_stack_00000004 + -0x60) != 0) {
    riid = (__POSITION *)(**(code **)(*(int *)this + 0x11c))();
    while (pCVar2 = COleDocument::GetNextClientItem(this,(__POSITION **)&stack0xfffffff0),
          pCVar2 != (COleClientItem *)0x0) {
      ppvObject = riid;
      if ((*(int *)(pCVar2 + 0x24) == 0) &&
         (iVar3 = AfxAssertFailedLine("f:\\dd\\vctools\\vc7libs\\ship\\atlmfc\\src\\mfc\\olesvr1.cpp"
                                      ,0x7a6), ppvObject = riid, iVar3 != 0)) {
        pcVar1 = (code *)swi(3);
        lVar4 = (*pcVar1)();
        return lVar4;
      }
      riid = (__POSITION *)_AfxQueryInterface(*(IUnknown **)(pCVar2 + 0x24),(_GUID *)&DAT_00bf8d4c);
      if ((riid == (__POSITION *)0x0) &&
         (iVar3 = AfxAssertFailedLine("f:\\dd\\vctools\\vc7libs\\ship\\atlmfc\\src\\mfc\\olesvr1.cpp"
                                      ,0x7a9), iVar3 != 0)) {
        pcVar1 = (code *)swi(3);
        lVar4 = (*pcVar1)();
        return lVar4;
      }
      (*(*(IUnknownVtbl **)riid)[3].QueryInterface)((IUnknown *)riid,(IID *)riid,(void **)ppvObject)
      ;
      (*(*(IUnknownVtbl **)riid)->Release)((IUnknown *)riid);
      pCVar2[0x47] = (COleClientItem)0x1;
    }
    if (*(int *)(in_stack_00000004 + -0x60) != 0) {
      (**(code **)(**(int **)(in_stack_00000004 + -0x60) + 8))
                (*(undefined4 *)(in_stack_00000004 + -0x60));
      *(undefined4 *)(in_stack_00000004 + -0x60) = 0;
    }
  }
  AfxAssertValidObject
            ((CObject *)this,"f:\\dd\\vctools\\vc7libs\\ship\\atlmfc\\src\\mfc\\olesvr1.cpp",0x7b4);
  return 0;
}



CMFCToolBarMenuButton * __thiscall CMFCPopupMenu::GetMenuItem(CMFCPopupMenu *this,int param_1)

{
  CMFCToolBar *this_00;
  CMFCToolBarButton *pCVar1;
  
  this_00 = (CMFCToolBar *)(**(code **)(*(int *)this + 0x1c8))();
  AfxAssertValidObject
            ((CObject *)this_00,"f:\\dd\\vctools\\vc7libs\\ship\\atlmfc\\src\\mfc\\afxpopupmenu.cpp"
             ,0x681);
  pCVar1 = CMFCToolBar::GetButton(this_00,param_1);
  return (CMFCToolBarMenuButton *)pCVar1;
}



void __thiscall CDataExchange::Fail(CDataExchange *this)

{
  undefined4 uVar1;
  undefined4 uVar2;
  HWND pHStack_8;
  
  if (*(int *)this == 0) {
    uVar1 = thunk_FUN_006bf6d0(0,"Warning: CDataExchange::Fail called when not validating.\n");
    uVar2 = thunk_FUN_006bf580("f:\\dd\\vctools\\vc7libs\\ship\\atlmfc\\src\\mfc\\dlgdata.cpp",0x36)
    ;
    thunk_FUN_006bf5d0(uVar2,uVar1);
  }
  else if (*(int *)(this + 8) == 0) {
    uVar1 = thunk_FUN_006bf6d0(0,"Error: fail validation with no control to restore focus to.\n");
    uVar2 = thunk_FUN_006bf580("f:\\dd\\vctools\\vc7libs\\ship\\atlmfc\\src\\mfc\\dlgdata.cpp",0x47)
    ;
    thunk_FUN_006bf5d0(uVar2,uVar1);
  }
  else {
    CWnd::GetDlgItem(*(CWnd **)(this + 4),*(int *)(this + 8),&pHStack_8);
    if ((pHStack_8 != (HWND)0x0) && (SetFocus(pHStack_8), *(int *)(this + 0xc) != 0)) {
      SendMessageA(pHStack_8,0xb1,0,-1);
    }
  }
  AfxThrowUserException();
  return;
}



int __thiscall CMFCPopupMenu::RemoveItem(CMFCPopupMenu *this,int param_1)

{
  CObject *pCVar1;
  int iVar2;
  
  pCVar1 = (CObject *)(**(code **)(*(int *)this + 0x1c8))();
  AfxAssertValidObject
            (pCVar1,"f:\\dd\\vctools\\vc7libs\\ship\\atlmfc\\src\\mfc\\afxpopupmenu.cpp",0x6a8);
  iVar2 = (**(code **)(*(int *)pCVar1 + 0x354))(param_1);
  return iVar2;
}



void __thiscall FID_conflict_operator_(undefined4 *param_1,undefined4 param_2)

{
  *param_1 = param_2;
  return;
}



CMFCRibbonButton * __fastcall FID_conflict_CMFCRibbonLabel(CMFCRibbonButton *param_1)

{
  CMFCRibbonButton::CMFCRibbonButton(param_1);
  *(undefined ***)param_1 = CMFCRibbonCheckBox::vftable;
  return param_1;
}



void __thiscall CDockingPanesRow::UpdateVisibleState(CDockingPanesRow *this,int param_1)

{
  CObject *this_00;
  CWnd *this_01;
  int iVar1;
  undefined4 *puVar2;
  ulong uVar3;
  int iStack_14;
  uint uStack_10;
  int iStack_c;
  int iStack_8;
  
  this_01 = CWnd::SetCapture(*(CWnd **)(this + 0x44));
  iVar1 = CWnd::IsWindowVisible(this_01);
  uStack_10 = (uint)(iVar1 == 0);
  iStack_c = *(int *)(this + 8);
  iStack_8 = 0;
  iStack_14 = thunk_FUN_006ccba0();
  do {
    while( true ) {
      if (iStack_14 == 0) goto LAB_008f4623;
      puVar2 = (undefined4 *)::GetNext(&iStack_14);
      this_00 = (CObject *)*puVar2;
      AfxAssertValidObject
                (this_00,"f:\\dd\\vctools\\vc7libs\\ship\\atlmfc\\src\\mfc\\afxdockingpanesrow.cpp",
                 0x1b2);
      if ((uStack_10 == 0) || (iVar1 = (**(code **)(*(int *)this_00 + 0x1b4))(), iVar1 == 0)) break;
      iStack_8 = (**(code **)(*(int *)this_00 + 0x1b0))();
      if (iStack_8 != 0) goto LAB_008f4623;
    }
    uVar3 = CWnd::GetExStyle((CWnd *)this_00);
  } while ((uVar3 & 0x10000000) == 0);
  iStack_8 = 1;
LAB_008f4623:
  if (iStack_c != iStack_8) {
    (**(code **)(*(int *)this + 0x50))(iStack_8,param_1);
  }
  *(int *)(this + 8) = iStack_8;
  return;
}



void thunk_FUN_008296b0(void)

{
  return;
}



void __thiscall SetAtGrow(CObject *param_1,int param_2,undefined4 param_3)

{
  code *pcVar1;
  int iVar2;
  
  AfxAssertValidObject(param_1,"f:\\dd\\vctools\\vc7libs\\ship\\atlmfc\\include\\afxtempl.h",0x215);
  if (param_2 < 0) {
    iVar2 = AfxAssertFailedLine("f:\\dd\\vctools\\vc7libs\\ship\\atlmfc\\include\\afxtempl.h",0x216)
    ;
    if (iVar2 != 0) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (param_2 < 0) {
    thunk_FUN_007113e0();
  }
  if (*(int *)(param_1 + 8) <= param_2) {
    SetSize(param_2 + 1,0xffffffff);
  }
  *(undefined4 *)(*(int *)(param_1 + 4) + param_2 * 4) = param_3;
  return;
}



undefined4 * __fastcall FID_conflict_XPersistFile(undefined4 *param_1)

{
  thunk_FUN_00ab43f0();
  *param_1 = COleLinkingDoc::XPersistFile::vftable;
  return param_1;
}



