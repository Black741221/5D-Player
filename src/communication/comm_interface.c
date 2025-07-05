/*
 * 通訊介面模組
 * 行數範圍：20001-24000
 */

            ((CObject *)this,"f:\\dd\\vctools\\vc7libs\\ship\\atlmfc\\src\\mfc\\olefact.cpp",0xd9);
  if (this[0x4a] != (COleObjectFactory)0x0) {
    if (*(int *)(this + 0x24) != 0) {
      CoRevokeClassObject(*(DWORD *)(this + 0x24));
      *(undefined4 *)(this + 0x24) = 0;
    }
    this[0x4a] = (COleObjectFactory)0x0;
  }
  return;
}



void __thiscall
CSmartDockingStandaloneGuide::Create
          (CSmartDockingStandaloneGuide *this,SDMarkerPlace param_1,CWnd *param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  CSmartDockingInfo *pCVar4;
  AFX_SMARTDOCK_THEME AVar5;
  HBITMAP__ *pHVar6;
  HRGN__ *pHVar7;
  tagRECT *ptVar8;
  undefined4 uVar9;
  HWND__ *pHVar10;
  ulong uVar11;
  uchar uVar12;
  ulong uVar13;
  int iStack_34;
  tagRECT tStack_20;
  uint uStack_10;
  int iStack_c;
  HBITMAP__ *pHStack_8;
  
  uStack_10 = DAT_00c4a700 ^ (uint)&stack0xfffffffc;
  if (((int)param_1 < 0) || (3 < (int)param_1)) {
    iVar3 = AfxAssertFailedLine("f:\\dd\\vctools\\vc7libs\\ship\\atlmfc\\src\\mfc\\afxsmartdockingguide.cpp"
                                ,0x61);
    if (iVar3 != 0) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  *(SDMarkerPlace *)(this + 4) = param_1;
  pCVar4 = CDockingManager::GetSmartDockingParams();
  if (*(int *)(pCVar4 + 0x54) == 0) {
    AVar5 = GetVMTheme();
    if (AVar5 != 2) {
      bVar2 = false;
      goto LAB_00a75896;
    }
  }
  bVar2 = true;
LAB_00a75896:
  (**(code **)(*(int *)this + 0x2c))(pCVar4);
  uVar11 = *(ulong *)(pCVar4 + 0x10);
  pHVar6 = CMFCToolBarImages::GetImageWell((CMFCToolBarImages *)(this + 0x90));
  pHVar7 = CMFCToolBarImages::CreateRegionFromImage(pHVar6,uVar11);
  CGdiObject::Attach((CGdiObject *)(this + 0x2a8),pHVar7);
  thunk_FUN_00b31aa0();
  ptVar8 = (tagRECT *)thunk_FUN_00b31df0();
  CRgn::GetRgnBox((CRgn *)(this + 0x2a8),ptVar8);
  uVar9 = thunk_FUN_00b31c40();
  *(undefined4 *)(this + 0x2b0) = uVar9;
  uVar9 = thunk_FUN_00b31c60();
  *(undefined4 *)(this + 0x2b4) = uVar9;
  pHStack_8 = CMFCToolBarImages::GetImageWellLight((CMFCToolBarImages *)(this + 0x90));
  if (pHStack_8 == (HBITMAP__ *)0x0) {
    pHStack_8 = CMFCToolBarImages::GetImageWell((CMFCToolBarImages *)(this + 0x90));
  }
  if ((*(int *)(this + 4) == 2) || (*(int *)(this + 4) == 3)) {
    iStack_34 = 1;
  }
  else {
    iStack_34 = 0;
  }
  iStack_c = iStack_34;
  CSmartDockingStandaloneGuideWnd::Create
            ((CSmartDockingStandaloneGuideWnd *)(this + 8),&tStack_20,pHStack_8,(HRGN__ *)0x0,
             param_2,*(int *)(this + 0x2c0),iStack_34);
  CWnd::ModifyStyleEx((CWnd *)(this + 8),0,0x80000,0);
  if (!bVar2) {
    uVar13 = 1;
    uVar12 = '\0';
    uVar11 = *(ulong *)(pCVar4 + 0x10);
    pHVar10 = (HWND__ *)thunk_FUN_006d9400();
    AFX_GLOBAL_DATA::SetLayeredAttrib((AFX_GLOBAL_DATA *)&DAT_00c55790,pHVar10,uVar11,uVar12,uVar13)
    ;
  }
  *(undefined4 *)(this + 700) = 1;
  CWnd::ModifyStyleEx((CWnd *)(this + 8),0,8,0);
  __security_check_cookie(uStack_10 ^ (uint)&stack0xfffffffc);
  return;
}



void __thiscall
CMFCTabCtrl::DrawFlatTab(CMFCTabCtrl *this,CDC *param_1,CMFCTabInfo *param_2,int param_3)

{
  CMFCVisualManager *pCVar1;
  
  AfxAssertValidObject
            ((CObject *)param_2,"f:\\dd\\vctools\\vc7libs\\ship\\atlmfc\\src\\mfc\\afxtabctrl.cpp",
             0x4c3);
  AfxAssertValidObject
            ((CObject *)param_1,"f:\\dd\\vctools\\vc7libs\\ship\\atlmfc\\src\\mfc\\afxtabctrl.cpp",
             0x4c4);
  if (*(int *)(param_2 + 0x34) != 0) {
    pCVar1 = CMFCVisualManager::GetInstance();
    (**(code **)(*(int *)pCVar1 + 0xfc))
              (param_1,*(undefined4 *)(param_2 + 0x10),*(undefined4 *)(param_2 + 0x14),
               *(undefined4 *)(param_2 + 0x18),*(undefined4 *)(param_2 + 0x1c),
               *(undefined4 *)(this + 0xe4),param_3,this);
  }
  return;
}



void __fastcall thunk_FUN_00ab3120(undefined4 param_1)

{
  thunk_FUN_00ab3140(param_1);
  return;
}



CDockingPanesRow * __thiscall CDockSite::RowFromPane(CDockSite *this,CBasePane *param_1)

{
  CObject *this_00;
  int iVar1;
  __POSITION *p_Stack_8;
  
  AfxAssertValidObject
            ((CObject *)this,"f:\\dd\\vctools\\vc7libs\\ship\\atlmfc\\src\\mfc\\afxdocksite.cpp",
             0x352);
  AfxAssertValidObject
            ((CObject *)param_1,"f:\\dd\\vctools\\vc7libs\\ship\\atlmfc\\src\\mfc\\afxdocksite.cpp",
             0x353);
  p_Stack_8 = (__POSITION *)thunk_FUN_006ccba0();
  do {
    if (p_Stack_8 == (__POSITION *)0x0) {
      return (CDockingPanesRow *)0x0;
    }
    this_00 = CObList::GetNext((CObList *)(this + 0x11c),&p_Stack_8);
    AfxAssertValidObject
              (this_00,"f:\\dd\\vctools\\vc7libs\\ship\\atlmfc\\src\\mfc\\afxdocksite.cpp",0x358);
    iVar1 = CDockingPanesRow::HasPane((CDockingPanesRow *)this_00,param_1);
  } while (iVar1 == 0);
  return (CDockingPanesRow *)this_00;
}



void __thiscall CList<>::RemoveAt(CList<> *this,__POSITION *param_1)

{
  code *pcVar1;
  int iVar2;
  
  AfxAssertValidObject
            ((CObject *)this,"f:\\dd\\vctools\\vc7libs\\ship\\atlmfc\\include\\afxtempl.h",1099);
  iVar2 = AfxIsValidAddress(param_1,0xc,1);
  if (iVar2 == 0) {
    iVar2 = AfxAssertFailedLine("f:\\dd\\vctools\\vc7libs\\ship\\atlmfc\\include\\afxtempl.h",0x44e)
    ;
    if (iVar2 != 0) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (param_1 == *(__POSITION **)(this + 4)) {
    *(undefined4 *)(this + 4) = *(undefined4 *)param_1;
  }
  else {
    iVar2 = AfxIsValidAddress(*(void **)(param_1 + 4),0xc,1);
    if (iVar2 == 0) {
      iVar2 = AfxAssertFailedLine("f:\\dd\\vctools\\vc7libs\\ship\\atlmfc\\include\\afxtempl.h",
                                  0x457);
      if (iVar2 != 0) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    **(undefined4 **)(param_1 + 4) = *(undefined4 *)param_1;
  }
  if (param_1 == *(__POSITION **)(this + 8)) {
    *(undefined4 *)(this + 8) = *(undefined4 *)(param_1 + 4);
  }
  else {
    iVar2 = AfxIsValidAddress(*(void **)param_1,0xc,1);
    if (iVar2 == 0) {
      iVar2 = AfxAssertFailedLine("f:\\dd\\vctools\\vc7libs\\ship\\atlmfc\\include\\afxtempl.h",
                                  0x460);
      if (iVar2 != 0) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    *(undefined4 *)(*(int *)param_1 + 4) = *(undefined4 *)(param_1 + 4);
  }
  ::FreeNode(param_1);
  return;
}



int __thiscall CRgn::PtInRegion(CRgn *this,int param_1,int param_2)

{
  code *pcVar1;
  int iVar2;
  BOOL BVar3;
  
  if (*(int *)(this + 4) == 0) {
    iVar2 = AfxAssertFailedLine("f:\\dd\\vctools\\vc7libs\\ship\\atlmfc\\include\\afxwin1.inl",0x139
                               );
    if (iVar2 != 0) {
      pcVar1 = (code *)swi(3);
      iVar2 = (*pcVar1)();
      return iVar2;
    }
  }
  BVar3 = ::PtInRegion(*(HRGN *)(this + 4),param_1,param_2);
  return BVar3;
}



void __fastcall thunk_FUN_00974550(undefined4 param_1)

{
  thunk_FUN_00974570(param_1);
  return;
}



void __thiscall CSmartDockingManager::Show(CSmartDockingManager *this,int param_1)

{
  int iStack_8;
  
  if ((*(int *)(this + 4) != 0) && (*(int *)(this + 0xc) != param_1)) {
    *(int *)(this + 0xc) = param_1;
    if (*(int *)(this + 0x10) != 0) {
      (**(code **)(**(int **)(this + 0xfc) + 0x1c))(param_1);
    }
    for (iStack_8 = 0; iStack_8 < 4; iStack_8 = iStack_8 + 1) {
      if ((((((*(uint *)(this + 0x1c) & 0x1000) != 0) && (iStack_8 == 0)) ||
           (((*(uint *)(this + 0x1c) & 0x4000) != 0 && (iStack_8 == 1)))) ||
          (((*(uint *)(this + 0x1c) & 0x2000) != 0 && (iStack_8 == 2)))) ||
         (((*(uint *)(this + 0x1c) & 0x8000) != 0 && (iStack_8 == 3)))) {
        (**(code **)(**(int **)(this + iStack_8 * 4 + 0xd8) + 0x1c))(param_1);
      }
    }
    if ((param_1 == 0) && (*(int *)(this + 0xcc) == 0)) {
      CSmartDockingHighlighterWnd::Hide((CSmartDockingHighlighterWnd *)(this + 0x30));
    }
  }
  return;
}



int __thiscall
CMFCShellListCtrl::OnCompareItems(CMFCShellListCtrl *this,long param_1,long param_2,int param_3)

{
  code *pcVar1;
  int iVar2;
  DWORD_PTR DVar3;
  BOOL BVar4;
  bool bVar5;
  uint uStack_75c;
  uint uStack_758;
  uint uStack_754;
  CHAR aCStack_73c [268];
  undefined4 *puStack_630;
  SHFILEINFOA SStack_62c;
  CFileStatus aCStack_4cc [8];
  CTime aCStack_4c4 [16];
  uint uStack_4b4;
  uint uStack_4b0;
  byte bStack_4ac;
  SHFILEINFOA SStack_3a4;
  CFileStatus aCStack_244 [8];
  undefined4 uStack_23c;
  undefined4 uStack_238;
  uint uStack_22c;
  uint uStack_228;
  byte bStack_224;
  uint uStack_118;
  CHAR aCStack_114 [264];
  uint uStack_c;
  long lStack_8;
  
  uStack_c = DAT_00c4a700 ^ (uint)&stack0xfffffffc;
  AfxAssertValidObject
            ((CObject *)this,
             "f:\\dd\\vctools\\vc7libs\\ship\\atlmfc\\src\\mfc\\afxshelllistctrl.cpp",0x274);
  puStack_630 = (undefined4 *)param_1;
  lStack_8 = param_2;
  if ((param_1 == 0) &&
     (iVar2 = AfxAssertFailedLine("f:\\dd\\vctools\\vc7libs\\ship\\atlmfc\\src\\mfc\\afxshelllistctrl.cpp"
                                  ,0x278), iVar2 != 0)) {
    pcVar1 = (code *)swi(3);
    iVar2 = (*pcVar1)();
    return iVar2;
  }
  if (param_1 == 0) {
    thunk_FUN_007113e0();
  }
  bVar5 = lStack_8 == 0;
  if ((bVar5) &&
     (iVar2 = AfxAssertFailedLine("f:\\dd\\vctools\\vc7libs\\ship\\atlmfc\\src\\mfc\\afxshelllistctrl.cpp"
                                  ,0x279), iVar2 != 0)) {
    pcVar1 = (code *)swi(3);
    iVar2 = (*pcVar1)();
    return iVar2;
  }
  if (bVar5) {
    thunk_FUN_007113e0();
  }
  CFileStatus::CFileStatus(aCStack_4cc);
  CFileStatus::CFileStatus(aCStack_244);
  uStack_118 = 0;
  switch(param_3) {
  case 0:
    iVar2 = (**(code **)(*(int *)*puStack_630 + 0x1c))
                      (*puStack_630,0,puStack_630[2],*(undefined4 *)(lStack_8 + 8));
    if (-1 < iVar2) {
      uStack_118 = (uint)(short)iVar2;
    }
    break;
  case 1:
  case 3:
    BVar4 = SHGetPathFromIDListA((LPCITEMIDLIST)puStack_630[1],aCStack_73c);
    if ((BVar4 == 0) ||
       (iVar2 = CFile::GetStatus(aCStack_73c,aCStack_4cc,(CAtlTransactionManager *)0x0), iVar2 == 0)
       ) {
      uStack_118 = 0xffffffff;
    }
    else {
      BVar4 = SHGetPathFromIDListA(*(LPCITEMIDLIST *)(lStack_8 + 4),aCStack_114);
      if ((BVar4 == 0) ||
         (iVar2 = CFile::GetStatus(aCStack_114,aCStack_244,(CAtlTransactionManager *)0x0),
         iVar2 == 0)) {
        uStack_118 = 1;
      }
      else if (param_3 == 1) {
        if ((bStack_4ac & 0x10) == 0) {
          if ((bStack_224 & 0x10) == 0) {
            if ((uStack_228 < uStack_4b0) ||
               ((uStack_228 <= uStack_4b0 && (uStack_22c <= uStack_4b4)))) {
              if ((uStack_4b0 < uStack_228) ||
                 ((uStack_4b0 <= uStack_228 && (uStack_4b4 <= uStack_22c)))) {
                uStack_758 = 0;
              }
              else {
                uStack_758 = 1;
              }
              uStack_754 = uStack_758;
            }
            else {
              uStack_754 = 0xffffffff;
            }
            uStack_118 = uStack_754;
          }
          else {
            uStack_118 = 1;
          }
        }
        else {
          uStack_118 = 0xffffffff;
        }
      }
      else {
        bVar5 = ATL::CTime::operator<(aCStack_4c4,uStack_23c,uStack_238);
        if (bVar5) {
          uStack_75c = 0xffffffff;
        }
        else {
          bVar5 = ATL::CTime::operator>(aCStack_4c4,uStack_23c,uStack_238);
          uStack_75c = (uint)bVar5;
        }
        uStack_118 = uStack_75c;
      }
    }
    break;
  case 2:
    DVar3 = SHGetFileInfoA((LPCSTR)puStack_630[1],0,&SStack_3a4,0x160,0x408);
    if ((DVar3 != 0) &&
       (DVar3 = SHGetFileInfoA(*(LPCSTR *)(lStack_8 + 4),0,&SStack_62c,0x160,0x408), DVar3 != 0)) {
      uStack_118 = lstrcmpiA(SStack_3a4.szTypeName,SStack_62c.szTypeName);
    }
  }
  iVar2 = __security_check_cookie(uStack_c ^ (uint)&stack0xfffffffc);
  return iVar2;
}



ulong __thiscall
COleControlSite::ConnectSink(COleControlSite *this,_GUID *param_1,IUnknown *param_2)

{
  code *pcVar1;
  int iVar2;
  ulong uVar3;
  int *piStack_10;
  ulong uStack_c;
  int *piStack_8;
  
  if ((*(int *)(this + 0x50) == 0) &&
     (iVar2 = AfxAssertFailedLine("f:\\dd\\vctools\\vc7libs\\ship\\atlmfc\\src\\mfc\\occsite.cpp",
                                  0x30e), iVar2 != 0)) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return uVar3;
  }
  if ((*(int *)(this + 0x50) != 0) &&
     (iVar2 = (**(code **)**(undefined4 **)(this + 0x50))
                        (*(undefined4 *)(this + 0x50),&DAT_00bf947c,&piStack_8), -1 < iVar2)) {
    if ((piStack_8 == (int *)0x0) &&
       (iVar2 = AfxAssertFailedLine("f:\\dd\\vctools\\vc7libs\\ship\\atlmfc\\src\\mfc\\occsite.cpp",
                                    0x316), iVar2 != 0)) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return uVar3;
    }
    piStack_10 = (int *)0x0;
    uStack_c = 0;
    iVar2 = (**(code **)(*piStack_8 + 0x10))(piStack_8,param_1,&piStack_10);
    if (-1 < iVar2) {
      if ((piStack_10 == (int *)0x0) &&
         (iVar2 = AfxAssertFailedLine("f:\\dd\\vctools\\vc7libs\\ship\\atlmfc\\src\\mfc\\occsite.cpp"
                                      ,0x31c), iVar2 != 0)) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return uVar3;
      }
      (**(code **)(*piStack_10 + 0x14))(piStack_10,param_2,&uStack_c);
      (**(code **)(*piStack_10 + 8))(piStack_10);
    }
    (**(code **)(*piStack_8 + 8))(piStack_8);
    return uStack_c;
  }
  return 0;
}



int __thiscall
COleLinkingDoc::RegisterIfServerAttached(COleLinkingDoc *this,wchar_t *param_1,int param_2)

{
  CObject *this_00;
  code *pcVar1;
  int iVar2;
  CDocTemplate *pCVar3;
  
  AfxAssertValidObject
            ((CObject *)this,"f:\\dd\\vctools\\vc7libs\\ship\\atlmfc\\src\\mfc\\olelink.cpp",0x11f);
  if (((param_1 != (wchar_t *)0x0) && (iVar2 = AfxIsValidString(param_1,-1), iVar2 == 0)) &&
     (iVar2 = AfxAssertFailedLine("f:\\dd\\vctools\\vc7libs\\ship\\atlmfc\\src\\mfc\\olelink.cpp",
                                  0x120), iVar2 != 0)) {
    pcVar1 = (code *)swi(3);
    iVar2 = (*pcVar1)();
    return iVar2;
  }
  pCVar3 = CDocument::GetDocTemplate((CDocument *)this);
  iVar2 = CDocument::IsSearchAndOrganizeHandler((CDocument *)this);
  if ((iVar2 == 0) || (pCVar3 != (CDocTemplate *)0x0)) {
    AfxAssertValidObject
              ((CObject *)pCVar3,"f:\\dd\\vctools\\vc7libs\\ship\\atlmfc\\src\\mfc\\olelink.cpp",
               0x12a);
    this_00 = *(CObject **)(pCVar3 + 0x24);
    if (this_00 != (CObject *)0x0) {
      iVar2 = CObject::IsKindOf(this_00,(CRuntimeClass *)&PTR_s_COleObjectFactory_00bac228);
      if ((iVar2 == 0) &&
         (iVar2 = AfxAssertFailedLine("f:\\dd\\vctools\\vc7libs\\ship\\atlmfc\\src\\mfc\\olelink.cpp"
                                      ,0x131), iVar2 != 0)) {
        pcVar1 = (code *)swi(3);
        iVar2 = (*pcVar1)();
        return iVar2;
      }
      *(CObject **)(this + 0x114) = this_00;
      iVar2 = Register(this,(COleObjectFactory *)this_00,(char *)param_1);
      if (iVar2 == 0) {
        if (param_2 != 0) {
          (**(code **)(*(int *)this + 0x90))(param_1,0,0,0xf185);
        }
        return 0;
      }
    }
  }
  return 1;
}



void __thiscall
CMFCVisualManagerOffice2003::OnDrawBarGripper
          (CMFCVisualManagerOffice2003 *this,CObject *param_1,int param_3,int param_4,int param_5,
          int param_6,int param_7,CBasePane *param_8)

{
  int iVar1;
  CObject *this_00;
  int *piVar2;
  int iStack_88;
  int iStack_80;
  int iStack_7c;
  int iStack_78;
  int iStack_74;
  int iStack_70;
  int iStack_6c;
  int iStack_2c;
  int iStack_18;
  
  AfxAssertValidObject
            (param_1,
             "f:\\dd\\vctools\\vc7libs\\ship\\atlmfc\\src\\mfc\\afxvisualmanageroffice2003.cpp",
             0x1da);
  if (((param_8 == (CBasePane *)0x0) || (iVar1 = CBasePane::IsDialogControl(param_8), iVar1 == 0))
     && (8 < DAT_00c5593c)) {
    if (param_7 == 0) {
      param_4 = param_6 + -4;
    }
    else {
      param_3 = param_5 + -4;
    }
    this_00 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMFCToolBar_00c44928,(CObject *)param_8);
    if (this_00 != (CObject *)0x0) {
      if (param_7 == 0) {
        iVar1 = CMFCToolBar::IsLargeIcons();
        if (iVar1 == 0) {
          piVar2 = (int *)CMFCToolBar::GetButtonSize((CMFCToolBar *)this_00);
          iStack_74 = *piVar2;
        }
        else {
          iStack_74 = (**(code **)(*(int *)this_00 + 0x360))();
        }
        piVar2 = (int *)CMFCToolBar::GetImageSize((CMFCToolBar *)this_00);
        if ((iStack_74 - *piVar2) / 2 < 0) {
          iStack_78 = 0;
        }
        else {
          piVar2 = (int *)CMFCToolBar::GetImageSize((CMFCToolBar *)this_00);
          iStack_78 = (iStack_74 - *piVar2) / 2;
        }
        CRect::DeflateRect((CRect *)&param_3,iStack_78,0);
      }
      else {
        iVar1 = CMFCToolBar::IsLargeIcons();
        if (iVar1 == 0) {
          iVar1 = CMFCToolBar::GetButtonSize((CMFCToolBar *)this_00);
          iStack_6c = *(int *)(iVar1 + 4);
        }
        else {
          iStack_6c = (**(code **)(*(int *)this_00 + 0x35c))();
        }
        iVar1 = CMFCToolBar::GetImageSize((CMFCToolBar *)this_00);
        if ((iStack_6c - *(int *)(iVar1 + 4)) / 2 < 0) {
          iStack_70 = 0;
        }
        else {
          iVar1 = CMFCToolBar::GetImageSize((CMFCToolBar *)this_00);
          iStack_70 = (iStack_6c - *(int *)(iVar1 + 4)) / 2;
        }
        CRect::DeflateRect((CRect *)&param_3,0,iStack_70);
      }
    }
    if (param_7 == 0) {
      iVar1 = thunk_FUN_00b31c40();
      iStack_7c = iVar1 + -4 + (iVar1 + -4 >> 0x1f & 3U);
    }
    else {
      iVar1 = thunk_FUN_00b31c60();
      iStack_7c = iVar1 + -4 + (iVar1 + -4 >> 0x1f & 3U);
    }
    iStack_7c = iStack_7c >> 2;
    if (param_7 == 0) {
      iStack_80 = thunk_FUN_00b31c40();
      iStack_80 = iStack_80 + iStack_7c * -4;
    }
    else {
      iStack_80 = thunk_FUN_00b31c60();
      iStack_80 = iStack_80 + iStack_7c * -4;
    }
    iStack_80 = iStack_80 / 2;
    iStack_18 = iStack_80;
    for (iStack_2c = 0; iStack_2c < iStack_7c; iStack_2c = iStack_2c + 1) {
      if (param_7 == 0) {
        iVar1 = param_3 + iStack_18;
        iStack_88 = param_4;
      }
      else {
        iStack_88 = param_4 + iStack_18;
        iVar1 = param_3;
      }
      CDC::FillSolidRect((CDC *)param_1,iVar1 + 1,iStack_88 + 1,2,2,DAT_00c557ac);
      CDC::FillSolidRect((CDC *)param_1,iVar1,iStack_88,2,2,*(ulong *)(this + 0x1c4));
      iStack_18 = iStack_18 + 4;
    }
  }
  else {
    CMFCVisualManagerOfficeXP::OnDrawBarGripper
              ((CMFCVisualManagerOfficeXP *)this,param_1,param_3,param_4,param_5,param_6,param_7,
               param_8);
  }
  return;
}



int __thiscall CMFCTabCtrl::GetTabFromPoint(CMFCTabCtrl *this,CPoint *param_1)

{
  int iVar1;
  CObject *pCVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iStack_30;
  int iStack_28;
  int iStack_18;
  int iStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  uint uStack_8;
  
  uStack_8 = DAT_00c4a700 ^ (uint)&stack0xfffffffc;
  AfxAssertValidObject
            ((CObject *)this,"f:\\dd\\vctools\\vc7libs\\ship\\atlmfc\\src\\mfc\\afxtabctrl.cpp",
             0xb12);
  iVar1 = CRect::PtInRect((CRect *)(this + 0x290),*(tagPOINT *)param_1);
  if (iVar1 != 0) {
    if (((*(int *)(this + 0x208) == 0) && (*(int *)(this + 0x20c) == 0)) &&
       (*(int *)(this + 0x210) == 0)) {
      CMFCBaseTabCtrl::GetTabFromPoint((CMFCBaseTabCtrl *)this,param_1);
    }
    else {
      if (-1 < *(int *)(this + 0xa0)) {
        pCVar2 = (CObject *)CPtrArray::operator[]((CPtrArray *)(this + 0x88),*(int *)(this + 0xa0));
        AfxAssertValidObject
                  (pCVar2,"f:\\dd\\vctools\\vc7libs\\ship\\atlmfc\\src\\mfc\\afxtabctrl.cpp",0xb24);
        iStack_18 = *(int *)(pCVar2 + 0x10);
        iStack_14 = *(int *)(pCVar2 + 0x14);
        uStack_10 = *(undefined4 *)(pCVar2 + 0x18);
        uStack_c = *(undefined4 *)(pCVar2 + 0x1c);
        iVar1 = CRect::PtInRect((CRect *)&iStack_18,*(tagPOINT *)param_1);
        if (iVar1 != 0) {
          if ((0 < *(int *)(this + 0xa0)) &&
             (iVar1 = thunk_FUN_00b31c60(), *(int *)param_1 < iVar1 + iStack_18)) {
            iVar5 = *(int *)param_1 - iStack_18;
            iVar1 = *(int *)(param_1 + 4) - iStack_14;
            iVar3 = thunk_FUN_00b31c60();
            iVar4 = thunk_FUN_00b31c60();
            if (iVar5 * iVar5 + iVar1 * iVar1 < (iVar4 * iVar3) / 2) {
              iStack_28 = *(int *)(this + 0xa0);
              do {
                iStack_28 = iStack_28 + -1;
                if (iStack_28 < 0) break;
                pCVar2 = (CObject *)CPtrArray::operator[]((CPtrArray *)(this + 0x88),iStack_28);
                AfxAssertValidObject
                          (pCVar2,"f:\\dd\\vctools\\vc7libs\\ship\\atlmfc\\src\\mfc\\afxtabctrl.cpp"
                           ,0xb34);
              } while (*(int *)(pCVar2 + 0x34) == 0);
            }
          }
          goto LAB_008af884;
        }
      }
      for (iStack_30 = 0; iStack_30 < *(int *)(this + 0x9c); iStack_30 = iStack_30 + 1) {
        pCVar2 = (CObject *)CPtrArray::operator[]((CPtrArray *)(this + 0x88),iStack_30);
        AfxAssertValidObject
                  (pCVar2,"f:\\dd\\vctools\\vc7libs\\ship\\atlmfc\\src\\mfc\\afxtabctrl.cpp",0xb45);
        if ((*(int *)(pCVar2 + 0x34) != 0) &&
           (iVar1 = CRect::PtInRect((CRect *)(pCVar2 + 0x10),*(tagPOINT *)param_1), iVar1 != 0))
        break;
      }
    }
  }
LAB_008af884:
  iVar1 = __security_check_cookie(uStack_8 ^ (uint)&stack0xfffffffc);
  return iVar1;
}



void __thiscall CMFCRibbonInfo::XQAT::~XQAT(XQAT *this)

{
  uint uVar1;
  void *pvStack_10;
  undefined1 *puStack_c;
  uint uStack_8;
  
  puStack_c = &LAB_00b73ca3;
  pvStack_10 = ExceptionList;
  uVar1 = DAT_00c4a700 ^ (uint)&stack0xfffffffc;
  ExceptionList = &pvStack_10;
  *(undefined ***)this = vftable;
  uStack_8 = 1;
  CArray<>::RemoveAll((CArray<> *)(this + 8));
  uStack_8 = uStack_8 & 0xffffff00;
  CArray<>::~CArray<>((CArray<> *)(this + 8));
  uStack_8 = 0xffffffff;
  thunk_FUN_00a39cb0(uVar1);
  ExceptionList = pvStack_10;
  return;
}



undefined4 * __fastcall thunk_FUN_006f0690(undefined4 *param_1)

{
  *param_1 = CWnd::XAccessibleServer::vftable;
  return param_1;
}



int __thiscall
CMFCToolBarImages::PrepareDrawImage
          (CMFCToolBarImages *this,void **param_1,int param_3,int param_4,int param_5)

{
  code *pcVar1;
  uint uVar2;
  int iVar3;
  HDC__ *pHVar4;
  void *pvVar5;
  HGDIOBJ pvVar6;
  char *pcVar7;
  HBITMAP pHVar8;
  CBitmap *pCVar9;
  int iVar10;
  CTraceFileAndLineInfo *this_00;
  CTraceFileAndLineInfo *this_01;
  undefined2 *puVar11;
  char *pcVar12;
  int iStack_68;
  HGDIOBJ pvStack_64;
  CWindowDC aCStack_38 [20];
  uint uStack_24;
  uint uStack_20;
  uint uStack_1c;
  uint uStack_18;
  int iStack_14;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_00b5ff78;
  pvStack_10 = ExceptionList;
  uVar2 = DAT_00c4a700 ^ (uint)&stack0xfffffffc;
  ExceptionList = &pvStack_10;
  if (*(int *)(this + 0x88) == 0) {
    iVar3 = 0;
  }
  else {
    if (DAT_00c57bb8 != 0) {
      CCriticalSection::Lock((CCriticalSection *)&DAT_00c57bcc);
    }
    if (((param_5 != 0) && (*(int *)(this + 8) < 0x20)) && (*(int *)(this + 0x8c) == 0)) {
      UpdateInternalImage(this,0);
    }
    if ((*(int *)(this + 8) < 0x20) && (*(int *)(this + 0x90) == 0)) {
      CMFCVisualManager::GetInstance();
      iVar3 = thunk_FUN_00886c60();
      if ((iVar3 != 0) &&
         (iVar3 = AFX_GLOBAL_DATA::IsHighContrastMode((AFX_GLOBAL_DATA *)&DAT_00c55790), iVar3 == 0)
         ) {
        UpdateInternalImage(this,1);
      }
    }
    *(undefined4 *)(this + 0x1c) = 0;
    if (((*(int *)(this + 0x8c) == 0) || ((4 < *(int *)(this + 8) && (*(int *)(this + 0x34) == 0))))
       || (*(int *)(this + 8) == 0)) {
      param_5 = 0;
    }
    *(int *)(this + 0x28) = param_5;
    uStack_18 = (uint)(*(int *)(this + 0x88) != 0);
    if ((uStack_18 == 0) &&
       (iVar3 = AfxAssertFailedLine("f:\\dd\\vctools\\vc7libs\\ship\\atlmfc\\src\\mfc\\afxtoolbarimages.cpp"
                                    ,0x475), iVar3 != 0)) {
      pcVar1 = (code *)swi(3);
      iVar3 = (*pcVar1)();
      return iVar3;
    }
    if (uStack_18 == 0) {
      thunk_FUN_007113e0(uVar2);
    }
    pHVar4 = CDC::GetSafeHdc((CDC *)(this + 0x40));
    uStack_1c = (uint)(pHVar4 == (HDC__ *)0x0);
    if ((uStack_1c == 0) &&
       (iVar3 = AfxAssertFailedLine("f:\\dd\\vctools\\vc7libs\\ship\\atlmfc\\src\\mfc\\afxtoolbarimages.cpp"
                                    ,0x476), iVar3 != 0)) {
      pcVar1 = (code *)swi(3);
      iVar3 = (*pcVar1)();
      return iVar3;
    }
    if (uStack_1c == 0) {
      thunk_FUN_007113e0();
    }
    pvVar5 = CGdiObject::GetSafeHandle((CGdiObject *)(this + 0x98));
    uStack_20 = (uint)(pvVar5 == (void *)0x0);
    if ((uStack_20 == 0) &&
       (iVar3 = AfxAssertFailedLine("f:\\dd\\vctools\\vc7libs\\ship\\atlmfc\\src\\mfc\\afxtoolbarimages.cpp"
                                    ,0x477), iVar3 != 0)) {
      pcVar1 = (code *)swi(3);
      iVar3 = (*pcVar1)();
      return iVar3;
    }
    if (uStack_20 == 0) {
      thunk_FUN_007113e0();
    }
    uStack_24 = (uint)(*(int *)(this + 0xa0) == 0);
    if ((uStack_24 == 0) &&
       (iVar3 = AfxAssertFailedLine("f:\\dd\\vctools\\vc7libs\\ship\\atlmfc\\src\\mfc\\afxtoolbarimages.cpp"
                                    ,0x478), iVar3 != 0)) {
      pcVar1 = (code *)swi(3);
      iVar3 = (*pcVar1)();
      return iVar3;
    }
    if (uStack_24 == 0) {
      thunk_FUN_007113e0();
    }
    if ((param_5 == 0) || (0x1f < *(int *)(this + 8))) {
      pvStack_64 = *(HGDIOBJ *)(this + 0x88);
    }
    else {
      pvStack_64 = *(HGDIOBJ *)(this + 0x8c);
    }
    pvVar6 = SelectObject(DAT_00c57bc4,pvStack_64);
    param_1[2] = pvVar6;
    if (param_1[2] == (void *)0x0) {
      pcVar12 = "Error: can\'t draw toolbar.\r\n";
      puVar11 = &DAT_00b8a004;
      pcVar7 = (char *)thunk_FUN_006bf580("f:\\dd\\vctools\\vc7libs\\ship\\atlmfc\\src\\mfc\\afxtoolbarimages.cpp"
                                          ,0x47f);
      ATL::CTraceFileAndLineInfo::operator()(this_00,pcVar7,puVar11,pcVar12);
      if (DAT_00c57bb8 != 0) {
        CCriticalSection::Unlock((CCriticalSection *)&DAT_00c57bcc);
      }
      iVar3 = 0;
    }
    else {
      if (*(int *)(this + 0x3c) != 0) {
        pHVar8 = CreateBitmap(*(int *)(this + 0x50) + 2,*(int *)(this + 0x54) + 2,1,1,(void *)0x0);
        *param_1 = pHVar8;
        pvVar6 = SelectObject(DAT_00c57bc8,*param_1);
        param_1[1] = pvVar6;
        if ((*param_1 == (void *)0x0) || (param_1[1] == (void *)0x0)) {
          pcVar12 = "Error: can\'t draw toolbar.\r\n";
          puVar11 = &DAT_00b8a004;
          pcVar7 = (char *)thunk_FUN_006bf580("f:\\dd\\vctools\\vc7libs\\ship\\atlmfc\\src\\mfc\\afxtoolbarimages.cpp"
                                              ,0x490);
          ATL::CTraceFileAndLineInfo::operator()(this_01,pcVar7,puVar11,pcVar12);
          AfxDeleteObject(param_1);
          if (DAT_00c57bb8 != 0) {
            CCriticalSection::Unlock((CCriticalSection *)&DAT_00c57bcc);
          }
          ExceptionList = pvStack_10;
          return 0;
        }
      }
      if ((param_3 < 1) || (param_4 < 1)) {
        *(undefined4 *)(this + 0x60) = *(undefined4 *)(this + 0x50);
        *(undefined4 *)(this + 100) = *(undefined4 *)(this + 0x54);
      }
      else {
        *(int *)(this + 0x60) = param_3;
        *(int *)(this + 100) = param_4;
      }
      if (*(int *)(this + 8) == 0x20) {
        iStack_68 = -1;
      }
      else {
        iStack_68 = *(int *)(this + 0xa4);
      }
      iStack_14 = iStack_68;
      iVar3 = CSize::operator!=((CSize *)(this + 0x60),*(tagSIZE *)(this + 0x50));
      if ((iVar3 != 0) || (iStack_14 != -1)) {
        CWindowDC::CWindowDC(aCStack_38,(CWnd *)0x0);
        uStack_8 = 0;
        iVar3 = CSize::operator!=((CSize *)(this + 0x60),*(tagSIZE *)(this + 0x50));
        *(int *)(this + 0x1c) = iVar3;
        CDC::CreateCompatibleDC((CDC *)(this + 0x40),(CDC *)0x0);
        CBitmap::CreateCompatibleBitmap
                  ((CBitmap *)(this + 0x98),(CDC *)aCStack_38,*(int *)(this + 0x50) + 2,
                   *(int *)(this + 0x54) + 2);
        pCVar9 = CDC::SelectObject((CDC *)(this + 0x40),(CBitmap *)(this + 0x98));
        *(CBitmap **)(this + 0xa0) = pCVar9;
        iVar3 = *(int *)(this + 0xa0);
        if ((iVar3 == 0) &&
           (iVar10 = AfxAssertFailedLine("f:\\dd\\vctools\\vc7libs\\ship\\atlmfc\\src\\mfc\\afxtoolbarimages.cpp"
                                         ,0x4b1), iVar10 != 0)) {
          pcVar1 = (code *)swi(3);
          iVar3 = (*pcVar1)();
          return iVar3;
        }
        if (iVar3 == 0) {
          thunk_FUN_007113e0();
        }
        uStack_8 = 0xffffffff;
        CWindowDC::~CWindowDC(aCStack_38);
      }
      iVar3 = 1;
    }
  }
  ExceptionList = pvStack_10;
  return iVar3;
}



undefined4 __thiscall thunk_FUN_00aaebb0(undefined4 param_1,uint param_2)

{
  thunk_FUN_00aaebf0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_006c4610(param_1);
  }
  return param_1;
}



undefined4 thunk_FUN_0077a6d0(void)

{
  return 0;
}



undefined4 thunk_FUN_0077bdb0(void)

{
  return 1;
}



void __thiscall CCommandManager::ClearCmdImage(CCommandManager *this,uint param_1)

{
  CMap<>::RemoveKey((CMap<> *)(this + 0x20),param_1);
  return;
}



CMapPtrToPtr * __thiscall thunk_FUN_0073afb0(CMapPtrToPtr *param_1,uint param_2)

{
  CMapPtrToPtr::~CMapPtrToPtr(param_1);
  if ((param_2 & 1) != 0) {
    thunk_FUN_006c4610(param_1);
  }
  return param_1;
}



int __thiscall CMFCVisualManager::GetTasksPaneTaskHorzOffset(CMFCVisualManager *this)

{
  return *(int *)(this + 0xb4);
}



long __thiscall COleClientItem::GetLastStatus(COleClientItem *this)

{
  AfxAssertValidObject
            ((CObject *)this,"f:\\dd\\vctools\\vc7libs\\ship\\atlmfc\\include\\afxole.inl",0xb9);
  return *(long *)(this + 0x34);
}



CMFCToolBarImages * __thiscall CMFCToolBar::GetLockedMenuImages(CMFCToolBar *this)

{
  code *pcVar1;
  int iVar2;
  CMFCToolBarImages *pCVar3;
  
  if (*(int *)(this + 0xb04) == 0) {
    iVar2 = AfxAssertFailedLine("f:\\dd\\vctools\\vc7libs\\ship\\atlmfc\\include\\afxtoolbar.h",
                                0x137);
    if (iVar2 != 0) {
      pcVar1 = (code *)swi(3);
      pCVar3 = (CMFCToolBarImages *)(*pcVar1)();
      return pCVar3;
    }
    pCVar3 = (CMFCToolBarImages *)0x0;
  }
  else {
    iVar2 = thunk_FUN_007b22c0();
    if (iVar2 < 1) {
      iVar2 = thunk_FUN_007b22c0();
      if (iVar2 < 1) {
        pCVar3 = (CMFCToolBarImages *)0x0;
      }
      else {
        pCVar3 = (CMFCToolBarImages *)(this + 0x2a4);
      }
    }
    else {
      pCVar3 = (CMFCToolBarImages *)(this + 0x8ec);
    }
  }
  return pCVar3;
}



void __thiscall
CPane::OnMouseMove(CPane *this,undefined4 param_1,undefined4 param_3,undefined4 param_4)

{
  tagPOINT tVar1;
  tagPOINT tVar2;
  tagSIZE *ptVar3;
  undefined1 auStack_30 [8];
  LONG LStack_28;
  undefined4 uStack_24;
  LONG LStack_20;
  LONG LStack_1c;
  tagPOINT tStack_18;
  LONG LStack_10;
  LONG LStack_c;
  uint uStack_8;
  
  AfxAssertValidObject
            ((CObject *)this,"f:\\dd\\vctools\\vc7libs\\ship\\atlmfc\\src\\mfc\\afxpane.cpp",0x16f);
  if (this[0x160] == (CPane)0x0) {
    CWnd::OnMouseMove((CWnd *)this,param_1,param_3,param_4);
  }
  else {
    uStack_8 = (**(code **)(*(int *)this + 0x1bc))();
    if ((uStack_8 & 1) == 0) {
      if ((uStack_8 & 2) != 0) {
        CMFCDragFrameImpl::MoveDragFrame((CMFCDragFrameImpl *)(this + 0x17c),0);
      }
    }
    else {
      CPoint::CPoint((CPoint *)&tStack_18);
      GetCursorPos(&tStack_18);
      LStack_28 = *(LONG *)(this + 0x180);
      uStack_24 = *(undefined4 *)(this + 0x184);
      tVar1.y = LStack_28;
      tVar1.x = (LONG)auStack_30;
      ptVar3 = (tagSIZE *)CPoint::operator-((CPoint *)&tStack_18,tVar1);
      LStack_20 = ptVar3->cx;
      LStack_1c = ptVar3->cy;
      CPoint::CPoint((CPoint *)&LStack_10,*ptVar3);
      tVar2.y = LStack_c;
      tVar2.x = LStack_10;
      CRect::OffsetRect((CRect *)(this + 0x140),tVar2);
      UpdateVirtualRect(this,LStack_10,LStack_c);
      if (*(int *)(this + 0xac) != 0) {
        (**(code **)(**(int **)(this + 0xac) + 0x284))(this,param_1,LStack_10,LStack_c);
        CWnd::RedrawWindow((CWnd *)this,(tagRECT *)0x0,(CRgn *)0x0,0x105);
      }
      *(LONG *)(this + 0x180) = tStack_18.x;
      *(LONG *)(this + 0x184) = tStack_18.y;
    }
  }
  return;
}



int __thiscall CPaneDivider::GetWidth(CPaneDivider *this)

{
  return *(int *)(this + 0x108);
}



undefined4 __fastcall
FID_conflict_operator_int____stdcall___struct_tagCHOOSEFONTW__(undefined4 *param_1)

{
  return *param_1;
}



void __thiscall COleServerDoc::OnDeactivateUI(COleServerDoc *this,int param_1)

{
  CFrameWnd *this_00;
  code *pcVar1;
  int iVar2;
  HWND__ *pHVar3;
  CWinApp *pCVar4;
  IUnknown *This;
  
  AfxAssertValidObject
            ((CObject *)this,"f:\\dd\\vctools\\vc7libs\\ship\\atlmfc\\src\\mfc\\olesvr1.cpp",0x661);
  this_00 = *(CFrameWnd **)(this + 0x14c);
  if ((this_00 != (CFrameWnd *)0x0) && (*(int *)(this_00 + 0x110) != 0)) {
    if ((*(int *)(this_00 + 0x128) == 0) &&
       (iVar2 = AfxAssertFailedLine("f:\\dd\\vctools\\vc7libs\\ship\\atlmfc\\src\\mfc\\olesvr1.cpp",
                                    0x668), iVar2 != 0)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    (**(code **)(**(int **)(this_00 + 0x128) + 0x20))(*(undefined4 *)(this_00 + 0x128),0,0);
    if (*(int *)(this_00 + 300) != 0) {
      (**(code **)(**(int **)(this_00 + 300) + 0x20))(*(undefined4 *)(this_00 + 300),0,0);
    }
    if ((*(int *)(this_00 + 0x128) == 0) &&
       (iVar2 = AfxAssertFailedLine("f:\\dd\\vctools\\vc7libs\\ship\\atlmfc\\src\\mfc\\olesvr1.cpp",
                                    0x66e), iVar2 != 0)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    (**(code **)(*(int *)this + 0x17c))(*(undefined4 *)(this_00 + 0x130),0);
    if (*(int *)(this_00 + 300) != 0) {
      (**(code **)(*(int *)this + 0x17c))(*(undefined4 *)(this_00 + 0x134),0);
    }
    if (*(int *)(this + 0x15c) == 0) {
      CFrameWnd::ShowOwnedWindows(this_00,0);
      CWnd::ShowWindow((CWnd *)this_00,0);
      *(undefined4 *)(this_00 + 0xc0) = 0;
      *(undefined4 *)(*(int *)(this_00 + 0x130) + 0xc0) = 0;
    }
    pHVar3 = CWnd::Detach(*(CWnd **)(this_00 + 0x130));
    *(HWND__ **)(*(int *)(this_00 + 0x130) + 0x20) = pHVar3;
    if (*(int *)(this_00 + 0x134) != 0) {
      pHVar3 = CWnd::Detach(*(CWnd **)(this_00 + 0x134));
      *(HWND__ **)(*(int *)(this_00 + 0x134) + 0x20) = pHVar3;
    }
    *(undefined4 *)(this_00 + 0x110) = 0;
    pCVar4 = AfxGetApp();
    if (*(CFrameWnd **)(pCVar4 + 0x24) == this_00) {
      *(undefined4 *)(pCVar4 + 0x24) = 0;
    }
    if ((*(int *)(this + 0x138) == 0) &&
       (iVar2 = AfxAssertFailedLine("f:\\dd\\vctools\\vc7libs\\ship\\atlmfc\\src\\mfc\\olesvr1.cpp",
                                    0x688), iVar2 != 0)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    This = _AfxQueryInterface(*(IUnknown **)(this + 0x138),(_GUID *)&DAT_00bf93a0);
    if (This != (IUnknown *)0x0) {
      (*This->lpVtbl[3].AddRef)(This);
      (*This->lpVtbl->Release)(This);
    }
  }
  return;
}



void __thiscall CVSListBoxEditCtrl::OnBrowse(CVSListBoxEditCtrl *this)

{
  HWND hWnd;
  BOOL BVar1;
  
  if (*(int *)(this + 0xbc) != 0) {
    hWnd = (HWND)thunk_FUN_006d9400();
    (**(code **)(**(int **)(this + 0xbc) + 0x1c0))();
    BVar1 = IsWindow(hWnd);
    if (BVar1 != 0) {
      SetFocus(hWnd);
    }
  }
  return;
}



__POSITION * __thiscall CObList::InsertAfter(CObList *this,__POSITION *param_1,CObject *param_2)

{
  code *pcVar1;
  __POSITION *p_Var2;
  int iVar3;
  
  AfxAssertValidObject
            ((CObject *)this,"f:\\dd\\vctools\\vc7libs\\ship\\atlmfc\\src\\mfc\\list_o.cpp",0x108);
  if (param_1 == (__POSITION *)0x0) {
    p_Var2 = AddTail(this,param_2);
  }
  else {
    iVar3 = AfxIsValidAddress(param_1,0xc,1);
    if (iVar3 == 0) {
      iVar3 = AfxAssertFailedLine("f:\\dd\\vctools\\vc7libs\\ship\\atlmfc\\src\\mfc\\list_o.cpp",
                                  0x10f);
      if (iVar3 != 0) {
        pcVar1 = (code *)swi(3);
        p_Var2 = (__POSITION *)(*pcVar1)();
        return p_Var2;
      }
    }
    p_Var2 = (__POSITION *)::NewNode(param_1,*(undefined4 *)param_1);
    *(CObject **)(p_Var2 + 8) = param_2;
    if (*(int *)param_1 == 0) {
      if (param_1 != *(__POSITION **)(this + 8)) {
        iVar3 = AfxAssertFailedLine("f:\\dd\\vctools\\vc7libs\\ship\\atlmfc\\src\\mfc\\list_o.cpp",
                                    0x11a);
        if (iVar3 != 0) {
          pcVar1 = (code *)swi(3);
          p_Var2 = (__POSITION *)(*pcVar1)();
          return p_Var2;
        }
      }
      *(__POSITION **)(this + 8) = p_Var2;
    }
    else {
      iVar3 = AfxIsValidAddress(*(void **)param_1,0xc,1);
      if (iVar3 == 0) {
        iVar3 = AfxAssertFailedLine("f:\\dd\\vctools\\vc7libs\\ship\\atlmfc\\src\\mfc\\list_o.cpp",
                                    0x115);
        if (iVar3 != 0) {
          pcVar1 = (code *)swi(3);
          p_Var2 = (__POSITION *)(*pcVar1)();
          return p_Var2;
        }
      }
      *(__POSITION **)(*(int *)param_1 + 4) = p_Var2;
    }
    *(__POSITION **)param_1 = p_Var2;
  }
  return p_Var2;
}



undefined4 CreateDlg(LPCSTR param_1,undefined4 param_2)

{
  code *pcVar1;
  HINSTANCE__ *hModule;
  HRSRC hResInfo;
  HGLOBAL hResData;
  int iVar2;
  undefined4 uVar3;
  LPVOID pvStack_14;
  
  pvStack_14 = (LPVOID)0x0;
  hModule = AfxGetResourceHandle();
  hResInfo = FindResourceA(hModule,param_1,(LPCSTR)0x5);
  hResData = LoadResource(hModule,hResInfo);
  if (hResData != (HGLOBAL)0x0) {
    pvStack_14 = LockResource(hResData);
  }
  if (pvStack_14 == (LPVOID)0x0) {
    iVar2 = AfxAssertFailedLine("f:\\dd\\vctools\\vc7libs\\ship\\atlmfc\\src\\mfc\\dlgcore.cpp",
                                0x113);
    if (iVar2 != 0) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return uVar3;
    }
  }
  uVar3 = thunk_FUN_006d7980(pvStack_14,param_2,hModule);
  UnlockResource(hResData);
  FreeResource(hResData);
  return uVar3;
}



undefined4 * __fastcall FID_conflict__AFXCTL_AMBIENT_CACHE(undefined4 *param_1)

{
  thunk_FUN_006e4850();
  *param_1 = _AFX_OLE_STATE::vftable;
  return param_1;
}



void __thiscall InitHashTable(CObject *param_1,uint param_2,int param_3)

{
  code *pcVar1;
  int iVar2;
  void *pvVar3;
  
  AfxAssertValidObject(param_1,"f:\\dd\\vctools\\vc7libs\\ship\\atlmfc\\src\\mfc\\map_wp.cpp",0x32);
  if (*(int *)(param_1 + 0xc) != 0) {
    iVar2 = AfxAssertFailedLine("f:\\dd\\vctools\\vc7libs\\ship\\atlmfc\\src\\mfc\\map_wp.cpp",0x33)
    ;
    if (iVar2 != 0) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (param_2 == 0) {
    iVar2 = AfxAssertFailedLine("f:\\dd\\vctools\\vc7libs\\ship\\atlmfc\\src\\mfc\\map_wp.cpp",0x34)
    ;
    if (iVar2 != 0) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (param_2 == 0) {
    param_2 = 0x11;
  }
  if (*(int *)(param_1 + 4) != 0) {
    abs(*(long *)(param_1 + 4));
    *(undefined4 *)(param_1 + 4) = 0;
  }
  if (param_3 != 0) {
    pvVar3 = operator_new__(-(uint)((int)((ulonglong)param_2 * 4 >> 0x20) != 0) |
                            (uint)((ulonglong)param_2 * 4),
                            "f:\\dd\\vctools\\vc7libs\\ship\\atlmfc\\src\\mfc\\map_wp.cpp",0x41);
    *(void **)(param_1 + 4) = pvVar3;
    _memset(*(void **)(param_1 + 4),0,param_2 << 2);
  }
  *(uint *)(param_1 + 8) = param_2;
  return;
}



int __thiscall CMFCTabCtrl::GetTabsHeight(CMFCTabCtrl *this)

{
  int iVar1;
  
  if ((*(int *)(this + 0x214) == 0) &&
     (((iVar1 = (**(code **)(*(int *)this + 0x1a8))(), *(int *)(this + 0x10c) != 0 && (iVar1 < 2))
      || ((*(int *)(this + 0x238) != 0 && (iVar1 == 0)))))) {
    return 0;
  }
  return *(int *)(this + 0xf0);
}



CMFCRibbonSlider * __thiscall
CMFCRibbonSlider::CMFCRibbonSlider(CMFCRibbonSlider *this,uint param_1,int param_2)

{
  uint uVar1;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_00b7aed8;
  pvStack_10 = ExceptionList;
  uVar1 = DAT_00c4a700 ^ (uint)&stack0xfffffffc;
  ExceptionList = &pvStack_10;
  CMFCRibbonBaseElement::CMFCRibbonBaseElement((CMFCRibbonBaseElement *)this);
  uStack_8 = 0;
  *(undefined ***)this = vftable;
  thunk_FUN_00b31aa0(uVar1);
  thunk_FUN_00b31aa0();
  thunk_FUN_00b31aa0();
  thunk_FUN_00b31aa0();
  CommonInit(this);
  *(uint *)(this + 0x48) = param_1;
  *(int *)(this + 0xbc) = param_2;
  ExceptionList = pvStack_10;
  return this;
}



COleDateTimeSpan * __thiscall ATL::COleDateTimeSpan::COleDateTimeSpan(COleDateTimeSpan *this)

{
  *(undefined8 *)this = 0;
  *(undefined4 *)(this + 8) = 0;
  return this;
}



undefined4 * __fastcall thunk_FUN_00717900(undefined4 *param_1)

{
  *param_1 = 0;
  return param_1;
}



CPane * __thiscall
CMFCPopupMenu::CreateTearOffBar(CMFCPopupMenu *this,CFrameWnd *param_1,uint param_2,char *param_3)

{
  code *pcVar1;
  uint uVar2;
  int iVar3;
  CPane *pCVar4;
  char *pcVar5;
  undefined4 uVar6;
  CMenu *this_00;
  HMENU__ *pHVar7;
  CTraceFileAndLineInfo *this_01;
  undefined2 *puVar8;
  char *pcVar9;
  int iVar10;
  CWnd *pCStack_1c4;
  undefined1 auStack_1bc [8];
  undefined1 auStack_1b4 [4];
  CWnd *pCStack_1b0;
  CWnd *pCStack_1ac;
  CMFCToolBar *pCStack_1a0;
  CWnd *pCStack_19c;
  int iStack_198;
  int iStack_194;
  CMFCToolBarButton aCStack_190 [8];
  undefined4 uStack_188;
  undefined4 uStack_184;
  CMFCToolBarMenuButton aCStack_120 [8];
  undefined4 uStack_118;
  undefined4 uStack_114;
  uint uStack_38;
  int iStack_34;
  uint uStack_30;
  uint uStack_2c;
  CStringT<> aCStack_28 [4];
  uint uStack_24;
  uint uStack_20;
  int iStack_1c;
  CWnd *pCStack_18;
  CMenu *pCStack_14;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_00b62660;
  pvStack_10 = ExceptionList;
  uVar2 = DAT_00c4a700 ^ (uint)&stack0xfffffffc;
  ExceptionList = &pvStack_10;
  uStack_38 = uVar2;
  AfxAssertValidObject
            ((CObject *)param_1,"f:\\dd\\vctools\\vc7libs\\ship\\atlmfc\\src\\mfc\\afxpopupmenu.cpp"
             ,0xbeb);
  uStack_20 = (uint)(param_3 != (char *)0x0);
  if ((uStack_20 == 0) &&
     (iVar3 = AfxAssertFailedLine("f:\\dd\\vctools\\vc7libs\\ship\\atlmfc\\src\\mfc\\afxpopupmenu.cpp"
                                  ,0xbec), iVar3 != 0)) {
    pcVar1 = (code *)swi(3);
    pCVar4 = (CPane *)(*pcVar1)();
    return pCVar4;
  }
  if (uStack_20 == 0) {
    thunk_FUN_007113e0(uVar2);
  }
  if ((param_2 == 0) &&
     (iVar3 = AfxAssertFailedLine("f:\\dd\\vctools\\vc7libs\\ship\\atlmfc\\src\\mfc\\afxpopupmenu.cpp"
                                  ,0xbed), iVar3 != 0)) {
    pcVar1 = (code *)swi(3);
    pCVar4 = (CPane *)(*pcVar1)();
    return pCVar4;
  }
  if ((*(int *)(this + 0xea8) != 0) &&
     (pCStack_14 = CMenu::FromHandle(*(HMENU__ **)(this + 0xea8)), pCStack_14 != (CMenu *)0x0)) {
    pCStack_1a0 = (CMFCToolBar *)
                  CObject::operator_new
                            (0xcc8,
                             "f:\\dd\\vctools\\vc7libs\\ship\\atlmfc\\src\\mfc\\afxpopupmenu.cpp",
                             0xbfa);
    uStack_8 = 0;
    if (pCStack_1a0 == (CMFCToolBar *)0x0) {
      pCStack_1c4 = (CWnd *)0x0;
    }
    else {
      pCStack_1c4 = (CWnd *)CMFCToolBar::CMFCToolBar(pCStack_1a0);
    }
    pCStack_19c = pCStack_1c4;
    uStack_8 = 0xffffffff;
    pCStack_18 = pCStack_1c4;
    iVar3 = (**(code **)(*(int *)pCStack_1c4 + 0x328))(param_1,0x50402808,param_2);
    if (iVar3 == 0) {
      pcVar9 = "Failed to create a new toolbar!\n";
      puVar8 = &DAT_00b8a004;
      pcVar5 = (char *)thunk_FUN_006bf580("f:\\dd\\vctools\\vc7libs\\ship\\atlmfc\\src\\mfc\\afxpopupmenu.cpp"
                                          ,0xbfd);
      ATL::CTraceFileAndLineInfo::operator()(this_01,pcVar5,puVar8,pcVar9);
      pCStack_1b0 = pCStack_18;
      pCStack_1ac = pCStack_18;
      if (pCStack_18 != (CWnd *)0x0) {
        (**(code **)(*(int *)pCStack_18 + 4))(1);
      }
    }
    else {
      CWnd::SetWindowTextA(pCStack_18,param_3);
      iStack_1c = CMenu::GetMenuItemCount(pCStack_14);
      for (uStack_24 = 0; (int)uStack_24 < iStack_1c; uStack_24 = uStack_24 + 1) {
        uStack_2c = CMenu::GetMenuItemID(pCStack_14,uStack_24);
        thunk_FUN_006bef10();
        uStack_8 = 1;
        CMenu::GetMenuStringA(pCStack_14,uStack_24,aCStack_28,0x400);
        if (uStack_2c == 0) {
          if (uStack_24 != iStack_1c - 1U) {
            (**(code **)(*(int *)pCStack_18 + 0x350))(0xffffffff);
          }
        }
        else if (uStack_2c == 0xffffffff) {
          uStack_30 = 0;
          if (DAT_00c59490 != (CMenuTearOffManager *)0x0) {
            uStack_30 = CMenuTearOffManager::Parse(DAT_00c59490,aCStack_28);
          }
          iStack_34 = ATL::CStringT<>::Find(aCStack_28,'\t',0);
          if (-1 < iStack_34) {
            uVar6 = ATL::CStringT<>::Left(aCStack_28,(int)auStack_1b4);
            uStack_8._0_1_ = 2;
            thunk_FUN_006c9180(uVar6);
            uStack_8 = CONCAT31(uStack_8._1_3_,1);
            thunk_FUN_006bef70();
          }
          iVar10 = 0;
          pcVar5 = (char *)thunk_FUN_006bf040();
          iVar3 = -1;
          this_00 = CMenu::GetSubMenu(pCStack_14,uStack_24);
          pHVar7 = CMenu::GetSafeHmenu(this_00);
          CMFCToolBarMenuButton::CMFCToolBarMenuButton
                    (aCStack_120,0xffffffff,pHVar7,iVar3,pcVar5,iVar10);
          uStack_8._0_1_ = 3;
          iVar3 = CMFCToolBarButton::GetImage((CMFCToolBarButton *)aCStack_120);
          if (iVar3 == -1) {
            uStack_114 = 0;
            uStack_118 = 1;
          }
          CMFCToolBarMenuButton::SetTearOff(aCStack_120,uStack_30);
          (**(code **)(*(int *)pCStack_18 + 0x34c))(aCStack_120,0xffffffff);
          uStack_8 = CONCAT31(uStack_8._1_3_,1);
          CMFCToolBarMenuButton::~CMFCToolBarMenuButton(aCStack_120);
        }
        else {
          iVar3 = IsStandardCommand(uStack_2c);
          if (iVar3 == 0) {
            iVar10 = 0;
            iVar3 = 0;
            pcVar5 = (char *)thunk_FUN_006bf040();
            CMFCToolBarButton::CMFCToolBarButton(aCStack_190,uStack_2c,-1,pcVar5,iVar3,iVar10);
            uStack_8._0_1_ = 4;
            iVar3 = CMFCToolBarButton::GetImage(aCStack_190);
            if (iVar3 == -1) {
              uStack_184 = 0;
              uStack_188 = 1;
            }
            (**(code **)(*(int *)pCStack_18 + 0x34c))(aCStack_190,0xffffffff);
            uStack_8 = CONCAT31(uStack_8._1_3_,1);
            CMFCToolBarButton::~CMFCToolBarButton(aCStack_190);
          }
        }
        uStack_8 = 0xffffffff;
        thunk_FUN_006bef70();
      }
      uVar2 = (**(code **)(*(int *)pCStack_18 + 0x1c4))();
      (**(code **)(*(int *)pCStack_18 + 0x1e8))(uVar2 | 0x34);
      (**(code **)(*(int *)pCStack_18 + 0x1f0))(0xf000);
      if ((*(int *)(this + 0x148) != 0) &&
         (iVar3 = CMFCToolBarMenuButton::IsMenuPaletteMode
                            (*(CMFCToolBarMenuButton **)(this + 0x148)), iVar3 != 0)) {
        iVar3 = CMFCToolBarMenuButton::GetPaletteRows(*(CMFCToolBarMenuButton **)(this + 0x148));
        iStack_198 = iStack_1c / iVar3 + 1;
        iStack_194 = (**(code **)(*(int *)pCStack_18 + 0x360))();
        iStack_194 = iStack_194 * iStack_198;
        (**(code **)(*(int *)pCStack_18 + 0x20c))(auStack_1bc,iStack_194,0);
      }
    }
  }
  ExceptionList = pvStack_10;
  pCVar4 = (CPane *)__security_check_cookie(uStack_38 ^ (uint)&stack0xfffffffc);
  return pCVar4;
}



void __thiscall CControlBar::SetBarStyle(CControlBar *this,ulong param_1)

{
  undefined4 uVar1;
  code *pcVar2;
  int iVar3;
  
  if ((param_1 & 0x40ffff) != param_1) {
    iVar3 = AfxAssertFailedLine("f:\\dd\\vctools\\vc7libs\\ship\\atlmfc\\src\\mfc\\barcore.cpp",0x82
                               );
    if (iVar3 != 0) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  CWnd::EnableToolTips((CWnd *)this,param_1 & 0x10);
  if (*(ulong *)(this + 0xa4) != param_1) {
    uVar1 = *(undefined4 *)(this + 0xa4);
    *(ulong *)(this + 0xa4) = param_1;
    (**(code **)(*(int *)this + 0x1a0))(uVar1,param_1);
  }
  return;
}



void __fastcall thunk_FUN_00a98900(CSyncObject *param_1)

{
  *(undefined ***)param_1 = CMutex::vftable;
  CSyncObject::~CSyncObject(param_1);
  return;
}



CDumpContext * operator<<(CDumpContext *param_1)

{
  errno_t eVar1;
  CDumpContext *pCVar2;
  __int64 _Var3;
  char *pcVar4;
  char *pcVar5;
  int iStack_3c;
  int iStack_38;
  char acStack_30 [32];
  uint uStack_10;
  __int64 _Stack_c;
  
  uStack_10 = DAT_00c4a700 ^ (uint)&stack0xfffffffc;
  acStack_30[0] = '\0';
  _Stack_c = ATL::CTime::GetTime((CTime *)&stack0x00000008);
  eVar1 = __ctime64_s(acStack_30,0x20,&_Stack_c);
  if ((eVar1 == 0) && (acStack_30[0] != '\0')) {
    _Var3 = ATL::CTime::GetTime((CTime *)&stack0x00000008);
    iStack_3c = (int)_Var3;
    iStack_38 = (int)((ulonglong)_Var3 >> 0x20);
    if (iStack_3c != 0 || iStack_38 != 0) {
      pcVar5 = "\")";
      pcVar4 = acStack_30;
      pCVar2 = CDumpContext::operator<<(param_1,"CTime(\"");
      pCVar2 = CDumpContext::operator<<(pCVar2,pcVar4);
      CDumpContext::operator<<(pCVar2,pcVar5);
      goto LAB_0088249d;
    }
  }
  pcVar4 = ")";
  _Var3 = ATL::CTime::GetTime((CTime *)&stack0x00000008);
  pCVar2 = CDumpContext::operator<<(param_1,"CTime(invalid #");
  pCVar2 = CDumpContext::operator<<(pCVar2,_Var3);
  CDumpContext::operator<<(pCVar2,pcVar4);
LAB_0088249d:
  pCVar2 = (CDumpContext *)__security_check_cookie(uStack_10 ^ (uint)&stack0xfffffffc);
  return pCVar2;
}



void __thiscall DName::setIsVCallThunk(DName *this)

{
  *(uint *)(this + 4) = *(uint *)(this + 4) | 0x8000;
  return;
}



void thunk_FUN_008cafa0(void)

{
  return;
}



ulong __thiscall
CMFCToolBarDropTarget::OnDragOver
          (CMFCToolBarDropTarget *this,undefined4 param_1,COleDataObject *param_2,undefined4 param_3
          ,undefined4 param_5,undefined4 param_6)

{
  code *pcVar1;
  int iVar2;
  ulong uVar3;
  int iVar4;
  
  iVar4 = *(int *)(this + 0x38);
  if ((iVar4 == 0) &&
     (iVar2 = AfxAssertFailedLine("f:\\dd\\vctools\\vc7libs\\ship\\atlmfc\\src\\mfc\\afxtoolbardroptarget.cpp"
                                  ,0x42), iVar2 != 0)) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return uVar3;
  }
  if (iVar4 == 0) {
    thunk_FUN_007113e0();
  }
  iVar4 = CMFCToolBar::IsCustomizeMode();
  if ((iVar4 == 0) ||
     (iVar4 = COleDataObject::IsDataAvailable(param_2,DAT_00c57d14,(tagFORMATETC *)0x0), iVar4 == 0)
     ) {
    uVar3 = 0;
  }
  else {
    uVar3 = (**(code **)(**(int **)(this + 0x38) + 0x3dc))(param_2,param_3,param_5,param_6);
  }
  return uVar3;
}



void __thiscall
COleDocIPFrameWndEx::ShowPane
          (COleDocIPFrameWndEx *this,CBasePane *param_1,int param_2,int param_3,int param_4)

{
  AfxAssertValidObject
            ((CObject *)this,
             "f:\\dd\\vctools\\vc7libs\\ship\\atlmfc\\src\\mfc\\afxoledocipframewndex.cpp",0x1cd);
  AfxAssertValidObject
            ((CObject *)param_1,
             "f:\\dd\\vctools\\vc7libs\\ship\\atlmfc\\src\\mfc\\afxoledocipframewndex.cpp",0x1ce);
  (**(code **)(*(int *)param_1 + 0x228))(param_2,param_3,param_4);
  return;
}



void __thiscall CDocument::AddView(CDocument *this,CView *param_1)

{
  code *pcVar1;
  int iVar2;
  __POSITION *p_Var3;
  
  AfxAssertValidObject
            ((CObject *)param_1,"f:\\dd\\vctools\\vc7libs\\ship\\atlmfc\\src\\mfc\\doccore.cpp",
             0x3ab);
  if (*(int *)(param_1 + 0x74) != 0) {
    iVar2 = AfxAssertFailedLine("f:\\dd\\vctools\\vc7libs\\ship\\atlmfc\\src\\mfc\\doccore.cpp",
                                0x3ac);
    if (iVar2 != 0) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  p_Var3 = CPtrList::Find((CPtrList *)(this + 0x2c),param_1,(__POSITION *)0x0);
  if (p_Var3 != (__POSITION *)0x0) {
    iVar2 = AfxAssertFailedLine("f:\\dd\\vctools\\vc7libs\\ship\\atlmfc\\src\\mfc\\doccore.cpp",
                                0x3ad);
    if (iVar2 != 0) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  CPtrList::AddTail((CPtrList *)(this + 0x2c),param_1);
  if (*(int *)(param_1 + 0x74) != 0) {
    iVar2 = AfxAssertFailedLine("f:\\dd\\vctools\\vc7libs\\ship\\atlmfc\\src\\mfc\\doccore.cpp",
                                0x3b0);
    if (iVar2 != 0) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  *(CDocument **)(param_1 + 0x74) = this;
  (**(code **)(*(int *)this + 0x78))();
  return;
}



void __fastcall AssertValid(CObject *param_1)

{
  code *pcVar1;
  int iVar2;
  
  CObject::AssertValid(param_1);
  if (*(int *)(param_1 + 8) == 0) {
    iVar2 = AfxAssertFailedLine("f:\\dd\\vctools\\vc7libs\\ship\\atlmfc\\include\\afxtempl.h",0x721)
    ;
    if (iVar2 != 0) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if ((*(int *)(param_1 + 0xc) != 0) && (*(int *)(param_1 + 4) == 0)) {
    iVar2 = AfxAssertFailedLine("f:\\dd\\vctools\\vc7libs\\ship\\atlmfc\\include\\afxtempl.h",0x722)
    ;
    if (iVar2 != 0) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  return;
}



void SerializeElements<>(CArchive *param_1,void *param_2,uint param_3)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  uint uStack_2c;
  uint uStack_28;
  uint uStack_1c;
  void *pvStack_18;
  uint uStack_10;
  void *pvStack_c;
  
  if ((param_3 == 0) || (param_2 != (void *)0x0)) {
    bVar2 = true;
  }
  else {
    bVar2 = false;
  }
  if ((!bVar2) &&
     (iVar3 = AfxAssertFailedLine("f:\\dd\\vctools\\vc7libs\\ship\\atlmfc\\include\\afxtempl.h",0x44
                                 ), iVar3 != 0)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (!bVar2) {
    thunk_FUN_007113e0();
  }
  if (((param_3 != 0) && (iVar3 = AfxIsValidAddress(param_2,param_3 << 2,1), iVar3 == 0)) &&
     (iVar3 = AfxAssertFailedLine("f:\\dd\\vctools\\vc7libs\\ship\\atlmfc\\include\\afxtempl.h",0x46
                                 ), iVar3 != 0)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  iVar3 = CArchive::IsStoring(param_1);
  if (iVar3 == 0) {
    pvStack_18 = param_2;
    for (uStack_1c = param_3; uStack_1c != 0; uStack_1c = uStack_1c - uStack_2c) {
      if (uStack_1c < 0x1fffffff) {
        uStack_2c = uStack_1c;
      }
      else {
        uStack_2c = 0x1fffffff;
      }
      CArchive::EnsureRead(param_1,pvStack_18,uStack_2c << 2);
      pvStack_18 = (void *)((int)pvStack_18 + uStack_2c * 4);
    }
  }
  else {
    pvStack_c = param_2;
    for (uStack_10 = param_3; uStack_10 != 0; uStack_10 = uStack_10 - uStack_28) {
      if (uStack_10 < 0x1fffffff) {
        uStack_28 = uStack_10;
      }
      else {
        uStack_28 = 0x1fffffff;
      }
      CArchive::Write(param_1,pvStack_c,uStack_28 << 2);
      pvStack_c = (void *)((int)pvStack_c + uStack_28 * 4);
    }
  }
  return;
}



void __thiscall CMemFile::SetLength(CMemFile *this,__uint64 param_1)

{
  AfxAssertValidObject
            ((CObject *)this,"f:\\dd\\vctools\\vc7libs\\ship\\atlmfc\\src\\mfc\\filemem.cpp",0xaa);
  if (param_1._4_4_ != 0) {
    AfxThrowUserException();
  }
  if ((param_1._4_4_ != 0) || (*(uint *)(this + 0x1c) < (uint)param_1)) {
    (**(code **)(*(int *)this + 0x70))((uint)param_1);
  }
  if ((param_1._4_4_ == 0) && ((uint)param_1 < *(uint *)(this + 0x18))) {
    *(uint *)(this + 0x18) = (uint)param_1;
  }
  *(uint *)(this + 0x20) = (uint)param_1;
  AfxAssertValidObject
            ((CObject *)this,"f:\\dd\\vctools\\vc7libs\\ship\\atlmfc\\src\\mfc\\filemem.cpp",0xb7);
  return;
}



undefined4 * __fastcall thunk_FUN_00a54990(undefined4 *param_1)

{
  *param_1 = CMFCRibbonInfo::XRibbonInfoParserCollection::vftable;
  return param_1;
}



bool ___(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = ___(param_1,param_2);
  return iVar1 == 0;
}



void __thiscall CDockBar::DockControlBar(CDockBar *this,CControlBar *param_1,tagRECT *param_2)

{
  code *pcVar1;
  int iVar2;
  ulong uVar3;
  int iVar4;
  CWnd *pCVar5;
  uint uVar6;
  int iStack_154;
  undefined4 uStack_14c;
  undefined4 uStack_148;
  tagRECT tStack_144;
  char acStack_134 [268];
  int iStack_28;
  tagPOINT atStack_24 [2];
  uint uStack_14;
  int iStack_10;
  ulong uStack_c;
  CFrameWnd *pCStack_8;
  
  uStack_14 = DAT_00c4a700 ^ (uint)&stack0xfffffffc;
  AfxAssertValidObject
            ((CObject *)this,"f:\\dd\\vctools\\vc7libs\\ship\\atlmfc\\src\\mfc\\bardock.cpp",0x6b);
  if (this == (CDockBar *)0x0) {
    thunk_FUN_007113e0();
  }
  AfxAssertValidObject
            ((CObject *)param_1,"f:\\dd\\vctools\\vc7libs\\ship\\atlmfc\\src\\mfc\\bardock.cpp",0x6c
            );
  if (param_1 == (CControlBar *)0x0) {
    thunk_FUN_007113e0();
  }
  iVar2 = CObject::IsKindOf((CObject *)param_1,(CRuntimeClass *)&PTR_s_CControlBar_00b98a90);
  if ((iVar2 == 0) &&
     (iVar2 = AfxAssertFailedLine("f:\\dd\\vctools\\vc7libs\\ship\\atlmfc\\src\\mfc\\bardock.cpp",
                                  0x6d), iVar2 != 0)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  thunk_FUN_00b31aa0();
  CWnd::ClientToScreen((CWnd *)param_1,atStack_24);
  if ((*(CDockBar **)(param_1 + 0xb0) != this) ||
     ((param_2 != (tagRECT *)0x0 &&
      (iVar2 = CRect::operator==((CRect *)atStack_24,param_2), iVar2 == 0)))) {
    if ((*(int *)(this + 0xb8) != 0) && ((*(uint *)(param_1 + 0xa8) & 0x40) != 0)) {
      *(uint *)(this + 0xa4) = *(uint *)(this + 0xa4) | 0x40;
    }
    *(uint *)(this + 0xa4) = *(uint *)(this + 0xa4) & 0xfffffff9;
    *(uint *)(this + 0xa4) = *(uint *)(param_1 + 0xa4) & 6 | *(uint *)(this + 0xa4);
    if ((*(uint *)(this + 0xa4) & 0x40) == 0) {
      CWnd::GetWindowTextA((CWnd *)param_1,acStack_134,0x104);
      AfxSetWindowText(*(HWND__ **)(this + 0x20),acStack_134);
    }
    uVar3 = CControlBar::GetBarStyle(param_1);
    uStack_c = *(uint *)(this + 0xa4) & 0xf000 | 0xf00;
    if (*(int *)(this + 0xb8) == 0) {
      uStack_c = uStack_c | uVar3 & 0xffff0ffe;
    }
    else {
      uStack_c = uStack_c | uVar3 & 0xffff0fff | 1;
    }
    CControlBar::SetBarStyle(param_1,uStack_c);
    iStack_10 = 0;
    if ((*(CDockBar **)(param_1 + 0xb0) != this) &&
       (iVar2 = CWnd::IsWindowVisible((CWnd *)param_1), iVar2 != 0)) {
      CWnd::SetWindowPos((CWnd *)param_1,(CWnd *)0x0,0,0,0,0,0x97);
      iStack_10 = 1;
    }
    iStack_28 = -1;
    if (param_2 == (tagRECT *)0x0) {
      CPtrArray::Add((CPtrArray *)(this + 0xbc),param_1);
      CPtrArray::Add((CPtrArray *)(this + 0xbc),(void *)0x0);
      CWnd::SetWindowPos((CWnd *)param_1,(CWnd *)0x0,-DAT_00c55dc8,-DAT_00c55dcc,0,0,0x115);
    }
    else {
      CRect::CRect((CRect *)&tStack_144,param_2);
      CWnd::ScreenToClient((CWnd *)this,&tStack_144);
      iVar2 = thunk_FUN_00b31c60();
      iVar2 = iVar2 / 2 + tStack_144.top;
      iVar4 = thunk_FUN_00b31c40(iVar2);
      thunk_FUN_00b31510(iVar4 / 2 + tStack_144.left,iVar2);
      iStack_28 = Insert(this,param_1,tStack_144.left,tStack_144.top,tStack_144.right,
                         tStack_144.bottom,uStack_14c,uStack_148);
      uVar6 = 0x114;
      iVar2 = thunk_FUN_00b31c60();
      iVar4 = thunk_FUN_00b31c40();
      CWnd::SetWindowPos((CWnd *)param_1,(CWnd *)0x0,tStack_144.left,tStack_144.top,iVar4,iVar2,
                         uVar6);
    }
    pCVar5 = CWnd::SetCapture((CWnd *)param_1);
    if (pCVar5 != (CWnd *)this) {
      CWnd::SetParent((CWnd *)param_1,(CWnd *)this);
    }
    if (*(CDockBar **)(param_1 + 0xb0) == this) {
      RemoveControlBar(*(CDockBar **)(param_1 + 0xb0),param_1,iStack_28,0);
    }
    else if (*(int *)(param_1 + 0xb0) != 0) {
      if ((*(int *)(this + 0xb8) == 0) || (*(int *)(*(int *)(param_1 + 0xb0) + 0xb8) != 0)) {
        iStack_154 = 0;
      }
      else {
        iStack_154 = 1;
      }
      RemoveControlBar(*(CDockBar **)(param_1 + 0xb0),param_1,-1,iStack_154);
    }
    *(CDockBar **)(param_1 + 0xb0) = this;
    if (iStack_10 != 0) {
      iVar2 = CWnd::IsWindowVisible((CWnd *)param_1);
      if ((iVar2 != 0) &&
         (iVar2 = AfxAssertFailedLine("f:\\dd\\vctools\\vc7libs\\ship\\atlmfc\\src\\mfc\\bardock.cpp"
                                      ,0xbd), iVar2 != 0)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      CWnd::SetWindowPos((CWnd *)param_1,(CWnd *)0x0,0,0,0,0,0x57);
    }
    RemovePlaceHolder(this,param_1);
    pCStack_8 = CControlBar::GetDockingFrame((CControlBar *)this);
    CFrameWnd::DelayRecalcLayout(pCStack_8,1);
  }
  __security_check_cookie(uStack_14 ^ (uint)&stack0xfffffffc);
  return;
}



void thunk_FUN_006b88e0(void)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 auStack_d0 [51];
  
  puVar2 = auStack_d0;
  for (iVar1 = 0x33; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0xcccccccc;
    puVar2 = puVar2 + 1;
  }
  return;
}



bool __cdecl ATL::operator>(CStringT<> *param_1,CStringT<> *param_2)

{
  char *pcVar1;
  int iVar2;
  
  pcVar1 = (char *)thunk_FUN_006bf040();
  iVar2 = CStringT<>::Compare(param_1,pcVar1);
  return 0 < iVar2;
}



int __thiscall CMFCToolBar::GetColumnWidth(CMFCToolBar *this)

{
  int *piVar1;
  int iStack_18;
  int iStack_14;
  
  if (*(int *)(this + 0xb38) == 0) {
    piVar1 = (int *)GetButtonSize(this);
    iStack_18 = *piVar1;
  }
  else {
    if (DAT_00c5689c < 1) {
      iStack_14 = DAT_00c56874;
    }
    else {
      iStack_14 = DAT_00c5689c;
    }
    iStack_18 = iStack_14;
  }
  return iStack_18;
}



void __thiscall CRect__operator_(LONG *param_1,LONG *param_2,int param_3,int param_4)

{
  tagRECT tStack_18;
  uint uStack_8;
  
  uStack_8 = DAT_00c4a700 ^ (uint)&stack0xfffffffc;
  tStack_18.left = *param_1;
  tStack_18.top = param_1[1];
  tStack_18.right = param_1[2];
  tStack_18.bottom = param_1[3];
  OffsetRect(&tStack_18,param_3,param_4);
  *param_2 = tStack_18.left;
  param_2[1] = tStack_18.top;
  param_2[2] = tStack_18.right;
  param_2[3] = tStack_18.bottom;
  __security_check_cookie(uStack_8 ^ (uint)&stack0xfffffffc);
  return;
}



void __fastcall thunk_FUN_0077ceb0(CDynamicAccessor *param_1)

{
  ATL::CDynamicAccessor::Close(param_1);
  return;
}



CArchive * __thiscall CArchive::operator>><>(CArchive *this,CStringT<> *param_1)

{
  code *pcVar1;
  uint uVar2;
  void *pvVar3;
  char *pcVar4;
  undefined4 uVar5;
  int iVar6;
  CArchive *pCVar7;
  uint uVar8;
  CStringT<> aCStack_140 [4];
  CStringT<> aCStack_13c [144];
  uint uStack_ac;
  uint uStack_20;
  uint uStack_1c;
  int iStack_18;
  uint uStack_14;
  void *pvStack_10;
  undefined1 *puStack_c;
  int iStack_8;
  
  iStack_8 = 0xffffffff;
  puStack_c = &LAB_00b4e66c;
  pvStack_10 = ExceptionList;
  uVar2 = DAT_00c4a700 ^ (uint)&stack0xfffffffc;
  ExceptionList = &pvStack_10;
  uStack_20 = uVar2;
  uStack_14 = AfxReadStringLength(this,&iStack_18);
  if (iStack_18 == 1) {
    CTempBuffer<>(uStack_14);
    iStack_8 = 0;
    uVar2 = uStack_14;
    pvVar3 = (void *)FID_conflict_operator_wchar_t_();
    uStack_1c = Read(this,pvVar3,uVar2);
    if (uStack_1c != uStack_14) {
      AfxThrowArchiveException(3,(char *)0x0);
    }
    uVar2 = uStack_14;
    pcVar4 = (char *)FID_conflict_operator_wchar_t_();
    uVar5 = ATL::CStringT<>::CStringT<>(aCStack_13c,pcVar4,uVar2);
    iStack_8._0_1_ = 1;
    thunk_FUN_00712820(uVar5);
    iStack_8 = (uint)iStack_8._1_3_ << 8;
    thunk_FUN_0070f1b0();
    iStack_8 = 0xffffffff;
    ~CTempBuffer<>();
  }
  else {
    if (iStack_18 != 2) {
      iVar6 = AfxAssertFailedLine("f:\\dd\\vctools\\vc7libs\\ship\\atlmfc\\include\\afx.inl",0x39);
      if (iVar6 != 0) {
        pcVar1 = (code *)swi(3);
        pCVar7 = (CArchive *)(*pcVar1)();
        return pCVar7;
      }
    }
    CTempBuffer<>(uStack_14);
    iStack_8 = 2;
    uVar8 = uStack_14 << 1;
    pvVar3 = (void *)FID_conflict_operator_wchar_t_(uVar8,uVar2);
    uStack_ac = Read(this,pvVar3,uVar8);
    if (uStack_ac != uStack_14 * 2) {
      AfxThrowArchiveException(3,(char *)0x0);
    }
    uVar2 = uStack_14;
    pcVar4 = (char *)FID_conflict_operator_wchar_t_();
    uVar5 = ATL::CStringT<>::CStringT<>(aCStack_140,pcVar4,uVar2);
    iStack_8._0_1_ = 3;
    thunk_FUN_00712820(uVar5);
    iStack_8 = CONCAT31(iStack_8._1_3_,2);
    thunk_FUN_0070f1b0();
    iStack_8 = 0xffffffff;
    ~CTempBuffer<>();
  }
  ExceptionList = pvStack_10;
  pCVar7 = (CArchive *)__security_check_cookie(uStack_20 ^ (uint)&stack0xfffffffc);
  return pCVar7;
}



int CWnd::ModifyStyle(HWND__ *param_1,ulong param_2,ulong param_3,uint param_4)

{
  int iVar1;
  
  iVar1 = _AfxModifyStyle(param_1,-0x10,param_2,param_3,param_4);
  return iVar1;
}



CRect * __thiscall CRect::CRect(CRect *this,tagPOINT param_1,tagSIZE param_2)

{
  *(LONG *)this = param_1.x;
  *(LONG *)(this + 8) = param_1.x + param_2.cx;
  *(LONG *)(this + 4) = param_1.y;
  *(LONG *)(this + 0xc) = param_1.y + param_2.cy;
  return this;
}



long __cdecl ATL::AtlHresultFromLastError(void)

{
  DWORD x;
  HRESULT HVar1;
  
  x = GetLastError();
  HVar1 = _HRESULT_FROM_WIN32(x);
  return HVar1;
}



int __thiscall CDC::MoveTo(CDC *this,int param_1,int param_2)

{
  code *pcVar1;
  int iVar2;
  BOOL BVar3;
  int in_stack_0000000c;
  tagPOINT tStack_c;
  
  if (*(int *)(this + 4) == 0) {
    iVar2 = AfxAssertFailedLine("f:\\dd\\vctools\\vc7libs\\ship\\atlmfc\\src\\mfc\\wingdi.cpp",0x26d
                               );
    if (iVar2 != 0) {
      pcVar1 = (code *)swi(3);
      iVar2 = (*pcVar1)();
      return iVar2;
    }
  }
  CPoint::CPoint((CPoint *)&tStack_c);
  if (*(int *)(this + 4) != *(int *)(this + 8)) {
    BVar3 = MoveToEx(*(HDC *)(this + 4),param_2,in_stack_0000000c,&tStack_c);
    if (BVar3 == 0) {
      iVar2 = AfxAssertFailedLine("f:\\dd\\vctools\\vc7libs\\ship\\atlmfc\\src\\mfc\\wingdi.cpp",
                                  0x271);
      if (iVar2 != 0) {
        pcVar1 = (code *)swi(3);
        iVar2 = (*pcVar1)();
        return iVar2;
      }
    }
  }
  if (*(int *)(this + 8) != 0) {
    BVar3 = MoveToEx(*(HDC *)(this + 8),param_2,in_stack_0000000c,&tStack_c);
    if (BVar3 == 0) {
      iVar2 = AfxAssertFailedLine("f:\\dd\\vctools\\vc7libs\\ship\\atlmfc\\src\\mfc\\wingdi.cpp",
                                  0x273);
      if (iVar2 != 0) {
        pcVar1 = (code *)swi(3);
        iVar2 = (*pcVar1)();
        return iVar2;
      }
    }
  }
  *(LONG *)param_1 = tStack_c.x;
  *(LONG *)(param_1 + 4) = tStack_c.y;
  return param_1;
}



int __cdecl CDialogTemplate::GetFont(DLGTEMPLATE *param_1,CStringT<> *param_2,ushort *param_3)

{
  code *pcVar1;
  int iVar2;
  ushort *puVar3;
  int iVar4;
  char *lpMultiByteStr;
  int cbMultiByte;
  LPCSTR lpDefaultChar;
  LPBOOL lpUsedDefaultChar;
  
  if ((param_1 == (DLGTEMPLATE *)0x0) &&
     (iVar2 = AfxAssertFailedLine("f:\\dd\\vctools\\vc7libs\\ship\\atlmfc\\src\\mfc\\dlgtempl.cpp",
                                  0x10a), iVar2 != 0)) {
    pcVar1 = (code *)swi(3);
    iVar2 = (*pcVar1)();
    return iVar2;
  }
  iVar2 = ::HasFont(param_1);
  if (iVar2 != 0) {
    puVar3 = (ushort *)GetFontSizeField(param_1);
    *param_3 = *puVar3;
    iVar4 = IsDialogEx(param_1);
    iVar4 = FontAttrSize(iVar4);
    lpUsedDefaultChar = (LPBOOL)0x0;
    lpDefaultChar = (LPCSTR)0x0;
    cbMultiByte = 0x20;
    lpMultiByteStr =
         ATL::CSimpleStringT<char,0>::GetBufferSetLength((CSimpleStringT<char,0> *)param_2,0x20);
    WideCharToMultiByte(0,0,(LPCWSTR)(iVar4 + (int)puVar3),-1,lpMultiByteStr,cbMultiByte,
                        lpDefaultChar,lpUsedDefaultChar);
    ATL::CSimpleStringT<char,0>::ReleaseBuffer((CSimpleStringT<char,0> *)param_2,-1);
  }
  return (uint)(iVar2 != 0);
}



IXMLDOMDocument ** __thiscall ATL::CXMLNode<>::operator_struct_IXMLDOMDocument__(CXMLNode<> *this)

{
  IXMLDOMDocument **ppIVar1;
  
  ppIVar1 = (IXMLDOMDocument **)FID_conflict_operator_(this);
  return ppIVar1;
}



BOOL FID_conflict_WinHelpW(HWND hWndMain,LPCWSTR lpszHelp,UINT uCommand,ULONG_PTR dwData)

{
  CWnd *pCVar1;
  BOOL BVar2;
  int extraout_var;
  int lParam;
  
  pCVar1 = AfxGetMainWnd();
  lParam = extraout_var;
  AfxAssertValidObject
            ((CObject *)pCVar1,"f:\\dd\\vctools\\vc7libs\\ship\\atlmfc\\src\\mfc\\appcore.cpp",0x34a
            );
  if (pCVar1 == (CWnd *)0x0) {
    thunk_FUN_007113e0();
  }
  *(undefined4 *)(lParam + 0x60) = 0;
  FID_conflict_PostMessageW((HWND)0x36a,0,0,lParam);
  BVar2 = (**(code **)(*(int *)pCVar1 + 0x84))(hWndMain,lpszHelp);
  return BVar2;
}



long CDocObjectServer::XOleObject::SetHostNames(wchar_t *param_1,wchar_t *param_2)

{
  long lVar1;
  undefined4 in_stack_0000000c;
  AFX_MAINTAIN_STATE2 aAStack_c [8];
  
  thunk_FUN_006c4460();
  AFX_MAINTAIN_STATE2::AFX_MAINTAIN_STATE2(aAStack_c,*(AFX_MODULE_STATE **)(param_1 + -0xc));
  AfxAssertValidObject
            ((CObject *)(param_1 + -0x1a),
             "f:\\dd\\vctools\\vc7libs\\ship\\atlmfc\\src\\mfc\\oledocob.cpp",0x2d1);
  lVar1 = (**(code **)(*(int *)(*(int *)(param_1 + -8) + 0x164) + 0x14))
                    (*(int *)(param_1 + -8) + 0x164,param_2,in_stack_0000000c);
  AFX_MAINTAIN_STATE2::~AFX_MAINTAIN_STATE2(aAStack_c);
  return lVar1;
}



void __thiscall CPropertyPage::OnReset(CPropertyPage *this)

{
  AfxAssertValidObject
            ((CObject *)this,"f:\\dd\\vctools\\vc7libs\\ship\\atlmfc\\src\\mfc\\dlgprop.cpp",0x157);
  (**(code **)(*(int *)this + 0x188))();
  return;
}



int AfxExtractSubString(CStringT<> *param_1,char *param_2,int param_3,char param_4)

{
  code *pcVar1;
  int iVar2;
  char *pcVar3;
  uint uVar4;
  uint uStack_10;
  
  if (param_2 == (char *)0x0) {
    iVar2 = 0;
  }
  else {
    while (param_3 != 0) {
      iVar2 = __tcschr(param_2,(int)param_4);
      if (iVar2 == 0) {
        thunk_FUN_006c03f0();
        return 0;
      }
      param_2 = (char *)(iVar2 + 1);
      param_3 = param_3 + -1;
    }
    iVar2 = __tcschr(param_2,(int)param_4);
    if (iVar2 == 0) {
      uStack_10 = lstrlenA(param_2);
    }
    else {
      uStack_10 = iVar2 - (int)param_2;
    }
    if (((int)uStack_10 < 0) &&
       (iVar2 = AfxAssertFailedLine("f:\\dd\\vctools\\vc7libs\\ship\\atlmfc\\src\\mfc\\winstr.cpp",
                                    0x5d), iVar2 != 0)) {
      pcVar1 = (code *)swi(3);
      iVar2 = (*pcVar1)();
      return iVar2;
    }
    uVar4 = uStack_10;
    pcVar3 = ATL::CSimpleStringT<char,0>::GetBufferSetLength
                       ((CSimpleStringT<char,0> *)param_1,uStack_10);
    ATL::Checked::memmove_s(pcVar3,uStack_10,param_2,uVar4);
    ATL::CSimpleStringT<char,0>::ReleaseBuffer((CSimpleStringT<char,0> *)param_1,-1);
    iVar2 = 1;
  }
  return iVar2;
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



CMFCPopupMenu * __thiscall CMFCColorMenuButton::CreatePopupMenu(CMFCColorMenuButton *this)

{
  uint uVar1;
  CFrameWnd *this_00;
  void *pvVar2;
  CMFCPopupMenu *pCStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  CList<> aCStack_2c [28];
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_00b773ac;
  pvStack_10 = ExceptionList;
  uVar1 = DAT_00c4a700 ^ (uint)&stack0xfffffffc;
  ExceptionList = &pvStack_10;
  CList<>::CList<>(aCStack_2c,10);
  uStack_8 = 0;
  if ((*(int *)(this + 0x120) != 0) && (*(int *)(this + 0x6c) != 0)) {
    this_00 = AFXGetTopLevelFrame(*(CWnd **)(this + 0x6c));
    AfxAssertValidObject
              ((CObject *)this_00,
               "f:\\dd\\vctools\\vc7libs\\ship\\atlmfc\\src\\mfc\\afxcolormenubutton.cpp",0x19f);
    CWnd::SendMessageA((CWnd *)this_00,DAT_00c59bf0,*(uint *)(this + 0x20),(long)aCStack_2c);
  }
  pvVar2 = CObject::operator_new
                     (0x1eb8,
                      "f:\\dd\\vctools\\vc7libs\\ship\\atlmfc\\src\\mfc\\afxcolormenubutton.cpp",
                      0x1a5);
  uStack_8 = CONCAT31(uStack_8._1_3_,1);
  if (pvVar2 == (void *)0x0) {
    pCStack_50 = (CMFCPopupMenu *)0x0;
  }
  else {
    if (*(int *)(this + 0x120) == 0) {
      uStack_44 = 0;
    }
    else {
      uStack_44 = thunk_FUN_006bf040(uVar1);
    }
    if (*(int *)(this + 0x11c) == 0) {
      uStack_48 = 0;
    }
    else {
      uStack_48 = thunk_FUN_006bf040(uVar1);
    }
    if (*(int *)(this + 0x118) == 0) {
      uStack_4c = 0;
    }
    else {
      uStack_4c = thunk_FUN_006bf040();
    }
    pCStack_50 = (CMFCPopupMenu *)
                 CMFCColorPopupMenu(this + 0xf0,*(undefined4 *)(this + 0xe8),uStack_4c,uStack_48,
                                    uStack_44,aCStack_2c,*(undefined4 *)(this + 0x10c),
                                    *(undefined4 *)(this + 0x114),*(undefined4 *)(this + 0x110),
                                    *(undefined4 *)(this + 0xec),*(undefined4 *)(this + 0x20),
                                    *(undefined4 *)(this + 0x130));
  }
  uStack_8 = 0xffffffff;
  CList<>::~CList<>(aCStack_2c);
  ExceptionList = pvStack_10;
  return pCStack_50;
}



int __thiscall COleServerItem::OnSetExtent(COleServerItem *this,tagDVASPECT param_1,CSize *param_2)

{
  undefined4 uVar1;
  
  AfxAssertValidObject
            ((CObject *)this,"f:\\dd\\vctools\\vc7libs\\ship\\atlmfc\\src\\mfc\\olesvr2.cpp",0xca);
  if (param_1 == 1) {
    uVar1 = *(undefined4 *)(param_2 + 4);
    *(undefined4 *)(this + 0x24) = *(undefined4 *)param_2;
    *(undefined4 *)(this + 0x28) = uVar1;
  }
  return (uint)(param_1 == 1);
}



CWnd * __thiscall CMFCPropertySheet::InitNavigationControl(CMFCPropertySheet *this)

{
  code *pcVar1;
  undefined4 uVar2;
  _IMAGELIST *p_Var3;
  int iVar4;
  CWnd *pCVar5;
  int iVar6;
  CMFCPropertySheetCategoryInfo **ppCVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  int iStack_98;
  undefined4 auStack_94 [5];
  int iStack_80;
  int iStack_78;
  tagRECT tStack_74;
  int iStack_64;
  int iStack_60;
  undefined4 uStack_5c;
  CRect aCStack_58 [16];
  int iStack_48;
  __POSITION *p_Stack_44;
  undefined4 uStack_40;
  tagRECT tStack_3c;
  int iStack_2c;
  undefined4 uStack_28;
  CObject *pCStack_24;
  undefined4 uStack_20;
  CTabCtrl *pCStack_1c;
  CRect aCStack_18 [16];
  uint uStack_8;
  
  uStack_8 = DAT_00c4a700 ^ (uint)&stack0xfffffffc;
  AfxAssertValidObject
            ((CObject *)this,
             "f:\\dd\\vctools\\vc7libs\\ship\\atlmfc\\src\\mfc\\afxpropertysheet.cpp",0x2e0);
  pCStack_1c = CPropertySheet::GetTabControl((CPropertySheet *)this);
  AfxAssertValidObject
            ((CObject *)pCStack_1c,
             "f:\\dd\\vctools\\vc7libs\\ship\\atlmfc\\src\\mfc\\afxpropertysheet.cpp",0x2e3);
  if (*(int *)(this + 0xcc) == 1) {
    uStack_28 = 0x50001000;
    uStack_20 = 0;
    uVar11 = 0;
    uVar10 = 0;
    uVar9 = 0x50001000;
    uVar8 = 0xe800;
    uVar2 = CRect::CRect(aCStack_18,0,0,100,100);
    (**(code **)(*(int *)(this + 0x4604) + 0x400))
              (&DAT_00b899f7,this,uVar2,uVar8,uVar9,uVar10,uVar11);
    pCStack_24 = (CObject *)(**(code **)(*(int *)(this + 0x4604) + 0x3ac))();
    AfxAssertValidObject
              (pCStack_24,"f:\\dd\\vctools\\vc7libs\\ship\\atlmfc\\src\\mfc\\afxpropertysheet.cpp",
               0x2ed);
    (**(code **)(*(int *)pCStack_24 + 0x2a8))(1);
    (**(code **)(*(int *)(this + 0xd0) + 0x43c))(this + 0x4604,0x50402808,1,0);
    *(CMFCPropertySheet **)(this + 0x1d78) = this;
    (**(code **)(*(int *)(this + 0x4604) + 0x3c0))(this + 0xd0,1,1,1);
    CMFCToolBar::EnableTextLabels((CMFCToolBar *)(this + 0xd0),1);
    CWnd::SetOwner((CWnd *)(this + 0xd0),(CWnd *)this);
    p_Var3 = CImageList::GetSafeHandle((CImageList *)(this + 0x4a10));
    if ((p_Var3 == (_IMAGELIST *)0x0) &&
       (iVar4 = AfxAssertFailedLine("f:\\dd\\vctools\\vc7libs\\ship\\atlmfc\\src\\mfc\\afxpropertysheet.cpp"
                                    ,0x2f8), iVar4 != 0)) {
      pcVar1 = (code *)swi(3);
      pCVar5 = (CWnd *)(*pcVar1)();
      return pCVar5;
    }
    iVar4 = CImageList::GetImageCount((CImageList *)(this + 0x4a10));
    iVar6 = CTabCtrl::GetItemCount(pCStack_1c);
    if ((iVar4 < iVar6) &&
       (iVar4 = AfxAssertFailedLine("f:\\dd\\vctools\\vc7libs\\ship\\atlmfc\\src\\mfc\\afxpropertysheet.cpp"
                                    ,0x2f9), iVar4 != 0)) {
      pcVar1 = (code *)swi(3);
      pCVar5 = (CWnd *)(*pcVar1)();
      return pCVar5;
    }
    iStack_2c = 0;
    while (iVar4 = CTabCtrl::GetItemCount(pCStack_1c), iStack_2c < iVar4) {
      InternalAddPage(this,iStack_2c);
      iStack_2c = iStack_2c + 1;
    }
  }
  else if (*(int *)(this + 0xcc) == 2) {
    CRect::CRect((CRect *)&tStack_3c,0,0,0,0);
    uStack_40 = 0x50000000;
    CTreeCtrl::Create((CTreeCtrl *)(this + 0x499c),0x50000000,&tStack_3c,(CWnd *)this,0x65);
    CWnd::ModifyStyleEx((CWnd *)(this + 0x499c),0,0x200,0);
    p_Var3 = CImageList::GetSafeHandle((CImageList *)(this + 0x4a10));
    if (p_Var3 != (_IMAGELIST *)0x0) {
      CTreeCtrl::SetImageList((CTreeCtrl *)(this + 0x499c),(CImageList *)(this + 0x4a10),0);
      CTreeCtrl::SetImageList((CTreeCtrl *)(this + 0x499c),(CImageList *)(this + 0x4a10),2);
    }
    p_Stack_44 = (__POSITION *)thunk_FUN_00a9dc40();
    while (p_Stack_44 != (__POSITION *)0x0) {
      ppCVar7 = CList<>::GetNext((CList<> *)(this + 0x4a2c),&p_Stack_44);
      AddCategoryToTree(this,*ppCVar7);
    }
    iStack_48 = 0;
    while (iVar4 = CTabCtrl::GetItemCount(pCStack_1c), iStack_48 < iVar4) {
      InternalAddPage(this,iStack_48);
      iStack_48 = iStack_48 + 1;
    }
  }
  else if (*(int *)(this + 0xcc) == 4) {
    CRect::CRect(aCStack_58,0,0,0,0);
    uStack_5c = 0x50000151;
    (**(code **)(*(int *)(this + 0x4584) + 0x168))(0x50000151,aCStack_58,this,0x67);
    *(CMFCPropertySheet **)(this + 0x4600) = this;
    CWnd::ModifyStyleEx((CWnd *)(this + 0x4584),0,0x200,0);
    iStack_60 = 0;
    while (iVar4 = CTabCtrl::GetItemCount(pCStack_1c), iStack_60 < iVar4) {
      InternalAddPage(this,iStack_60);
      iStack_60 = iStack_60 + 1;
    }
  }
  else if (*(int *)(this + 0xcc) == 3) {
    iStack_64 = CPropertySheet::GetActiveIndex((CPropertySheet *)this);
    CRect::CRect((CRect *)&tStack_74,0,0,0,0);
    CMFCTabCtrl::Create((CMFCTabCtrl *)(this + 0x1d7c),4,&tStack_74,(CWnd *)this,0x66,1,0);
    *(CMFCPropertySheet **)(this + 0x4580) = this;
    CMFCBaseTabCtrl::EnableTabSwap((CMFCBaseTabCtrl *)(this + 0x1d7c),0);
    CMFCBaseTabCtrl::AutoDestroyWindow((CMFCBaseTabCtrl *)(this + 0x1d7c),0);
    p_Var3 = CImageList::GetSafeHandle((CImageList *)(this + 0x4a10));
    if (p_Var3 != (_IMAGELIST *)0x0) {
      iVar4 = CImageList::GetImageCount((CImageList *)(this + 0x4a10));
      iVar6 = CTabCtrl::GetItemCount(pCStack_1c);
      if ((iVar4 < iVar6) &&
         (iVar4 = AfxAssertFailedLine("f:\\dd\\vctools\\vc7libs\\ship\\atlmfc\\src\\mfc\\afxpropertysheet.cpp"
                                      ,0x341), iVar4 != 0)) {
        pcVar1 = (code *)swi(3);
        pCVar5 = (CWnd *)(*pcVar1)();
        return pCVar5;
      }
      p_Var3 = CImageList::GetSafeHandle((CImageList *)(this + 0x4a10));
      (**(code **)(*(int *)(this + 0x1d7c) + 0x170))(p_Var3);
    }
    iStack_78 = 0;
    while (iVar4 = CTabCtrl::GetItemCount(pCStack_1c), iStack_78 < iVar4) {
      InternalAddPage(this,iStack_78);
      iStack_78 = iStack_78 + 1;
    }
    CPropertySheet::SetActivePage((CPropertySheet *)this,iStack_64);
  }
  else if ((*(int *)(this + 0xcc) == 0) &&
          (p_Var3 = CImageList::GetSafeHandle((CImageList *)(this + 0x4a10)),
          p_Var3 != (_IMAGELIST *)0x0)) {
    iVar4 = CImageList::GetImageCount((CImageList *)(this + 0x4a10));
    iVar6 = CTabCtrl::GetItemCount(pCStack_1c);
    if ((iVar4 < iVar6) &&
       (iVar4 = AfxAssertFailedLine("f:\\dd\\vctools\\vc7libs\\ship\\atlmfc\\src\\mfc\\afxpropertysheet.cpp"
                                    ,0x352), iVar4 != 0)) {
      pcVar1 = (code *)swi(3);
      pCVar5 = (CWnd *)(*pcVar1)();
      return pCVar5;
    }
    CTabCtrl::SetImageList(pCStack_1c,(CImageList *)(this + 0x4a10));
    _memset(auStack_94,0,0x1c);
    auStack_94[0] = 2;
    for (iStack_98 = 0; iVar4 = CTabCtrl::GetItemCount(pCStack_1c), iStack_98 < iVar4;
        iStack_98 = iStack_98 + 1) {
      iStack_80 = iStack_98;
      CTabCtrl::SetItem(pCStack_1c,iStack_98,(tagTCITEMA *)auStack_94);
    }
  }
  pCVar5 = (CWnd *)__security_check_cookie(uStack_8 ^ (uint)&stack0xfffffffc);
  return pCVar5;
}



void __thiscall CPreviewView::OnDisplayPageNumber(CPreviewView *this,uint param_1,uint param_2)

{
  code *pcVar1;
  int iVar2;
  char *pcVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  uint uVar6;
  char cVar7;
  int iStack_84;
  char acStack_80 [84];
  uint uStack_2c;
  CObject *pCStack_28;
  int iStack_24;
  int iStack_20;
  CWinThread *pCStack_1c;
  CStringT<> aCStack_18 [4];
  uint uStack_14;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_00b798a8;
  pvStack_10 = ExceptionList;
  uStack_2c = DAT_00c4a700 ^ (uint)&stack0xfffffffc;
  ExceptionList = &pvStack_10;
  iStack_24 = (param_1 - 1) + param_2;
  pCStack_1c = AfxGetThread();
  if (pCStack_1c == (CWinThread *)0x0) {
    iVar2 = AfxAssertFailedLine("f:\\dd\\vctools\\vc7libs\\ship\\atlmfc\\src\\mfc\\viewprev.cpp",
                                0x421);
    if (iVar2 != 0) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)(this);
      return;
    }
  }
  pCStack_28 = *(CObject **)(pCStack_1c + 0x20);
  AfxAssertValidObject
            (pCStack_28,"f:\\dd\\vctools\\vc7libs\\ship\\atlmfc\\src\\mfc\\viewprev.cpp",0x423);
  iVar2 = CObject::IsKindOf(pCStack_28,(CRuntimeClass *)&PTR_s_CFrameWnd_00b98a48);
  if (iVar2 == 0) {
    iVar2 = AfxAssertFailedLine("f:\\dd\\vctools\\vc7libs\\ship\\atlmfc\\src\\mfc\\viewprev.cpp",
                                0x424);
    if (iVar2 != 0) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  uStack_14 = (uint)(param_2 != 1);
  thunk_FUN_006bef10();
  uStack_8 = 0;
  cVar7 = '\n';
  uVar6 = uStack_14;
  pcVar3 = (char *)thunk_FUN_006bf040();
  iStack_20 = AfxExtractSubString(aCStack_18,pcVar3,uVar6,cVar7);
  if (iStack_20 != 0) {
    if (uStack_14 == 0) {
      pcVar3 = (char *)thunk_FUN_006bf040(param_1);
      iStack_84 = _sprintf_s(acStack_80,0x50,pcVar3);
    }
    else {
      pcVar3 = (char *)thunk_FUN_006bf040(param_1,iStack_24);
      iStack_84 = _sprintf_s(acStack_80,0x50,pcVar3);
    }
    if (iStack_84 < 1) {
      iStack_20 = 0;
    }
    else {
      CWnd::SendMessageA((CWnd *)pCStack_28,0x362,0,(long)acStack_80);
    }
  }
  if (iStack_20 == 0) {
    uVar4 = thunk_FUN_006bf6d0(0,"Malformed Page Description string. Could not get string %d.\n",
                               uStack_14);
    uVar5 = thunk_FUN_006bf580("f:\\dd\\vctools\\vc7libs\\ship\\atlmfc\\src\\mfc\\viewprev.cpp",
                               0x445);
    thunk_FUN_006bf5d0(uVar5,uVar4);
  }
  uStack_8 = 0xffffffff;
  thunk_FUN_006bef70();
  ExceptionList = pvStack_10;
  __security_check_cookie(uStack_2c ^ (uint)&stack0xfffffffc);
  return;
}



void __thiscall CMFCRibbonSlider::OnAfterChangeRect(CMFCRibbonSlider *this,CDC *param_1)

{
  int iVar1;
  double dVar2;
  int iStack_8;
  
  AfxAssertValidObject
            ((CObject *)this,"f:\\dd\\vctools\\vc7libs\\ship\\atlmfc\\src\\mfc\\afxribbonslider.cpp"
             ,0xa9);
  CMFCRibbonBaseElement::OnAfterChangeRect((CMFCRibbonBaseElement *)this,param_1);
  thunk_FUN_00b31f60();
  thunk_FUN_00b31f60();
  thunk_FUN_00b31f60();
  *(undefined4 *)((CMFCRibbonBaseElement *)this + 0xec) =
       *(undefined4 *)((CMFCRibbonBaseElement *)this + 0x18);
  *(undefined4 *)((CMFCRibbonBaseElement *)this + 0xf0) =
       *(undefined4 *)((CMFCRibbonBaseElement *)this + 0x1c);
  *(undefined4 *)((CMFCRibbonBaseElement *)this + 0xf4) =
       *(undefined4 *)((CMFCRibbonBaseElement *)this + 0x20);
  *(undefined4 *)((CMFCRibbonBaseElement *)this + 0xf8) =
       *(undefined4 *)((CMFCRibbonBaseElement *)this + 0x24);
  iVar1 = thunk_FUN_00b31e30();
  if (iVar1 == 0) {
    if (*(int *)((CMFCRibbonBaseElement *)this + 200) != 0) {
      *(undefined4 *)((CMFCRibbonBaseElement *)this + 0xcc) =
           *(undefined4 *)((CMFCRibbonBaseElement *)this + 0xec);
      *(undefined4 *)((CMFCRibbonBaseElement *)this + 0xd0) =
           *(undefined4 *)((CMFCRibbonBaseElement *)this + 0xf0);
      *(undefined4 *)((CMFCRibbonBaseElement *)this + 0xd4) =
           *(undefined4 *)((CMFCRibbonBaseElement *)this + 0xf4);
      *(undefined4 *)((CMFCRibbonBaseElement *)this + 0xd8) =
           *(undefined4 *)((CMFCRibbonBaseElement *)this + 0xf8);
      iVar1 = thunk_FUN_00b31c60();
      *(int *)((CMFCRibbonBaseElement *)this + 0xd4) =
           iVar1 + *(int *)((CMFCRibbonBaseElement *)this + 0xcc);
      *(undefined4 *)((CMFCRibbonBaseElement *)this + 0xdc) =
           *(undefined4 *)((CMFCRibbonBaseElement *)this + 0xec);
      *(undefined4 *)((CMFCRibbonBaseElement *)this + 0xe0) =
           *(undefined4 *)((CMFCRibbonBaseElement *)this + 0xf0);
      *(undefined4 *)((CMFCRibbonBaseElement *)this + 0xe4) =
           *(undefined4 *)((CMFCRibbonBaseElement *)this + 0xf4);
      *(undefined4 *)((CMFCRibbonBaseElement *)this + 0xe8) =
           *(undefined4 *)((CMFCRibbonBaseElement *)this + 0xf8);
      iVar1 = thunk_FUN_00b31c60();
      *(int *)((CMFCRibbonBaseElement *)this + 0xdc) =
           *(int *)((CMFCRibbonBaseElement *)this + 0xe4) - iVar1;
      *(undefined4 *)((CMFCRibbonBaseElement *)this + 0xec) =
           *(undefined4 *)((CMFCRibbonBaseElement *)this + 0xd4);
      *(undefined4 *)((CMFCRibbonBaseElement *)this + 0xf4) =
           *(undefined4 *)((CMFCRibbonBaseElement *)this + 0xdc);
    }
    iStack_8 = 10;
    dVar2 = AFX_GLOBAL_DATA::GetRibbonImageScale((AFX_GLOBAL_DATA *)&DAT_00c55790);
    if (1.0 < dVar2 != NAN(dVar2)) {
      iStack_8 = thunk_FUN_00ad7db0(this,(dVar2 - 1.0) / 2.0 + 1.0);
    }
    CRect::DeflateRect((CRect *)((CMFCRibbonBaseElement *)this + 0xec),iStack_8 / 2,0);
    SetThumbRect(this);
  }
  return;
}



CMFCOutlookBarScrollButton * __thiscall
CMFCOutlookBarScrollButton::CMFCOutlookBarScrollButton(CMFCOutlookBarScrollButton *this)

{
  CMFCButton::CMFCButton((CMFCButton *)this);
  *(undefined ***)this = vftable;
  return this;
}



int __thiscall CPaneContainer::IsLeftPartEmpty(CPaneContainer *this,int param_1)

{
  int iVar1;
  
  AfxAssertValidObject
            ((CObject *)this,
             "f:\\dd\\vctools\\vc7libs\\ship\\atlmfc\\src\\mfc\\afxpanecontainer.cpp",0x8b2);
  if (((*(int *)(this + 4) == 0) ||
      (((param_1 != 0 && (*(int *)(this + 4) != 0)) &&
       (iVar1 = CBasePane::IsPaneVisible(*(CBasePane **)(this + 4)), iVar1 == 0)))) &&
     (((*(int *)(this + 0x10) == 0 ||
       (iVar1 = IsEmpty(*(CPaneContainer **)(this + 0x10)), iVar1 != 0)) ||
      ((param_1 != 0 &&
       ((*(int *)(this + 0x10) != 0 &&
        (iVar1 = IsVisible(*(CPaneContainer **)(this + 0x10)), iVar1 == 0)))))))) {
    return 1;
  }
  return 0;
}



int __thiscall ATL::CSimpleArray<>::RemoveAt(CSimpleArray<> *this,int param_1)

{
  code *pcVar1;
  int iVar2;
  
  if ((param_1 < 0) || (*(int *)(this + 4) <= param_1)) {
    iVar2 = FID_conflict___CrtDbgReport
                      (2,L"f:\\dd\\vctools\\vc7libs\\ship\\atlmfc\\include\\atlsimpcoll.h",0xc5,0,
                       L"nIndex >= 0 && nIndex < m_nSize");
    if (iVar2 == 1) {
      pcVar1 = (code *)swi(3);
      iVar2 = (*pcVar1)();
      return iVar2;
    }
  }
  if ((param_1 < 0) || (*(int *)(this + 4) <= param_1)) {
    iVar2 = 0;
  }
  else {
    if (param_1 != *(int *)(this + 4) + -1) {
      Checked::memmove_s((void *)(*(int *)this + param_1 * 4),(*(int *)(this + 4) - param_1) * 4,
                         (void *)(*(int *)this + 4 + param_1 * 4),
                         (*(int *)(this + 4) - (param_1 + 1)) * 4);
    }
    *(int *)(this + 4) = *(int *)(this + 4) + -1;
    iVar2 = 1;
  }
  return iVar2;
}



DName * __cdecl UnDecorator::getDecoratedName(void)

{
  int iVar1;
  char *pcVar2;
  undefined4 uVar3;
  DName *pDVar4;
  DName *in_stack_00000004;
  DName *pDVar5;
  DName aDStack_6c [8];
  DName aDStack_64 [8];
  DName aDStack_5c [8];
  char acStack_54 [8];
  DName aDStack_4c [8];
  char acStack_44 [16];
  DName aDStack_34 [8];
  Replicator aRStack_2c [8];
  undefined1 auStack_24 [8];
  DName aDStack_1c [8];
  int iStack_14;
  int iStack_10;
  DName aDStack_c [8];
  
  iVar1 = doTypeOnly();
  if (iVar1 == 0) {
    if (*DAT_00c5afc4 == '?') {
      pcVar2 = DAT_00c5afc4 + 1;
      if ((*pcVar2 == '?') && (DAT_00c5afc4[2] == '?')) {
        DAT_00c5afc4 = pcVar2;
        getDecoratedName();
        for (; *DAT_00c5afc4 != '\0'; DAT_00c5afc4 = DAT_00c5afc4 + 1) {
        }
        thunk_FUN_00b19670(auStack_24);
      }
      else {
        DAT_00c5afc4 = pcVar2;
        getSymbolName();
        iStack_10 = DName::isUDC(aDStack_1c);
        iStack_14 = DName::isVCallThunk(aDStack_1c);
        iVar1 = DName::isValid(aDStack_1c);
        if (iVar1 == 0) {
          thunk_FUN_00b19670(aDStack_1c);
        }
        else {
          if ((*DAT_00c5afc4 != '\0') && (*DAT_00c5afc4 != '@')) {
            getScope();
            iVar1 = Replicator::isFull(aRStack_2c);
            if (iVar1 == 0) {
              if (DAT_00c5afdc == '\0') {
                pDVar5 = aDStack_5c;
                pDVar4 = (DName *)DName::operator+((DName *)aRStack_2c,acStack_54);
                uVar3 = DName::operator+(pDVar4,pDVar5);
                thunk_FUN_00b1ae80(uVar3);
              }
              else {
                DAT_00c5afdc = '\0';
                uVar3 = DName::operator+(aDStack_1c,aDStack_34);
                thunk_FUN_00b1ae80(uVar3);
                if (*DAT_00c5afc4 != '@') {
                  uVar3 = getScope();
                  thunk_FUN_00b1ae80(uVar3);
                  pDVar5 = aDStack_4c;
                  pDVar4 = (DName *)DName::operator+((DName *)aRStack_2c,acStack_44);
                  uVar3 = DName::operator+(pDVar4,pDVar5);
                  thunk_FUN_00b1ae80(uVar3);
                }
              }
            }
          }
          if (iStack_10 != 0) {
            DName::setIsUDC(aDStack_1c);
          }
          if (iStack_14 != 0) {
            DName::setIsVCallThunk(aDStack_1c);
          }
          iVar1 = Replicator::isFull((Replicator *)aDStack_1c);
          if ((iVar1 == 0) && (iVar1 = DName::isNoTE(aDStack_1c), iVar1 == 0)) {
            if ((*DAT_00c5afc4 == '\0') || (*DAT_00c5afc4 == '@')) {
              if (*DAT_00c5afc4 != '\0') {
                DAT_00c5afc4 = DAT_00c5afc4 + 1;
              }
              iVar1 = doNameOnly();
              if (((iVar1 == 0) || (iStack_10 != 0)) ||
                 (iVar1 = DName::isVCallThunk(aDStack_1c), iVar1 != 0)) {
                composeDeclaration(in_stack_00000004);
              }
              else {
                DName::DName(aDStack_64);
                composeDeclaration(aDStack_6c);
                thunk_FUN_00b19670(aDStack_1c);
              }
            }
            else {
              DName::DName(in_stack_00000004,2);
            }
          }
          else {
            thunk_FUN_00b19670(aDStack_1c);
          }
        }
      }
    }
    else if (*DAT_00c5afc4 == '\0') {
      DName::DName(in_stack_00000004,1);
    }
    else {
      DName::DName(in_stack_00000004,2);
    }
  }
  else {
    DAT_00c5afd4 = DAT_00c5afd4 & 0xffffdfff;
    getDataType(aDStack_c);
    DAT_00c5afd4 = DAT_00c5afd4 | 0x2000;
    thunk_FUN_00b19670(aDStack_c);
  }
  return in_stack_00000004;
}



void __thiscall CMFCTabCtrl::SetActiveTabBoldFont(CMFCTabCtrl *this,int param_1)

{
  int iVar1;
  
  AfxAssertValidObject
            ((CObject *)this,"f:\\dd\\vctools\\vc7libs\\ship\\atlmfc\\src\\mfc\\afxtabctrl.cpp",
             0xa8c);
  *(int *)(this + 0x23c) = param_1;
  iVar1 = thunk_FUN_006d9400();
  if (iVar1 != 0) {
    (**(code **)(*(int *)this + 0x188))();
    SynchronizeScrollBar(this,(tagSCROLLINFO *)0x0);
  }
  return;
}



int __thiscall CMFCRibbonKeyTip::Show(CMFCRibbonKeyTip *this,int param_1)

{
  code *pcVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  POINT *pPVar5;
  HMONITOR hMonitor;
  BOOL BVar6;
  HCURSOR pHVar7;
  CMFCVisualManager *pCVar8;
  bool bVar9;
  undefined4 uVar10;
  tagMONITORINFO *lpmi;
  undefined4 uVar11;
  tagMONITORINFO tStack_7c;
  CWnd *pCStack_54;
  int iStack_50;
  int iStack_4c;
  int iStack_48;
  int iStack_44;
  CFont *pCStack_40;
  CClientDC aCStack_3c [20];
  tagRECT tStack_28;
  uint uStack_18;
  uint uStack_14;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_00b75bf8;
  pvStack_10 = ExceptionList;
  uVar3 = DAT_00c4a700 ^ (uint)&stack0xfffffffc;
  ExceptionList = &pvStack_10;
  uStack_18 = uVar3;
  AfxAssertValidObject
            ((CObject *)this,"f:\\dd\\vctools\\vc7libs\\ship\\atlmfc\\src\\mfc\\afxribbonkeytip.cpp"
             ,0x54);
  AfxAssertValidObject
            (*(CObject **)(this + 0x74),
             "f:\\dd\\vctools\\vc7libs\\ship\\atlmfc\\src\\mfc\\afxribbonkeytip.cpp",0x55);
  iVar4 = thunk_FUN_006d9400(uVar3);
  if ((iVar4 == 0) || (param_1 != 0)) {
    pCStack_54 = (CWnd *)(**(code **)(**(int **)(this + 0x74) + 0x98))();
    iVar4 = thunk_FUN_006d9400(uVar3);
    if (iVar4 != 0) {
      CClientDC::CClientDC(aCStack_3c,(CWnd *)0x0);
      uStack_8 = 0;
      pCStack_40 = CDC::SelectObject((CDC *)aCStack_3c,(CFont *)&DAT_00c558a4);
      bVar9 = pCStack_40 == (CFont *)0x0;
      if ((bVar9) &&
         (iVar4 = AfxAssertFailedLine("f:\\dd\\vctools\\vc7libs\\ship\\atlmfc\\src\\mfc\\afxribbonkeytip.cpp"
                                      ,0x67), iVar4 != 0)) {
        pcVar1 = (code *)swi(3);
        iVar4 = (*pcVar1)();
        return iVar4;
      }
      if (bVar9) {
        thunk_FUN_007113e0();
      }
      (**(code **)(**(int **)(this + 0x74) + 0x140))
                (&tStack_28,aCStack_3c,*(undefined4 *)(this + 0x88));
      CDC::SelectObject((CDC *)aCStack_3c,pCStack_40);
      iVar4 = thunk_FUN_00b31e30();
      if (iVar4 == 0) {
        CWnd::ClientToScreen(pCStack_54,&tStack_28);
        thunk_FUN_00b31aa0();
        tStack_7c.cbSize = 0x28;
        pPVar5 = (POINT *)CRect::TopLeft((CRect *)&tStack_28);
        lpmi = &tStack_7c;
        hMonitor = MonitorFromPoint(*pPVar5,2);
        BVar6 = GetMonitorInfoA(hMonitor,lpmi);
        if (BVar6 == 0) {
          SystemParametersInfoA(0x30,0,&iStack_50,0);
        }
        else {
          CRect::operator=((CRect *)&iStack_50,&tStack_7c.rcWork);
        }
        if (iStack_48 < tStack_28.right) {
          CRect::OffsetRect((CRect *)&tStack_28,iStack_48 - tStack_28.right,0);
        }
        else if (tStack_28.left < iStack_50) {
          CRect::OffsetRect((CRect *)&tStack_28,iStack_50 - tStack_28.left,0);
        }
        if (iStack_44 < tStack_28.bottom) {
          CRect::OffsetRect((CRect *)&tStack_28,0,iStack_44 - tStack_28.bottom);
        }
        else if (tStack_28.top < iStack_4c) {
          CRect::OffsetRect((CRect *)&tStack_28,iStack_4c - tStack_28.top,0);
        }
        cVar2 = thunk_FUN_006b82d0();
        if (cVar2 != '\0') {
          uVar11 = 0;
          uVar10 = 0x10;
          pHVar7 = LoadCursorA((HINSTANCE)0x0,(LPCSTR)0x7f00);
          uVar10 = AfxRegisterWndClass(0x800,pHVar7,uVar10,uVar11);
          thunk_FUN_006bf0e0(uVar10);
        }
        uStack_14 = 0x88;
        iVar4 = (**(code **)(**(int **)(this + 0x74) + 0x40))();
        if (iVar4 != 0) {
          pCVar8 = CMFCVisualManager::GetInstance();
          iVar4 = (**(code **)(*(int *)pCVar8 + 0x2b0))();
          if (iVar4 != 0) {
            uStack_14 = uStack_14 | 0x80000;
          }
        }
        uVar10 = thunk_FUN_006bf040(&DAT_00b899f7,0x80000000,&tStack_28,0,0,0);
        iVar4 = (**(code **)(*(int *)this + 0x60))(uStack_14,uVar10);
        if (iVar4 == 0) {
          uStack_8 = 0xffffffff;
          CClientDC::~CClientDC(aCStack_3c);
        }
        else {
          *(LONG *)(this + 0x78) = tStack_28.left;
          *(LONG *)(this + 0x7c) = tStack_28.top;
          *(LONG *)(this + 0x80) = tStack_28.right;
          *(LONG *)(this + 0x84) = tStack_28.bottom;
          if ((uStack_14 & 0x80000) != 0) {
            CWnd::SetLayeredWindowAttributes((CWnd *)this,0,0x80,2);
          }
          CWnd::ShowWindow((CWnd *)this,4);
          uStack_8 = 0xffffffff;
          CClientDC::~CClientDC(aCStack_3c);
        }
      }
      else {
        uStack_8 = 0xffffffff;
        CClientDC::~CClientDC(aCStack_3c);
      }
    }
  }
  else {
    CWnd::ShowWindow((CWnd *)this,4);
  }
  ExceptionList = pvStack_10;
  iVar4 = __security_check_cookie(uStack_18 ^ (uint)&stack0xfffffffc);
  return iVar4;
}



long __thiscall CControlBar::OnIdleUpdateCmdUI(CControlBar *this,uint param_1,long param_2)

{
  ulong uVar1;
  int iVar2;
  CWnd *pCStack_10;
  uint uStack_c;
  
  uVar1 = CWnd::GetExStyle((CWnd *)this);
  uStack_c = 0;
  if (((*(uint *)(this + 0xa0) & 1) == 0) || ((uVar1 & 0x10000000) == 0)) {
    if (((*(uint *)(this + 0xa0) & 2) != 0) && ((uVar1 & 0x10000000) == 0)) {
      uStack_c = 0x40;
    }
  }
  else {
    uStack_c = 0x80;
  }
  *(uint *)(this + 0xa0) = *(uint *)(this + 0xa0) & 0xfffffffc;
  if (uStack_c != 0) {
    CWnd::SetWindowPos((CWnd *)this,(CWnd *)0x0,0,0,0,0,uStack_c | 0x17);
  }
  uVar1 = CWnd::GetExStyle((CWnd *)this);
  if ((uVar1 & 0x10000000) != 0) {
    if ((*(int *)(this + 0xb0) != 0) &&
       (uVar1 = CWnd::GetExStyle(*(CWnd **)(this + 0xb0)), (uVar1 & 0x10000000) == 0)) {
      return 0;
    }
    pCStack_10 = CWnd::GetOwner((CWnd *)this);
    if ((pCStack_10 == (CWnd *)0x0) ||
       (iVar2 = (**(code **)(*(int *)pCStack_10 + 0x154))(), iVar2 == 0)) {
      pCStack_10 = (CWnd *)CWnd::GetParentFrame((CWnd *)this);
    }
    if (pCStack_10 != (CWnd *)0x0) {
      (**(code **)(*(int *)this + 0x170))(pCStack_10,param_1);
    }
    return 0;
  }
  return 0;
}



CControlCreationInfo * __thiscall
CControlCreationInfo::CControlCreationInfo(CControlCreationInfo *this)

{
  *(undefined4 *)this = 2;
  *(undefined4 *)(this + 4) = 0;
  return this;
}



undefined4 __fastcall thunk_FUN_006cb0a0(int param_1)

{
  return *(undefined4 *)(param_1 + 8);
}



void thunk_FUN_00805d20(void)

{
  return;
}



CPropertyPage * __thiscall CPropertyPage::CPropertyPage(CPropertyPage *this)

{
  uint uVar1;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_00b51052;
  pvStack_10 = ExceptionList;
  uVar1 = DAT_00c4a700 ^ (uint)&stack0xfffffffc;
  ExceptionList = &pvStack_10;
  CDialog::CDialog((CDialog *)this);
  uStack_8 = 0;
  *(undefined ***)this = vftable;
  thunk_FUN_006bef10(uVar1);
  uStack_8._0_1_ = 1;
  thunk_FUN_006bef10();
  uStack_8._0_1_ = 2;
  thunk_FUN_006bef10();
  uStack_8 = CONCAT31(uStack_8._1_3_,3);
  AllocPSP(this,0);
  CommonConstruct(this,(char *)0x0,0);
  ExceptionList = pvStack_10;
  return this;
}



void __thiscall Dump(CObject *param_1,CDumpContext *param_2)

{
  CDumpContext *pCVar1;
  int iVar2;
  ulong uVar3;
  char *pcVar4;
  
  CObject::Dump(param_1,param_2);
  pcVar4 = " elements";
  uVar3 = *(ulong *)(param_1 + 8);
  pCVar1 = CDumpContext::operator<<(param_2,"with ");
  pCVar1 = CDumpContext::operator<<(pCVar1,uVar3);
  CDumpContext::operator<<(pCVar1,pcVar4);
  iVar2 = CDumpContext::GetDepth(param_2);
  if (0 < iVar2) {
    CDumpContext::operator<<(param_2,"\n");
    DumpElements<>(param_2,*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 8));
  }
  CDumpContext::operator<<(param_2,"\n");
  return;
}



void __cdecl
_Afx_DDX_TextWithFormat(CDataExchange *param_1,int param_2,char *param_3,uint param_4,...)

{
  undefined4 uVar1;
  code *pcVar2;
  HWND__ *hWnd;
  int iVar3;
  int *piVar4;
  CHAR aCStack_4c [64];
  uint uStack_c;
  va_list pcStack_8;
  
  uStack_c = DAT_00c4a700 ^ (uint)&stack0xfffffffc;
  pcStack_8 = &stack0x00000014;
  hWnd = CDataExchange::PrepareEditCtrl(param_1,param_2);
  if ((hWnd == (HWND__ *)0x0) &&
     (iVar3 = AfxAssertFailedLine("f:\\dd\\vctools\\vc7libs\\ship\\atlmfc\\src\\mfc\\dlgdata.cpp",
                                  100), iVar3 != 0)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (*(int *)param_1 == 0) {
    piVar4 = __errno();
    iVar3 = *piVar4;
    piVar4 = __errno();
    *piVar4 = 0;
    __vsnprintf_s(aCStack_4c,0x40,0x3f,param_3,pcStack_8);
    piVar4 = __errno();
    if (*piVar4 == 0) {
      piVar4 = __errno();
      *piVar4 = iVar3;
    }
    else {
      piVar4 = __errno();
      ATL::AtlCrtErrorCheck(*piVar4);
    }
    AfxSetWindowText(hWnd,aCStack_4c);
  }
  else {
    uVar1 = *(undefined4 *)pcStack_8;
    pcStack_8 = pcStack_8 + 4;
    GetWindowTextA(hWnd,aCStack_4c,0x40);
    iVar3 = __snscanf_s(aCStack_4c,0x40,param_3,uVar1);
    if (iVar3 != 1) {
      AfxMessageBox(param_4,0,0xffffffff);
      CDataExchange::Fail(param_1);
    }
  }
  pcStack_8 = (va_list)0x0;
  __security_check_cookie(uStack_c ^ (uint)&stack0xfffffffc);
  return;
}



void __thiscall CBasePane::SetPaneAlignment(CBasePane *this,ulong param_1)

{
  *(uint *)(this + 0x90) = *(uint *)(this + 0x90) & 0xffff0fff;
  *(uint *)(this + 0x90) = *(uint *)(this + 0x90) | param_1;
  return;
}



undefined4 thunk_FUN_00701f10(void)

{
  return 0;
}



undefined4 * __CreateFrameInfo(undefined4 *param_1,undefined4 param_2)

{
  _ptiddata p_Var1;
  
  *param_1 = param_2;
  p_Var1 = __getptd();
  param_1[1] = p_Var1->_pFrameInfoChain;
  p_Var1 = __getptd();
  p_Var1->_pFrameInfoChain = param_1;
  return param_1;
}



undefined4 __fastcall thunk_FUN_006fef90(int param_1)

{
  return *(undefined4 *)(param_1 + 0x68);
}



int __thiscall CWnd::SubclassDlgItem(CWnd *this,uint param_1,CWnd *param_2)

{
  code *pcVar1;
  int iVar2;
  BOOL BVar3;
  HWND pHVar4;
  int iVar5;
  
  if ((param_2 == (CWnd *)0x0) &&
     (iVar2 = AfxAssertFailedLine("f:\\dd\\vctools\\vc7libs\\ship\\atlmfc\\src\\mfc\\wincore.cpp",
                                  0x13c9), iVar2 != 0)) {
    pcVar1 = (code *)swi(3);
    iVar2 = (*pcVar1)();
    return iVar2;
  }
  BVar3 = IsWindow(*(HWND *)(param_2 + 0x20));
  if ((BVar3 == 0) &&
     (iVar2 = AfxAssertFailedLine("f:\\dd\\vctools\\vc7libs\\ship\\atlmfc\\src\\mfc\\wincore.cpp",
                                  0x13ca), iVar2 != 0)) {
    pcVar1 = (code *)swi(3);
    iVar2 = (*pcVar1)();
    return iVar2;
  }
  pHVar4 = ::GetDlgItem(*(HWND *)(param_2 + 0x20),param_1);
  if (pHVar4 == (HWND)0x0) {
    if ((*(int *)(param_2 + 0x68) != 0) &&
       (iVar2 = (**(code **)(**(int **)(param_2 + 0x68) + 0x5c))(param_1), iVar2 != 0)) {
      if ((*(int *)(iVar2 + 0x24) == 0) &&
         (iVar5 = AfxAssertFailedLine("f:\\dd\\vctools\\vc7libs\\ship\\atlmfc\\src\\mfc\\wincore.cpp"
                                      ,0x13d8), iVar5 != 0)) {
        pcVar1 = (code *)swi(3);
        iVar2 = (*pcVar1)();
        return iVar2;
      }
      iVar5 = SubclassWindow(this,*(HWND__ **)(iVar2 + 0x24));
      if ((iVar5 == 0) &&
         (iVar5 = AfxAssertFailedLine("f:\\dd\\vctools\\vc7libs\\ship\\atlmfc\\src\\mfc\\wincore.cpp"
                                      ,0x13d9), iVar5 != 0)) {
        pcVar1 = (code *)swi(3);
        iVar2 = (*pcVar1)();
        return iVar2;
      }
      pHVar4 = GetParent(*(HWND *)(iVar2 + 0x24));
      if (*(HWND *)(param_2 + 0x20) != pHVar4) {
        AttachControlSite(this,param_2,0);
      }
      return 1;
    }
    iVar2 = 0;
  }
  else {
    iVar2 = SubclassWindow(this,pHVar4);
  }
  return iVar2;
}



void __thiscall CDockingManager::LockUpdate(CDockingManager *this,int param_1)

{
  CWnd *this_00;
  int iVar1;
  undefined4 *puVar2;
  CObject *this_01;
  int iStack_8;
  
  if (((param_1 == 0) || (*(int *)(this + 0x1b8) == 0)) ||
     (iVar1 = CSmartDockingManager::IsStarted(*(CSmartDockingManager **)(this + 0x1b8)), iVar1 == 0)
     ) {
    *(int *)(this + 8) = param_1;
    if (param_1 == 0) {
      CWnd::UnlockWindowUpdate(*(CWnd **)(this + 0xe4));
    }
    else {
      CWnd::LockWindowUpdate(*(CWnd **)(this + 0xe4));
    }
    iStack_8 = 0;
    iStack_8 = thunk_FUN_006ccba0();
    while (iStack_8 != 0) {
      puVar2 = (undefined4 *)::GetNext(&iStack_8);
      this_01 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CPaneFrameWnd_00c44ee0,(CObject *)*puVar2
                                  );
      CWnd::ValidateRect((CWnd *)this_01,(tagRECT *)0x0);
      CWnd::UpdateWindow((CWnd *)this_01);
      AfxAssertValidObject
                (this_01,"f:\\dd\\vctools\\vc7libs\\ship\\atlmfc\\src\\mfc\\afxdockingmanager.cpp",
                 0xc0b);
      if (param_1 == 0) {
        CWnd::UnlockWindowUpdate((CWnd *)this_01);
      }
      else {
        CWnd::LockWindowUpdate((CWnd *)this_01);
      }
    }
    iStack_8 = thunk_FUN_006ccba0();
    while (iStack_8 != 0) {
      puVar2 = (undefined4 *)::GetNext(&iStack_8);
      this_00 = (CWnd *)*puVar2;
      AfxAssertValidObject
                ((CObject *)this_00,
                 "f:\\dd\\vctools\\vc7libs\\ship\\atlmfc\\src\\mfc\\afxdockingmanager.cpp",0xc12);
      CWnd::ValidateRect(this_00,(tagRECT *)0x0);
      CWnd::UpdateWindow(this_00);
      if (param_1 == 0) {
        CWnd::UnlockWindowUpdate(this_00);
      }
      else {
        CWnd::LockWindowUpdate(this_00);
      }
    }
  }
  return;
}



void __thiscall CMFCEditBrowseCtrl::~CMFCEditBrowseCtrl(CMFCEditBrowseCtrl *this)

{
  uint uVar1;
  void *pvStack_10;
  undefined1 *puStack_c;
  int iStack_8;
  
  puStack_c = &LAB_00b5e412;
  pvStack_10 = ExceptionList;
  uVar1 = DAT_00c4a700 ^ (uint)&stack0xfffffffc;
  ExceptionList = &pvStack_10;
  *(undefined ***)this = vftable;
  iStack_8 = 3;
  thunk_FUN_0078e9a0(uVar1);
  iStack_8._0_1_ = 2;
  thunk_FUN_006bef70();
  iStack_8._0_1_ = 1;
  thunk_FUN_006bef70();
  iStack_8 = (uint)iStack_8._1_3_ << 8;
  thunk_FUN_006bef70();
  iStack_8 = 0xffffffff;
  CEdit::~CEdit((CEdit *)this);
  ExceptionList = pvStack_10;
  return;
}



int __thiscall CXMLParser::ReadValue(CXMLParser *this,CStringT<> *param_1)

{
  code *pcVar1;
  int iVar2;
  long lVar3;
  int iStack_10;
  
  iVar2 = ATL::CXMLNode<>::IsValid((CXMLNode<> *)(this + 4));
  if (iVar2 == 0) {
    iVar2 = AfxAssertFailedLine("f:\\dd\\vctools\\vc7libs\\ship\\atlmfc\\src\\mfc\\afxribboninfo2.cpp"
                                ,0x164);
    if (iVar2 != 0) {
      pcVar1 = (code *)swi(3);
      iVar2 = (*pcVar1)();
      return iVar2;
    }
    iStack_10 = 0;
  }
  else {
    lVar3 = ATL::CXMLNode<>::GetText((CXMLNode<> *)(this + 4),param_1);
    if ((lVar3 < 0) || (lVar3 != 0)) {
      iStack_10 = 0;
    }
    else {
      iStack_10 = 1;
    }
  }
  return iStack_10;
}



void __fastcall thunk_FUN_008be390(undefined4 param_1)

{
  thunk_FUN_008be3b0(param_1);
  return;
}



void thunk_FUN_009dc580(CObject *param_1)

{
  AfxAssertValidObject
            (param_1,"f:\\dd\\vctools\\vc7libs\\ship\\atlmfc\\src\\mfc\\viewcore.cpp",0x1d4);
  return;
}



bool __cdecl ATL::operator!=(char *param_1,CStringT<> *param_2)

{
  int iVar1;
  
  iVar1 = CStringT<>::Compare(param_2,param_1);
  return iVar1 != 0;
}



int __thiscall CGlobalUtils::CanBeAttached(CGlobalUtils *this,CWnd *param_1)

{
  int iVar1;
  
  AfxAssertValidObject
            ((CObject *)param_1,
             "f:\\dd\\vctools\\vc7libs\\ship\\atlmfc\\src\\mfc\\afxglobalutils.cpp",0x1fd);
  iVar1 = CObject::IsKindOf((CObject *)param_1,(CRuntimeClass *)&PTR_s_CPaneFrameWnd_00c44ee0);
  if (iVar1 == 0) {
    iVar1 = CObject::IsKindOf((CObject *)param_1,(CRuntimeClass *)&PTR_s_CPane_00badefc);
    if (iVar1 == 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = (**(code **)(*(int *)param_1 + 400))(this);
    }
  }
  else {
    iVar1 = (**(code **)(*(int *)param_1 + 0x178))();
  }
  return iVar1;
}



CObject * __thiscall CObList::RemoveHead(CObList *this)

{
  CNode *pCVar1;
  code *pcVar2;
  int iVar3;
  CObject *pCVar4;
  int iVar5;
  
  AfxAssertValidObject
            ((CObject *)this,"f:\\dd\\vctools\\vc7libs\\ship\\atlmfc\\src\\mfc\\list_o.cpp",0xc4);
  if (this == (CObList *)0x0) {
    thunk_FUN_007113e0();
  }
  iVar5 = *(int *)(this + 4);
  if ((iVar5 == 0) &&
     (iVar3 = AfxAssertFailedLine("f:\\dd\\vctools\\vc7libs\\ship\\atlmfc\\src\\mfc\\list_o.cpp",
                                  0xc5), iVar3 != 0)) {
    pcVar2 = (code *)swi(3);
    pCVar4 = (CObject *)(*pcVar2)();
    return pCVar4;
  }
  if (iVar5 == 0) {
    thunk_FUN_007113e0();
  }
  iVar5 = AfxIsValidAddress(*(void **)(this + 4),0xc,1);
  if ((iVar5 == 0) &&
     (iVar5 = AfxAssertFailedLine("f:\\dd\\vctools\\vc7libs\\ship\\atlmfc\\src\\mfc\\list_o.cpp",199
                                 ), iVar5 != 0)) {
    pcVar2 = (code *)swi(3);
    pCVar4 = (CObject *)(*pcVar2)();
    return pCVar4;
  }
  pCVar1 = *(CNode **)(this + 4);
  pCVar4 = *(CObject **)(pCVar1 + 8);
  *(undefined4 *)(this + 4) = *(undefined4 *)pCVar1;
  if (*(int *)(this + 4) == 0) {
    *(undefined4 *)(this + 8) = 0;
  }
  else {
    *(undefined4 *)(*(int *)(this + 4) + 4) = 0;
  }
  FreeNode(this,pCVar1);
  return pCVar4;
}



COleDocument * __thiscall COleDocument::COleDocument(COleDocument *this)

{
  code *pcVar1;
  uint uVar2;
  int iVar3;
  COleDocument *pCVar4;
  HRESULT HVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  LPMALLOC pIStack_14;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_00b6da64;
  pvStack_10 = ExceptionList;
  uVar2 = DAT_00c4a700 ^ (uint)&stack0xfffffffc;
  ExceptionList = &pvStack_10;
  CDocument::CDocument((CDocument *)this);
  uStack_8 = 0;
  *(undefined ***)this = vftable;
  CObList::CObList((CObList *)(this + 0xd8),10);
  uStack_8._0_1_ = 1;
  thunk_FUN_006bef10(uVar2);
  uStack_8 = CONCAT31(uStack_8._1_3_,2);
  iVar3 = CPtrList::IsEmpty((CPtrList *)(this + 0x2c));
  if ((iVar3 == 0) &&
     (iVar3 = AfxAssertFailedLine("f:\\dd\\vctools\\vc7libs\\ship\\atlmfc\\src\\mfc\\oledoc1.cpp",
                                  0x16), iVar3 != 0)) {
    pcVar1 = (code *)swi(3);
    pCVar4 = (COleDocument *)(*pcVar1)();
    return pCVar4;
  }
  iVar3 = CObList::IsEmpty((CObList *)(this + 0xd8));
  if ((iVar3 == 0) &&
     (iVar3 = AfxAssertFailedLine("f:\\dd\\vctools\\vc7libs\\ship\\atlmfc\\src\\mfc\\oledoc1.cpp",
                                  0x17), iVar3 != 0)) {
    pcVar1 = (code *)swi(3);
    pCVar4 = (COleDocument *)(*pcVar1)();
    return pCVar4;
  }
  pIStack_14 = (IMalloc *)0x0;
  HVar5 = CoGetMalloc(1,&pIStack_14);
  if (HVar5 != 0) {
    uVar6 = thunk_FUN_006bf6d0(0,"Warning: CoGetMalloc(MEMCTX_TASK, ...) failed --\n");
    uVar7 = thunk_FUN_006bf580("f:\\dd\\vctools\\vc7libs\\ship\\atlmfc\\src\\mfc\\oledoc1.cpp",0x1f)
    ;
    thunk_FUN_006bf5d0(uVar7,uVar6);
    uVar6 = thunk_FUN_006bf6d0(0,"\tperhaps AfxOleInit() has not been called.\n");
    uVar7 = thunk_FUN_006bf580("f:\\dd\\vctools\\vc7libs\\ship\\atlmfc\\src\\mfc\\oledoc1.cpp",0x20)
    ;
    thunk_FUN_006bf5d0(uVar7,uVar6);
  }
  if (pIStack_14 != (IMalloc *)0x0) {
    (*pIStack_14->lpVtbl->Release)(pIStack_14);
    pIStack_14 = (IMalloc *)0x0;
  }
  *(undefined4 *)(this + 0xf4) = 1;
  *(undefined4 *)(this + 0xf8) = 0;
  *(undefined4 *)(this + 0x108) = 1;
  *(undefined4 *)(this + 0x104) = 1;
  *(undefined4 *)(this + 0x100) = 0;
  *(undefined4 *)(this + 0x110) = 0;
  *(undefined4 *)(this + 0xfc) = 0;
  AfxOleLockApp();
  ExceptionList = pvStack_10;
  return this;
}



void __thiscall CMFCRibbonButton::SetImageIndex(CMFCRibbonButton *this,int param_1,int param_2)

{
  if (param_2 == 0) {
    *(int *)(this + 0xe4) = param_1;
  }
  else {
    *(int *)(this + 0xe8) = param_1;
  }
  return;
}



void __thiscall CMapPtrToPtr::~CMapPtrToPtr(CMapPtrToPtr *this)

{
  code *pcVar1;
  uint uVar2;
  int iVar3;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &LAB_00b50588;
  pvStack_10 = ExceptionList;
  uVar2 = DAT_00c4a700 ^ (uint)&stack0xfffffffc;
  ExceptionList = &pvStack_10;
  *(undefined ***)this = vftable;
  uStack_8 = 0;
  RemoveAll(this);
  if (*(int *)(this + 0xc) != 0) {
    iVar3 = AfxAssertFailedLine("f:\\dd\\vctools\\vc7libs\\ship\\atlmfc\\src\\mfc\\map_pp.cpp",0x5d)
    ;
    if (iVar3 != 0) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  uStack_8 = 0xffffffff;
  thunk_FUN_006c98a0(uVar2);
  ExceptionList = pvStack_10;
  return;
}



void __thiscall CPaneContainer::GetMinSize(CPaneContainer *this,CSize *param_1)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  int iStack_50;
  int iStack_4c;
  int iStack_48;
  int iStack_44;
  int iStack_40;
  int iStack_3c;
  int iStack_38;
  int iStack_34;
  int iStack_28;
  int iStack_24;
  int iStack_20;
  int iStack_1c;
  int iStack_18;
  int iStack_14;
  int iStack_10;
  int iStack_c;
  int iStack_8;
  
  AfxAssertValidObject
            ((CObject *)this,
             "f:\\dd\\vctools\\vc7libs\\ship\\atlmfc\\src\\mfc\\afxpanecontainer.cpp",0xb4);
  iVar3 = *(int *)(this + 0x1c);
  if ((iVar3 == 0) &&
     (iVar2 = AfxAssertFailedLine("f:\\dd\\vctools\\vc7libs\\ship\\atlmfc\\src\\mfc\\afxpanecontainer.cpp"
                                  ,0xb5), iVar2 != 0)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (iVar3 == 0) {
    thunk_FUN_007113e0();
  }
  thunk_FUN_00b31090(0,0);
  thunk_FUN_00b31090(0,0);
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)param_1 = 0;
  iStack_10 = CPaneContainerManager::IsAutoHideMode(*(CPaneContainerManager **)(this + 0x1c));
  if ((*(int *)(this + 4) != 0) &&
     ((iVar3 = CBasePane::IsPaneVisible(*(CBasePane **)(this + 4)), iVar3 != 0 || (iStack_10 != 0)))
     ) {
    (**(code **)(**(int **)(this + 4) + 0x274))(&iStack_18);
  }
  if ((*(int *)(this + 8) != 0) &&
     ((iVar3 = CBasePane::IsPaneVisible(*(CBasePane **)(this + 8)), iVar3 != 0 || (iStack_10 != 0)))
     ) {
    (**(code **)(**(int **)(this + 8) + 0x274))(&iStack_c);
  }
  thunk_FUN_00b31090(0,0);
  if ((*(int *)(this + 0x10) != 0) &&
     ((iVar3 = IsVisible(*(CPaneContainer **)(this + 0x10)), iVar3 != 0 || (iStack_10 != 0)))) {
    (**(code **)(**(int **)(this + 0x10) + 0x18))(&iStack_28);
  }
  thunk_FUN_00b31090(0,0);
  if ((*(int *)(this + 0x14) != 0) &&
     ((iVar3 = IsVisible(*(CPaneContainer **)(this + 0x14)), iVar3 != 0 || (iStack_10 != 0)))) {
    (**(code **)(**(int **)(this + 0x14) + 0x18))(&iStack_20);
  }
  if ((*(int *)(this + 0xc) == 0) ||
     ((iVar3 = CBasePane::IsPaneVisible(*(CBasePane **)(this + 0xc)), iVar3 == 0 && (iStack_10 == 0)
      ))) {
    if (iStack_c < iStack_18) {
      iStack_4c = iStack_18;
    }
    else {
      iStack_4c = iStack_c;
    }
    *(int *)param_1 = iStack_4c;
    if (iStack_8 < iStack_14) {
      iStack_50 = iStack_14;
    }
    else {
      iStack_50 = iStack_8;
    }
    *(int *)(param_1 + 4) = iStack_50;
    if ((*(int *)(this + 0x10) != 0) &&
       (iVar3 = IsVisible(*(CPaneContainer **)(this + 0x10)), iVar3 != 0)) {
      *(int *)param_1 = iStack_28;
      *(int *)(param_1 + 4) = iStack_24;
    }
    if ((*(int *)(this + 0x14) != 0) &&
       (iVar3 = IsVisible(*(CPaneContainer **)(this + 0x14)), iVar3 != 0)) {
      *(int *)param_1 = iStack_20;
      *(int *)(param_1 + 4) = iStack_1c;
    }
  }
  else {
    iVar3 = IsPaneDividerHorz(this);
    if (iVar3 == 0) {
