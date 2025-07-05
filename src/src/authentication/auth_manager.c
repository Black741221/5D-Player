/*
 * 認證與授權模組
 * 行數範圍：14001-16000
 */

    **(undefined4 **)(this + 0x94) = this;
    (**(code **)(**(int **)(*(int *)(this + 0x94) + 0xc) + 0xbc))();
    (**(code **)(**(int **)(*(int *)(*(int *)(this + 0x94) + 0xc) + 0x90) + 4))
              (*(undefined4 *)(this + 0x94),1);
  }
  ExceptionList = pvStack_10;
  return;
}



void __fastcall thunk_FUN_00a4bdb0(undefined4 *param_1)

{
  *param_1 = CMFCRibbonInfoLoader::vftable;
  return;
}



int __thiscall CCommandManager::LoadState(CCommandManager *this,char *param_1)

{
  char *pcVar1;
  undefined4 uVar2;
  int iVar3;
  CStringT<> *this_00;
  int iStack_34;
  char acStack_24 [4];
  CSettingsStore *pCStack_20;
  char acStack_1c [4];
  CSettingsStoreSP aCStack_18 [8];
  void *pvStack_10;
  undefined1 *puStack_c;
  int iStack_8;
  
  iStack_8 = 0xffffffff;
  puStack_c = &LAB_00b5a888;
  pvStack_10 = ExceptionList;
  ExceptionList = &pvStack_10;
  pcVar1 = (char *)thunk_FUN_006bf040(param_1,DAT_00c4a700 ^ (uint)&stack0xfffffffc);
  AFXGetRegPath(acStack_1c,pcVar1);
  iStack_8 = 0;
  thunk_FUN_006bef10();
  iStack_8._0_1_ = 1;
  uVar2 = thunk_FUN_006bf040();
  ATL::CStringT<>::Format(this_00,acStack_24,"%sCommandManager",uVar2);
  CSettingsStoreSP::CSettingsStoreSP(aCStack_18,0);
  iStack_8._0_1_ = 2;
  pCStack_20 = CSettingsStoreSP::Create(aCStack_18,0,1);
  uVar2 = thunk_FUN_006bf040();
  iVar3 = (**(code **)(*(int *)pCStack_20 + 0x18))(uVar2);
  if (iVar3 != 0) {
    CList<>::RemoveAll((CList<> *)(this + 0x58));
    iVar3 = (**(code **)(*(int *)pCStack_20 + 0x48))("CommandsWithoutImages",this + 0x58);
    if ((iVar3 == 0) ||
       (iVar3 = (**(code **)(*(int *)pCStack_20 + 0x48))("MenuUserImages",this + 0x74), iVar3 == 0))
    {
      iStack_34 = 0;
    }
    else {
      iStack_34 = 1;
    }
    iStack_8._0_1_ = 1;
    CSettingsStoreSP::~CSettingsStoreSP(aCStack_18);
    iStack_8 = (uint)iStack_8._1_3_ << 8;
    thunk_FUN_006bef70();
    iStack_8 = 0xffffffff;
    thunk_FUN_006bef70();
    ExceptionList = pvStack_10;
    return iStack_34;
  }
  iStack_8._0_1_ = 1;
  CSettingsStoreSP::~CSettingsStoreSP(aCStack_18);
  iStack_8 = (uint)iStack_8._1_3_ << 8;
  thunk_FUN_006bef70();
  iStack_8 = 0xffffffff;
  thunk_FUN_006bef70();
  ExceptionList = pvStack_10;
  return 0;
}



void RemoveAll(void)

{
  SetSize(0,0xffffffff);
  return;
}



uint CMFCPopupMenu::IsMenuSound(void)

{
  return DAT_00c46060;
}



QUICK_CUSTOMIZE_TYPE __thiscall CMFCPopupMenu::GetQuickCustomizeType(CMFCPopupMenu *this)

{
  return *(QUICK_CUSTOMIZE_TYPE *)(this + 0x10b8);
}



undefined4 __thiscall thunk_FUN_007fe820(undefined4 param_1,undefined4 param_2)

{
  thunk_FUN_007fe850(param_2);
  return param_1;
}



undefined4 thunk_FUN_009736c0(void)

{
  return 0;
}



int __thiscall CEditView::FindTextA(CEditView *this,char *param_1,int param_2,int param_3)

{
  char cVar1;
  code *pcVar2;
  uint uVar3;
  int iVar4;
  CEdit *pCVar5;
  char *pcVar6;
  int iVar7;
  uint *puVar8;
  uint *puVar9;
  int iVar10;
  code *pcStack_80;
  char *pcStack_58;
  char *pcStack_44;
  char *pcStack_40;
  uint uStack_3c;
  uint uStack_34;
  CWaitCursor CStack_2d;
  uint uStack_2c;
  char *pcStack_28;
  uint uStack_24;
  uint uStack_20;
  char *pcStack_1c;
  uint uStack_18;
  code *pcStack_14;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_00b7b5f8;
  pvStack_10 = ExceptionList;
  ExceptionList = &pvStack_10;
  AfxAssertValidObject
            ((CObject *)this,"f:\\dd\\vctools\\vc7libs\\ship\\atlmfc\\src\\mfc\\viewedit.cpp",0x462)
  ;
  if ((param_1 == (char *)0x0) &&
     (iVar4 = AfxAssertFailedLine("f:\\dd\\vctools\\vc7libs\\ship\\atlmfc\\src\\mfc\\viewedit.cpp",
                                  0x463), iVar4 != 0)) {
    pcVar2 = (code *)swi(3);
    iVar4 = (*pcVar2)();
    return iVar4;
  }
  if ((*param_1 == '\0') &&
     (iVar4 = AfxAssertFailedLine("f:\\dd\\vctools\\vc7libs\\ship\\atlmfc\\src\\mfc\\viewedit.cpp",
                                  0x464), iVar4 != 0)) {
    pcVar2 = (code *)swi(3);
    iVar4 = (*pcVar2)();
    return iVar4;
  }
  uStack_20 = GetBufferLength(this);
  puVar9 = &uStack_34;
  puVar8 = &uStack_2c;
  pCVar5 = GetEditCtrl(this);
  CEdit::GetSel(pCVar5,(int *)puVar8,(int *)puVar9);
  uStack_24 = uStack_2c;
  iVar4 = (uint)(param_2 != 0) * 2 + -1;
  if ((uStack_2c != 0) || (-1 < iVar4)) {
    CWaitCursor::CWaitCursor(&CStack_2d);
    uStack_8 = 0;
    pcVar6 = LockBuffer(this);
    uVar3 = uStack_24;
    pcStack_28 = pcVar6;
    if (iVar4 < 0) {
      iVar7 = __tcsdec(pcVar6,pcVar6 + uStack_24);
      uStack_24 = uStack_24 - (int)(pcVar6 + (uVar3 - iVar7));
    }
    else if ((uStack_2c != uStack_34) && (iVar7 = SameAsSelected(this,param_1,param_3), iVar7 != 0))
    {
      iVar7 = __ismbblead((int)pcStack_28[uStack_24]);
      if (iVar7 != 0) {
        uStack_24 = uStack_24 + 1;
      }
      uStack_24 = uStack_24 + iVar4;
    }
    uStack_18 = lstrlenA(param_1);
    if (uStack_20 <= (uStack_24 - 1) + uStack_18) {
      if ((-1 < iVar4) || (uStack_20 < uStack_18)) {
        UnlockBuffer(this);
        uStack_8 = 0xffffffff;
        thunk_FUN_006e1920();
        ExceptionList = pvStack_10;
        return 0;
      }
      if (DAT_00c55e74 == 0) {
        uStack_24 = uStack_20 - uStack_18;
      }
      else {
        uStack_24 = uStack_20;
        uStack_3c = uStack_18;
        while (uVar3 = uStack_24, pcVar6 = pcStack_28, uStack_3c != 0) {
          iVar7 = __tcsdec(pcStack_28,pcStack_28 + uStack_24);
          uStack_24 = uStack_24 - (int)(pcVar6 + (uVar3 - iVar7));
          uStack_3c = uStack_3c - 1;
        }
      }
      if ((uStack_20 < (uStack_24 - 1) + uStack_18) &&
         (iVar7 = AfxAssertFailedLine("f:\\dd\\vctools\\vc7libs\\ship\\atlmfc\\src\\mfc\\viewedit.cpp"
                                      ,0x497), iVar7 != 0)) {
        pcVar2 = (code *)swi(3);
        iVar4 = (*pcVar2)();
        return iVar4;
      }
    }
    pcStack_58 = pcStack_28 + uStack_24;
    if (param_3 == 0) {
      pcStack_80 = lstrcmpiA_exref;
    }
    else {
      pcStack_80 = lstrcmpA_exref;
    }
    pcStack_14 = pcStack_80;
    pcStack_1c = pcStack_58;
    if (DAT_00c55e74 == 0) {
      if (iVar4 < 0) {
        pcStack_58 = pcStack_58 + (1 - (int)pcStack_28);
      }
      else {
        pcStack_58 = (char *)(((uStack_20 - ((int)pcStack_58 - (int)pcStack_28)) - uStack_18) + 1);
      }
      for (; pcStack_58 != (char *)0x0; pcStack_58 = pcStack_58 + -1) {
        if ((pcStack_1c < pcStack_28) &&
           (iVar7 = AfxAssertFailedLine("f:\\dd\\vctools\\vc7libs\\ship\\atlmfc\\src\\mfc\\viewedit.cpp"
                                        ,0x4dc), iVar7 != 0)) {
          pcVar2 = (code *)swi(3);
          iVar4 = (*pcVar2)();
          return iVar4;
        }
        if ((pcStack_28 + (uStack_20 - 1) < pcStack_1c + (uStack_18 - 1)) &&
           (iVar7 = AfxAssertFailedLine("f:\\dd\\vctools\\vc7libs\\ship\\atlmfc\\src\\mfc\\viewedit.cpp"
                                        ,0x4dd), iVar7 != 0)) {
          pcVar2 = (code *)swi(3);
          iVar4 = (*pcVar2)();
          return iVar4;
        }
        pcVar6 = pcStack_1c + uStack_18;
        cVar1 = *pcVar6;
        *pcVar6 = '\0';
        iVar7 = (*pcStack_14)(pcStack_1c,param_1);
        *pcVar6 = cVar1;
        if (iVar7 == 0) {
          UnlockBuffer(this);
          iVar4 = (int)pcStack_1c - (int)pcStack_28;
          iVar10 = 0;
          iVar7 = iVar4 + uStack_18;
          pCVar5 = GetEditCtrl(this);
          CEdit::SetSel(pCVar5,iVar4,iVar7,iVar10);
          AfxAssertValidObject
                    ((CObject *)this,
                     "f:\\dd\\vctools\\vc7libs\\ship\\atlmfc\\src\\mfc\\viewedit.cpp",0x4e9);
          uStack_8 = 0xffffffff;
          thunk_FUN_006e1920();
          ExceptionList = pvStack_10;
          return 1;
        }
        *pcVar6 = cVar1;
        pcStack_1c = pcStack_1c + iVar4;
      }
      UnlockBuffer(this);
    }
    else {
      if (iVar4 < 1) {
        pcStack_1c = pcStack_28;
        pcStack_44 = pcStack_58;
      }
      else {
        pcStack_44 = pcStack_28 + (uStack_20 - uStack_18) + 1;
      }
      pcStack_40 = (char *)0x0;
      for (; pcStack_1c <= pcStack_44; pcStack_1c = (char *)__tcsinc(pcStack_1c)) {
        if ((param_3 == 0) ||
           ((*pcStack_1c == *param_1 &&
            ((iVar7 = __ismbblead((int)*pcStack_1c), iVar7 == 0 || (pcStack_1c[1] == param_1[1])))))
           ) {
          pcVar6 = pcStack_1c + uStack_18;
          cVar1 = *pcVar6;
          *pcVar6 = '\0';
          iVar7 = (*pcStack_14)(pcStack_1c,param_1);
          *pcVar6 = cVar1;
          if ((iVar7 == 0) && (pcStack_40 = pcStack_1c, 0 < iVar4)) break;
        }
      }
      UnlockBuffer(this);
      if (pcStack_40 != (char *)0x0) {
        iVar4 = (int)pcStack_40 - (int)pcStack_28;
        iVar10 = 0;
        iVar7 = iVar4 + uStack_18;
        pCVar5 = GetEditCtrl(this);
        CEdit::SetSel(pCVar5,iVar4,iVar7,iVar10);
        uStack_8 = 0xffffffff;
        thunk_FUN_006e1920();
        ExceptionList = pvStack_10;
        return 1;
      }
    }
    AfxAssertValidObject
              ((CObject *)this,"f:\\dd\\vctools\\vc7libs\\ship\\atlmfc\\src\\mfc\\viewedit.cpp",
               0x4f7);
    uStack_8 = 0xffffffff;
    thunk_FUN_006e1920();
  }
  ExceptionList = pvStack_10;
  return 0;
}



void __thiscall thunk_FUN_00a987e0(int param_1,LONG param_2,LPLONG param_3)

{
  ReleaseSemaphore(*(HANDLE *)(param_1 + 4),param_2,param_3);
  return;
}



int __thiscall
CMFCVisualManagerOffice2003::OnDrawBrowseButton
          (CMFCVisualManagerOffice2003 *this,CDC *param_1,LONG param_3,LONG param_4,LONG param_5,
          LONG param_6,undefined4 param_7,int param_8)

{
  uint uVar1;
  tagRECT *ptVar2;
  int iVar3;
  ulong uVar4;
  ulong uVar5;
  CDrawingManager aCStack_2c [8];
  tagRECT tStack_24;
  uint uStack_14;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_00b66b18;
  pvStack_10 = ExceptionList;
  uVar1 = DAT_00c4a700 ^ (uint)&stack0xfffffffc;
  ExceptionList = &pvStack_10;
  uStack_14 = uVar1;
  AfxAssertValidObject
            ((CObject *)param_1,
             "f:\\dd\\vctools\\vc7libs\\ship\\atlmfc\\src\\mfc\\afxvisualmanageroffice2003.cpp",
             0x877);
  tStack_24.left = param_3;
  tStack_24.top = param_4;
  tStack_24.right = param_5;
  tStack_24.bottom = param_6;
  CRect::InflateRect((CRect *)&tStack_24,0,1,1,1);
  if (param_8 == 1) {
    (**(code **)(*(int *)this + 0x310))
              (param_1,param_3,param_4,param_5,param_6,this + 0x140,0,uVar1);
    CDC::Draw3dRect(param_1,&tStack_24,*(ulong *)(this + 0x180),*(ulong *)(this + 0x180));
  }
  else if (param_8 == 2) {
    (**(code **)(*(int *)this + 0x310))(param_1,param_3,param_4,param_5,param_6,this + 0x138,0);
    CDC::Draw3dRect(param_1,&tStack_24,*(ulong *)(this + 0x180),*(ulong *)(this + 0x180));
  }
  else {
    CDrawingManager::CDrawingManager(aCStack_2c,param_1);
    uStack_8 = 0;
    CDrawingManager::FillGradient
              (aCStack_2c,param_3,param_4,param_5,param_6,DAT_00c557a4,DAT_00c557ac,1,0,0);
    uVar4 = DAT_00c557e4;
    uVar5 = DAT_00c557e4;
    ptVar2 = (tagRECT *)thunk_FUN_00b31df0();
    CDC::Draw3dRect(param_1,ptVar2,uVar4,uVar5);
    uStack_8 = 0xffffffff;
    thunk_FUN_00943a10();
  }
  ExceptionList = pvStack_10;
  iVar3 = __security_check_cookie(uStack_14 ^ (uint)&stack0xfffffffc);
  return iVar3;
}



CMFCHeaderCtrl * __thiscall thunk_FUN_00a046f0(CMFCHeaderCtrl *param_1,uint param_2)

{
  CMFCHeaderCtrl::~CMFCHeaderCtrl(param_1);
  if ((param_2 & 1) != 0) {
    thunk_FUN_006c4610(param_1);
  }
  return param_1;
}



CMiniFrameWnd * __thiscall thunk_FUN_008d8210(CMiniFrameWnd *param_1,uint param_2)

{
  CMiniFrameWnd::~CMiniFrameWnd(param_1);
  if ((param_2 & 1) != 0) {
    thunk_FUN_006c4610(param_1);
  }
  return param_1;
}



undefined4 __fastcall thunk_FUN_006b9220(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 auStack_d0 [51];
  
  puVar2 = auStack_d0;
  for (iVar1 = 0x33; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0xcccccccc;
    puVar2 = puVar2 + 1;
  }
  return *(undefined4 *)(param_1 + 0x38);
}



// WARNING: Function: __RTC_CheckEsp replaced with injection: __RTC_CheckEsp

undefined4 * thunk_FUN_006c2fd0(void)

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
  thunk_FUN_006c3030();
  *puStack_c = std::basic_ios<>::vftable;
  return puStack_c;
}



void __fastcall thunk_FUN_0086b530(undefined4 param_1)

{
  thunk_FUN_0086b550(param_1);
  return;
}



int __thiscall
CButton::OnChildNotify(CButton *this,uint param_1,uint param_2,long param_3,long *param_4)

{
  code *pcVar1;
  int iVar2;
  
  if (param_1 == 0x2b) {
    if (param_4 != (long *)0x0) {
      iVar2 = AfxAssertFailedLine("f:\\dd\\vctools\\vc7libs\\ship\\atlmfc\\src\\mfc\\winctrl1.cpp",
                                  0x5d);
      if (iVar2 != 0) {
        pcVar1 = (code *)swi(3);
        iVar2 = (*pcVar1)();
        return iVar2;
      }
    }
    (**(code **)(*(int *)this + 0x16c))(param_3);
    iVar2 = 1;
  }
  else {
    iVar2 = CWnd::OnChildNotify((CWnd *)this,param_1,param_2,param_3,param_4);
  }
  return iVar2;
}



void __thiscall COlePasteSpecialDialog::Dump(COlePasteSpecialDialog *this,CDumpContext *param_1)

{
  CDumpContext *pCVar1;
  ulong uVar2;
  undefined4 uVar3;
  char *pcVar4;
  
  COleDialog::Dump((COleDialog *)this,param_1);
  uVar2 = *(ulong *)(this + 0x98);
  pCVar1 = CDumpContext::operator<<(param_1,"m_ps.cbStruct = ");
  CDumpContext::operator<<(pCVar1,uVar2);
  CDumpContext::operator<<(param_1,"\nm_ps.dwFlags = ");
  CDumpContext::DumpAsHex(param_1,*(ulong *)(this + 0x9c));
  uVar3 = *(undefined4 *)(this + 0xa0);
  CDumpContext::operator<<(param_1,"\nm_ps.hWndOwner = ");
  thunk_FUN_0072a160(uVar3);
  pcVar4 = *(char **)(this + 0xa4);
  pCVar1 = CDumpContext::operator<<(param_1,"\nm_ps.lpszCaption = ");
  CDumpContext::operator<<(pCVar1,pcVar4);
  uVar2 = *(ulong *)(this + 0xac);
  pCVar1 = CDumpContext::operator<<(param_1,"\nm_ps.lCustData = ");
  CDumpContext::operator<<(pCVar1,uVar2);
  uVar2 = *(ulong *)(this + 0xb0);
  pCVar1 = CDumpContext::operator<<(param_1,"\nm_ps.hInstance = ");
  CDumpContext::operator<<(pCVar1,uVar2);
  uVar2 = *(ulong *)(this + 0xb4);
  pCVar1 = CDumpContext::operator<<(param_1,"\nm_ps.lpszTemplate = ");
  CDumpContext::operator<<(pCVar1,uVar2);
  uVar2 = *(ulong *)(this + 0xb8);
  pCVar1 = CDumpContext::operator<<(param_1,"\nm_ps.hResource = ");
  CDumpContext::operator<<(pCVar1,uVar2);
  if (*(undefined1 **)(this + 0xa8) == &LAB_00679a63) {
    CDumpContext::operator<<(param_1,"\nhook function set to standard MFC hook function");
  }
  else {
    CDumpContext::operator<<(param_1,"\nhook function set to non-standard hook function");
  }
  uVar2 = *(ulong *)(this + 0xbc);
  pCVar1 = CDumpContext::operator<<(param_1,"\nm_ps.lpSrcDataObj = ");
  CDumpContext::operator<<(pCVar1,uVar2);
  uVar2 = *(ulong *)(this + 0xc4);
  pCVar1 = CDumpContext::operator<<(param_1,"\nm_ps.cPasteEntries = ");
  CDumpContext::operator<<(pCVar1,uVar2);
  uVar2 = *(ulong *)(this + 0xcc);
  pCVar1 = CDumpContext::operator<<(param_1,"\nm_ps.cLinkTypes = ");
  CDumpContext::operator<<(pCVar1,uVar2);
  uVar2 = *(ulong *)(this + 0xd8);
  pCVar1 = CDumpContext::operator<<(param_1,"\nm_ps.nSelectedIndex = ");
  CDumpContext::operator<<(pCVar1,uVar2);
  uVar2 = *(ulong *)(this + 0xdc);
  pCVar1 = CDumpContext::operator<<(param_1,"\nm_ps.fLink = ");
  CDumpContext::operator<<(pCVar1,uVar2);
  CDumpContext::operator<<(param_1,"\n");
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



CVSToolsListBox * __thiscall
CVSToolsListBox::CVSToolsListBox(CVSToolsListBox *this,CMFCToolBarsToolsPropertyPage *param_1)

{
  CVSListBox::CVSListBox((CVSListBox *)this);
  *(undefined ***)this = vftable;
  *(CMFCToolBarsToolsPropertyPage **)(this + 0x1d0) = param_1;
  return this;
}



bool __thiscall
ATL::CDynamicAccessor::SetValue<float>(CDynamicAccessor *this,ulong param_1,float *param_2)

{
  bool bVar1;
  
  bVar1 = TranslateColumnNo(this,&param_1);
  if (bVar1) {
    _SetValue<float>(this,param_1,param_2);
  }
  return bVar1;
}



long CDocObjectServer::XOleObject::GetMiscStatus(ulong param_1,ulong *param_2)

{
  long lVar1;
  undefined4 in_stack_0000000c;
  AFX_MAINTAIN_STATE2 aAStack_c [8];
  
  thunk_FUN_006c4460();
  AFX_MAINTAIN_STATE2::AFX_MAINTAIN_STATE2(aAStack_c,*(AFX_MODULE_STATE **)(param_1 - 0x18));
  AfxAssertValidObject
            ((CObject *)(param_1 - 0x34),
             "f:\\dd\\vctools\\vc7libs\\ship\\atlmfc\\src\\mfc\\oledocob.cpp",0x361);
  lVar1 = (**(code **)(*(int *)(*(int *)(param_1 - 0x10) + 0x164) + 0x58))
                    (*(int *)(param_1 - 0x10) + 0x164,param_2,in_stack_0000000c);
  AFX_MAINTAIN_STATE2::~AFX_MAINTAIN_STATE2(aAStack_c);
  return lVar1;
}



int __cdecl UnDecorator::doMSKeywords(void)

{
  return (uint)((DAT_00c5afd4 & 2) == 0);
}



undefined4 SetStyle(int param_1)

{
  code *pcVar1;
  uint uVar2;
  undefined4 uVar3;
  LPCSTR lpName;
  HRSRC pHVar4;
  int iVar5;
  CTraceFileAndLineInfo *this;
  char *pcVar6;
  char *pcVar7;
  undefined4 uStack_18;
  HMODULE pHStack_14;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_00b57648;
  pvStack_10 = ExceptionList;
  uVar2 = DAT_00c4a700 ^ (uint)&stack0xfffffffc;
  ExceptionList = &pvStack_10;
  if ((DAT_00c573a8 == param_1) && (0x20 < DAT_00c573ac)) {
    uVar3 = 1;
  }
  else {
    GetStyleResourceID(&uStack_18,param_1);
    uStack_8 = 0;
    pHStack_14 = AfxGetResourceHandle();
    pcVar7 = "STYLE_XML";
    lpName = (LPCSTR)thunk_FUN_006bf040("STYLE_XML",uVar2);
    pHVar4 = FindResourceA(pHStack_14,lpName,pcVar7);
    if (pHVar4 == (HRSRC)0x0) {
      pcVar6 = "Cannot load Style: %s\r\n";
      pcVar7 = (char *)thunk_FUN_006bf580("f:\\dd\\vctools\\vc7libs\\ship\\atlmfc\\src\\mfc\\afxvisualmanageroffice2007.cpp"
                                          ,0x16d);
      ATL::CTraceFileAndLineInfo::operator()(this,pcVar7,pcVar6,uStack_18);
      iVar5 = AfxAssertFailedLine("f:\\dd\\vctools\\vc7libs\\ship\\atlmfc\\src\\mfc\\afxvisualmanageroffice2007.cpp"
                                  ,0x16e);
      if (iVar5 != 0) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return uVar3;
      }
      uStack_8 = 0xffffffff;
      thunk_FUN_006bef70();
      uVar3 = 0;
    }
    else {
      CMFCVisualManagerOffice2007::CleanStyle();
      DAT_00c573a8 = param_1;
      CMFCVisualManagerOffice2007::SetResourceHandle(pHStack_14);
      uStack_8 = 0xffffffff;
      thunk_FUN_006bef70();
      uVar3 = 1;
    }
  }
  ExceptionList = pvStack_10;
  return uVar3;
}



// WARNING: Function: __RTC_CheckEsp replaced with injection: __RTC_CheckEsp

void __fastcall thunk_FUN_006be240(undefined4 *param_1)

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
  *param_1 = std::bad_alloc::vftable;
  puStack_c = param_1;
  thunk_FUN_00ac7ae0();
  return;
}



void __thiscall CMFCRibbonEdit::CopyFrom(CMFCRibbonEdit *this,CMFCRibbonBaseElement *param_1)

{
  AfxAssertValidObject
            ((CObject *)this,"f:\\dd\\vctools\\vc7libs\\ship\\atlmfc\\src\\mfc\\afxribbonedit.cpp",
             0x1fa);
  CMFCRibbonButton::CopyFrom((CMFCRibbonButton *)this,param_1);
  thunk_FUN_006c9180(param_1 + 0x18c);
  if (*(int *)(this + 400) != 0) {
    (**(code **)(**(int **)(this + 400) + 0x68))();
    if (*(int **)(this + 400) != (int *)0x0) {
      (**(code **)(**(int **)(this + 400) + 4))(1);
    }
    *(undefined4 *)(this + 400) = 0;
  }
  if (*(int *)(this + 0x194) != 0) {
    (**(code **)(**(int **)(this + 0x194) + 0x68))();
    if (*(int **)(this + 0x194) != (int *)0x0) {
      (**(code **)(**(int **)(this + 0x194) + 4))(1);
    }
    *(undefined4 *)(this + 0x194) = 0;
  }
  *(undefined4 *)(this + 0x164) = *(undefined4 *)(param_1 + 0x164);
  *(undefined4 *)(this + 0x168) = *(undefined4 *)(param_1 + 0x168);
  *(undefined4 *)(this + 0x180) = *(undefined4 *)(param_1 + 0x180);
  *(undefined4 *)(this + 0x17c) = *(undefined4 *)(param_1 + 0x17c);
  *(undefined4 *)(this + 0x16c) = *(undefined4 *)(param_1 + 0x16c);
  *(undefined4 *)(this + 0x170) = *(undefined4 *)(param_1 + 0x170);
  *(undefined4 *)(this + 0x174) = *(undefined4 *)(param_1 + 0x174);
  *(undefined4 *)(this + 0x178) = *(undefined4 *)(param_1 + 0x178);
  return;
}



void __thiscall CList<>::Dump(CList<> *this,CDumpContext *param_1)

{
  CDumpContext *pCVar1;
  int iVar2;
  tagPOINT *ptVar3;
  ulong uVar4;
  char *pcVar5;
  tagPOINT tStack_10;
  __POSITION *p_Stack_8;
  
  CObject::Dump((CObject *)this,param_1);
  pcVar5 = " elements";
  uVar4 = *(ulong *)(this + 0xc);
  pCVar1 = CDumpContext::operator<<(param_1,"with ");
  pCVar1 = CDumpContext::operator<<(pCVar1,uVar4);
  CDumpContext::operator<<(pCVar1,pcVar5);
  iVar2 = CDumpContext::GetDepth(param_1);
  if (0 < iVar2) {
    p_Stack_8 = (__POSITION *)thunk_FUN_0080dd30();
    while (p_Stack_8 != (__POSITION *)0x0) {
      ptVar3 = GetNext(this,&p_Stack_8);
      tStack_10.x = ptVar3->x;
      tStack_10.y = ptVar3->y;
      CDumpContext::operator<<(param_1,"\n");
      DumpElements<>(param_1,&tStack_10,1);
    }
  }
  CDumpContext::operator<<(param_1,"\n");
  return;
}



undefined4 __fastcall
FID_conflict_operator_struct__IMAGELIST_____stdcall___int_int_unsigned_int_int_int_
          (undefined4 *param_1)

{
  return *param_1;
}



void __thiscall CMFCRibbonInfo::XElementEdit::~XElementEdit(XElementEdit *this)

{
  *(undefined ***)this = vftable;
  thunk_FUN_006bef70();
  XElementButton::~XElementButton((XElementButton *)this);
  return;
}



undefined4 thunk_FUN_00991ff0(void)

{
  return 0;
}



void __thiscall CMFCTabCtrl::HideActiveWindowHorzScrollBar(CMFCTabCtrl *this)

{
  CWnd *this_00;
  
  this_00 = (CWnd *)(**(code **)(*(int *)this + 0x214))();
  if ((this_00 != (CWnd *)0x0) && (*(int *)(this + 0x214) != 0)) {
    AfxAssertValidObject
              ((CObject *)this_00,"f:\\dd\\vctools\\vc7libs\\ship\\atlmfc\\src\\mfc\\afxtabctrl.cpp"
               ,0x8ec);
    CWnd::ShowScrollBar(this_00,0,0);
    CWnd::ModifyStyle(this_00,0x100000,0,0x20);
  }
  return;
}



void __cdecl _AfxUnregisterInterfaces(ITypeLib *param_1)

{
  int iVar1;
  OLECHAR aOStack_f4 [40];
  GUID *pGStack_a4;
  int *piStack_a0;
  int iStack_9c;
  int iStack_98;
  char acStack_94 [132];
  uint uStack_10;
  int iStack_c;
  char *pcStack_8;
  
  uStack_10 = DAT_00c4a700 ^ (uint)&stack0xfffffffc;
  ATL::Checked::tcscpy_s(acStack_94,0x80,"Interface\\");
  iVar1 = lstrlenA(acStack_94);
  pcStack_8 = acStack_94 + iVar1;
  iStack_c = (**(code **)(*(int *)param_1 + 0xc))(param_1);
  for (iStack_98 = 0; iStack_98 < iStack_c; iStack_98 = iStack_98 + 1) {
    iVar1 = (**(code **)(*(int *)param_1 + 0x14))(param_1,iStack_98,&iStack_9c);
    if ((-1 < iVar1) && ((iStack_9c == 4 || (iStack_9c == 3)))) {
      piStack_a0 = (int *)0x0;
      iVar1 = (**(code **)(*(int *)param_1 + 0x10))(param_1,iStack_98,&piStack_a0);
      if (-1 < iVar1) {
        iVar1 = (**(code **)(*piStack_a0 + 0xc))(piStack_a0,&pGStack_a4);
        if (-1 < iVar1) {
          StringFromGUID2(pGStack_a4,aOStack_f4,0x27);
          ATL::_wcstombsz(pcStack_8,aOStack_f4,0x27);
          _AfxRecursiveRegDeleteKey((HKEY__ *)0x80000000,acStack_94);
          (**(code **)(*piStack_a0 + 0x4c))(piStack_a0,pGStack_a4);
        }
        (**(code **)(*piStack_a0 + 8))(piStack_a0);
      }
    }
  }
  __security_check_cookie(uStack_10 ^ (uint)&stack0xfffffffc);
  return;
}



undefined ** thunk_FUN_00a997d0(void)

{
  return &PTR_thunk_FUN_006f5490_00bd7018;
}



void __thiscall CDialog::Initialize(CDialog *this)

{
  *(undefined4 *)(this + 0x74) = 0;
  *(undefined4 *)(this + 0x78) = 0;
  *(undefined4 *)(this + 0x7c) = 0;
  *(undefined4 *)(this + 0x80) = 0;
  *(undefined4 *)(this + 0x84) = 0;
  *(undefined4 *)(this + 0x88) = 0;
  *(undefined4 *)(this + 0x8c) = 0;
  *(undefined4 *)(this + 0x90) = 0;
  return;
}



undefined4 thunk_FUN_00a736f0(void)

{
  return 0;
}



int __thiscall CMFCVisualManagerOffice2007::CanDrawImage(CMFCVisualManagerOffice2007 *this)

{
  int iVar1;
  
  if (((8 < DAT_00c5593c) &&
      (iVar1 = AFX_GLOBAL_DATA::IsHighContrastMode((AFX_GLOBAL_DATA *)&DAT_00c55790), iVar1 == 0))
     && (*(int *)(this + 0x228) != 0)) {
    return 1;
  }
  return 0;
}



undefined ** thunk_FUN_0097a820(void)

{
  return &PTR_s_CMFCPopupMenuBar_00c46de0;
}



void __thiscall CPane::AdjustSizeImmediate(CPane *this,int param_1)

{
  tagSIZE tVar1;
  CWnd *pCVar2;
  CObject *pCVar3;
  undefined4 uVar4;
  tagPOINT *ptVar5;
  CSize *this_00;
  int iVar6;
  CFrameWnd *pCVar7;
  LONG LVar8;
  LONG LVar9;
  LONG LStack_20;
  LONG LStack_1c;
  CRect aCStack_18 [16];
  uint uStack_8;
  
  uStack_8 = DAT_00c4a700 ^ (uint)&stack0xfffffffc;
  pCVar2 = CWnd::SetCapture((CWnd *)this);
  pCVar3 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMFCReBar_00bb1eec,(CObject *)pCVar2);
  if (pCVar3 == (CObject *)0x0) {
    uVar4 = (**(code **)(*(int *)this + 0x168))();
    (**(code **)(*(int *)this + 0x264))(&LStack_20,0,uVar4);
    thunk_FUN_00b31aa0();
    ptVar5 = (tagPOINT *)thunk_FUN_00b31df0();
    CWnd::ClientToScreen((CWnd *)this,ptVar5);
    LVar8 = LStack_20;
    LVar9 = LStack_1c;
    this_00 = (CSize *)CRect::Size(aCStack_18);
    tVar1.cy = LVar9;
    tVar1.cx = LVar8;
    iVar6 = CSize::operator!=(this_00,tVar1);
    if (iVar6 != 0) {
      (**(code **)(*(int *)this + 0x23c))(0,0,0,LStack_20,LStack_1c,0x16,0);
    }
    if ((*(int *)(this + 0xac) != 0) && (UpdateVirtualRect(this), param_1 != 0)) {
      (**(code **)(**(int **)(this + 0xb0) + 0x30))(this);
      pCVar7 = AFXGetParentFrame((CWnd *)this);
      (**(code **)(*(int *)pCVar7 + 0x17c))(1);
    }
  }
  __security_check_cookie(uStack_8 ^ (uint)&stack0xfffffffc);
  return;
}



void thunk_FUN_00a80c40(int param_1)

{
  code *pcVar1;
  COleServerItem *this;
  int iVar2;
  uint uStack_54;
  AFX_MAINTAIN_STATE2 aAStack_1c [8];
  undefined1 *puStack_14;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_00b79208;
  pvStack_10 = ExceptionList;
  uStack_54 = DAT_00c4a700 ^ (uint)&stack0xfffffffc;
  puStack_14 = (undefined1 *)&uStack_54;
  ExceptionList = &pvStack_10;
  thunk_FUN_006c4460();
  AFX_MAINTAIN_STATE2::AFX_MAINTAIN_STATE2(aAStack_1c,*(AFX_MODULE_STATE **)(param_1 + -0x14c));
  uStack_8 = 1;
  this = COleServerDoc::GetEmbeddedItem((COleServerDoc *)(param_1 + -0x168));
  AfxAssertValidObject
            ((CObject *)this,"f:\\dd\\vctools\\vc7libs\\ship\\atlmfc\\src\\mfc\\olesvr1.cpp",0xa2c);
  iVar2 = CObject::IsKindOf((CObject *)this,(CRuntimeClass *)&PTR_s_COleServerItem_00bc401c);
  if (iVar2 == 0) {
    iVar2 = AfxAssertFailedLine("f:\\dd\\vctools\\vc7libs\\ship\\atlmfc\\src\\mfc\\olesvr1.cpp",
                                0xa2d);
    if (iVar2 != 0) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  FUN_00a80d3c();
  return;
}



int __thiscall CRect::IsRectNull(CRect *this)

{
  int iStack_c;
  
  if ((((*(int *)this == 0) && (*(int *)(this + 8) == 0)) && (*(int *)(this + 4) == 0)) &&
     (*(int *)(this + 0xc) == 0)) {
    iStack_c = 1;
  }
  else {
    iStack_c = 0;
  }
  return iStack_c;
}



void __thiscall CMapStringToOb::~CMapStringToOb(CMapStringToOb *this)

{
  code *pcVar1;
  uint uVar2;
  int iVar3;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &LAB_00b50718;
  pvStack_10 = ExceptionList;
  uVar2 = DAT_00c4a700 ^ (uint)&stack0xfffffffc;
  ExceptionList = &pvStack_10;
  *(undefined ***)this = vftable;
  uStack_8 = 0;
  ::RemoveAll(uVar2);
  if (*(int *)(this + 0xc) != 0) {
    iVar3 = AfxAssertFailedLine("f:\\dd\\vctools\\vc7libs\\ship\\atlmfc\\src\\mfc\\map_so.cpp",0x79)
    ;
    if (iVar3 != 0) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  uStack_8 = 0xffffffff;
  thunk_FUN_006c98a0();
  ExceptionList = pvStack_10;
  return;
}



void __fastcall thunk_FUN_006f5470(undefined4 param_1)

{
  thunk_FUN_006f5490(param_1);
  return;
}



int __thiscall CMFCRibbonInfo::XBase::Write(XBase *this,XRibbonInfoParser *param_1)

{
  uint uVar1;
  undefined4 uVar2;
  undefined1 auStack_24 [4];
  undefined1 auStack_20 [8];
  int iStack_18;
  char *pcStack_14;
  void *pvStack_10;
  undefined1 *puStack_c;
  int iStack_8;
  
  iStack_8 = 0xffffffff;
  puStack_c = &LAB_00b73fe8;
  pvStack_10 = ExceptionList;
  uVar1 = DAT_00c4a700 ^ (uint)&stack0xfffffffc;
  ExceptionList = &pvStack_10;
  pcStack_14 = ElementNameFromType(*(XElementType *)(this + 4));
  if (pcStack_14 == (char *)0x0) {
    iStack_18 = 1;
  }
  else {
    thunk_FUN_006c4270(pcStack_14);
    iStack_8 = 0;
    thunk_FUN_006c4270(PTR_s_ELEMENT_NAME_00c486a0);
    iStack_8._0_1_ = 1;
    uVar2 = thunk_FUN_006bef10(uVar1);
    iStack_8._0_1_ = 2;
    iStack_18 = (**(code **)(*(int *)param_1 + 0x2c))(auStack_24,auStack_20,uVar2);
    iStack_8._0_1_ = 1;
    thunk_FUN_006bef70();
    iStack_8 = (uint)iStack_8._1_3_ << 8;
    thunk_FUN_006bef70();
    iStack_8 = 0xffffffff;
    thunk_FUN_006bef70();
  }
  ExceptionList = pvStack_10;
  return iStack_18;
}



undefined4 thunk_FUN_0077b260(int param_1)

{
  AFX_MAINTAIN_STATE2 aAStack_c [8];
  
  thunk_FUN_006c4460();
  AFX_MAINTAIN_STATE2::AFX_MAINTAIN_STATE2(aAStack_c,*(AFX_MODULE_STATE **)(param_1 + -0xb0));
  AFX_MAINTAIN_STATE2::~AFX_MAINTAIN_STATE2(aAStack_c);
  return 0x80004001;
}



void __thiscall
CMFCRibbonConstructor::ConstructCategory
          (CMFCRibbonConstructor *this,CMFCRibbonCategory *param_1,XCategory *param_2)

{
  XPanel *pXVar1;
  CMFCToolBarImages *pCVar2;
  undefined4 uVar3;
  int iVar4;
  XPanel **ppXVar5;
  CObject *pCVar6;
  XElement **ppXVar7;
  int iStack_8;
  
  pCVar2 = CMFCRibbonCategory::GetSmallImages(param_1);
  CMFCToolBarImages::CopyTo((CMFCToolBarImages *)(param_2 + 0x20),pCVar2);
  pCVar2 = CMFCRibbonCategory::GetLargeImages(param_1);
  CMFCToolBarImages::CopyTo((CMFCToolBarImages *)(param_2 + 0x13c),pCVar2);
  uVar3 = thunk_FUN_006bf040();
  SetKeys(uVar3);
  iStack_8 = 0;
  while( true ) {
    iVar4 = thunk_FUN_00a39580();
    if (iVar4 <= iStack_8) break;
    ppXVar5 = CArray<>::operator[]((CArray<> *)(param_2 + 0x248),iStack_8);
    pXVar1 = *ppXVar5;
    pCVar6 = (CObject *)(**(code **)(*(int *)this + 0xc))(param_1,pXVar1);
    if (pCVar6 != (CObject *)0x0) {
      AfxAssertValidObject
                (pCVar6,"f:\\dd\\vctools\\vc7libs\\ship\\atlmfc\\src\\mfc\\afxribbonconstructor.cpp"
                 ,0xbf);
      (**(code **)(*(int *)this + 0x38))(pCVar6,pXVar1);
    }
    iStack_8 = iStack_8 + 1;
  }
  iStack_8 = 0;
  while( true ) {
    iVar4 = thunk_FUN_00a39510();
    if (iVar4 <= iStack_8) break;
    ppXVar7 = CArray<>::operator[]((CArray<> *)(param_2 + 0x25c),iStack_8);
    pCVar6 = (CObject *)(**(code **)(*(int *)this + 8))(*ppXVar7);
    if (pCVar6 != (CObject *)0x0) {
      AfxAssertValidObject
                (pCVar6,"f:\\dd\\vctools\\vc7libs\\ship\\atlmfc\\src\\mfc\\afxribbonconstructor.cpp"
                 ,0xca);
      CMFCRibbonCategory::AddHidden(param_1,(CMFCRibbonBaseElement *)pCVar6);
    }
    iStack_8 = iStack_8 + 1;
  }
  return;
}



void __thiscall COleClientItem::GetItemStorageFlat(COleClientItem *this)

{
  code *pcVar1;
  int iVar2;
  HRESULT HVar3;
  
  AfxAssertValidObject
            ((CObject *)this,"f:\\dd\\vctools\\vc7libs\\ship\\atlmfc\\src\\mfc\\olecli1.cpp",0x34a);
  if (*(int *)(this + 0x38) != 0) {
    iVar2 = AfxAssertFailedLine("f:\\dd\\vctools\\vc7libs\\ship\\atlmfc\\src\\mfc\\olecli1.cpp",
                                0x34b);
    if (iVar2 != 0) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (*(int *)(this + 0x3c) != 0) {
    iVar2 = AfxAssertFailedLine("f:\\dd\\vctools\\vc7libs\\ship\\atlmfc\\src\\mfc\\olecli1.cpp",
                                0x34c);
    if (iVar2 != 0) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  HVar3 = CreateILockBytesOnHGlobal((HGLOBAL)0x0,1,(LPLOCKBYTES *)(this + 0x3c));
  if (HVar3 != 0) {
    AfxThrowOleException(HVar3);
  }
  if (*(int *)(this + 0x3c) == 0) {
    iVar2 = AfxAssertFailedLine("f:\\dd\\vctools\\vc7libs\\ship\\atlmfc\\src\\mfc\\olecli1.cpp",
                                0x351);
    if (iVar2 != 0) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  HVar3 = StgCreateDocfileOnILockBytes
                    (*(ILockBytes **)(this + 0x3c),0x1012,0,(IStorage **)(this + 0x38));
  if (HVar3 != 0) {
    iVar2 = (**(code **)(**(int **)(this + 0x3c) + 8))(*(undefined4 *)(this + 0x3c));
    if (iVar2 != 0) {
      iVar2 = AfxAssertFailedLine("f:\\dd\\vctools\\vc7libs\\ship\\atlmfc\\src\\mfc\\olecli1.cpp",
                                  0x357);
      if (iVar2 != 0) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    *(undefined4 *)(this + 0x3c) = 0;
    AfxThrowOleException(HVar3);
  }
  if (*(int *)(this + 0x38) == 0) {
    iVar2 = AfxAssertFailedLine("f:\\dd\\vctools\\vc7libs\\ship\\atlmfc\\src\\mfc\\olecli1.cpp",
                                0x35b);
    if (iVar2 != 0) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  AfxAssertValidObject
            ((CObject *)this,"f:\\dd\\vctools\\vc7libs\\ship\\atlmfc\\src\\mfc\\olecli1.cpp",0x35d);
  return;
}



ulong _AfxOleGetLenFilePrefixOfMoniker(IMoniker *param_1)

{
  HRESULT HVar1;
  LPOLESTR pOStack_1c;
  HRESULT HStack_18;
  LPBC pIStack_14;
  DWORD DStack_10;
  size_t sStack_c;
  IMoniker *pIStack_8;
  
  if (param_1 == (IMoniker *)0x0) {
    sStack_c = 0;
  }
  else {
    sStack_c = 0;
    pIStack_8 = _AfxOleGetFirstMoniker(param_1);
    if (pIStack_8 != (IMoniker *)0x0) {
      HVar1 = (*pIStack_8->lpVtbl->IsSystemMoniker)(pIStack_8,&DStack_10);
      if ((HVar1 == 0) && (DStack_10 == 2)) {
        pIStack_14 = (IBindCtx *)0x0;
        HStack_18 = CreateBindCtx(0,&pIStack_14);
        if (HStack_18 == 0) {
          pOStack_1c = (wchar_t *)0x0;
          HStack_18 = (*pIStack_8->lpVtbl->GetDisplayName)
                                (pIStack_8,pIStack_14,(IMoniker *)0x0,&pOStack_1c);
          if ((HStack_18 == 0) && (pOStack_1c != (wchar_t *)0x0)) {
            sStack_c = _wcslen(pOStack_1c);
            CoTaskMemFree(pOStack_1c);
          }
          if (pIStack_14 != (IBindCtx *)0x0) {
            (*pIStack_14->lpVtbl->Release)(pIStack_14);
            pIStack_14 = (IBindCtx *)0x0;
          }
        }
      }
      if (pIStack_8 != (IMoniker *)0x0) {
        (*pIStack_8->lpVtbl->Release)(pIStack_8);
      }
    }
  }
  return sStack_c;
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



void __thiscall CRecentFileList::WriteList(CRecentFileList *this)

{
  code *pcVar1;
  char cVar2;
  int iVar3;
  char *_DstBuf;
  CWinApp *pCVar4;
  undefined4 uVar5;
  char *_Format;
  int iStack_14;
  
  if (*(int *)(this + 8) == 0) {
    iVar3 = AfxAssertFailedLine("f:\\dd\\vctools\\vc7libs\\ship\\atlmfc\\src\\mfc\\filelist.cpp",
                                0x1d7);
    if (iVar3 != 0) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  cVar2 = thunk_FUN_006b82d0();
  if (cVar2 != '\0') {
    iVar3 = AfxAssertFailedLine("f:\\dd\\vctools\\vc7libs\\ship\\atlmfc\\src\\mfc\\filelist.cpp",
                                0x1d8);
    if (iVar3 != 0) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  cVar2 = thunk_FUN_006b82d0();
  if (cVar2 != '\0') {
    iVar3 = AfxAssertFailedLine("f:\\dd\\vctools\\vc7libs\\ship\\atlmfc\\src\\mfc\\filelist.cpp",
                                0x1d9);
    if (iVar3 != 0) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  iVar3 = thunk_FUN_006bf080();
  _DstBuf = (char *)thunk_FUN_006c4cb0(iVar3 + 10U);
  pCVar4 = AfxGetApp();
  uVar5 = thunk_FUN_006bf040(0,0);
  (**(code **)(*(int *)pCVar4 + 0x90))(uVar5);
  for (iStack_14 = 0; iStack_14 < *(int *)(this + 4); iStack_14 = iStack_14 + 1) {
    _Format = (char *)thunk_FUN_006bf040(iStack_14 + 1);
    _sprintf_s(_DstBuf,iVar3 + 10U,_Format);
    cVar2 = thunk_FUN_006b82d0();
    if (cVar2 == '\0') {
      uVar5 = thunk_FUN_006bf040();
      uVar5 = thunk_FUN_006bf040(_DstBuf,uVar5);
      (**(code **)(*(int *)pCVar4 + 0x90))(uVar5);
    }
  }
  abs((long)_DstBuf);
  return;
}



void __thiscall CMFCRibbonSlider::CommonInit(CMFCRibbonSlider *this)

{
  *(undefined4 *)(this + 0xac) = 0;
  *(undefined4 *)(this + 0xb0) = 100;
  *(undefined4 *)(this + 0xb4) = 0;
  *(undefined4 *)(this + 0xb8) = 10;
  *(undefined4 *)(this + 200) = 0;
  *(undefined4 *)(this + 0xbc) = 100;
  thunk_FUN_00b31f60();
  thunk_FUN_00b31f60();
  thunk_FUN_00b31f60();
  thunk_FUN_00b31f60();
  *(undefined4 *)(this + 0xc0) = 0xffffffff;
  *(undefined4 *)(this + 0xc4) = 0xffffffff;
  return;
}



CMFCTabCtrl * __thiscall CMDIClientAreaWnd::FindActiveTabWndByActiveChild(CMDIClientAreaWnd *this)

{
  CMFCTabCtrl *pCVar1;
  int iStack_c;
  HWND__ *pHStack_8;
  
  pHStack_8 = (HWND__ *)CWnd::SendMessageA((CWnd *)this,0x229,0,0);
  iStack_c = -1;
  pCVar1 = FindTabWndByChild(this,pHStack_8,&iStack_c);
  return pCVar1;
}



void __thiscall CWnd::CalcWindowRect(CWnd *this,tagRECT *param_1,uint param_2)

{
  ulong dwStyle;
  BOOL bMenu;
  undefined4 uStack_8;
  
  uStack_8 = GetExStyle(this);
  if (param_2 == 0) {
    uStack_8 = uStack_8 & 0xfffffdff;
  }
  bMenu = 0;
  dwStyle = GetExStyle(this);
  AdjustWindowRectEx(param_1,dwStyle,bMenu,uStack_8);
  return;
}



void __thiscall CMFCOutlookBarToolBar::OnCustomizeMode(CMFCOutlookBarToolBar *this,int param_1)

{
  CMFCToolBar::OnCustomizeMode((CMFCToolBar *)this,param_1);
  CWnd::EnableWindow((CWnd *)this,(uint)(param_1 == 0));
  return;
}



undefined4 __fastcall thunk_FUN_0096da60(int param_1)

{
  return *(undefined4 *)(param_1 + 0x74);
}



CGdiObject * __thiscall CDC::SelectStockObject(CDC *this,int param_1)

{
  code *pcVar1;
  int iVar2;
  CGdiObject *pCVar3;
  HGDIOBJ h;
  HGDIOBJ pvStack_c;
  
  if (*(int *)(this + 4) == 0) {
    iVar2 = AfxAssertFailedLine("f:\\dd\\vctools\\vc7libs\\ship\\atlmfc\\src\\mfc\\wingdi.cpp",0xde)
    ;
    if (iVar2 != 0) {
      pcVar1 = (code *)swi(3);
      pCVar3 = (CGdiObject *)(*pcVar1)();
      return pCVar3;
    }
  }
  h = GetStockObject(param_1);
  pvStack_c = (HGDIOBJ)0x0;
  if (h == (HGDIOBJ)0x0) {
    iVar2 = AfxAssertFailedLine("f:\\dd\\vctools\\vc7libs\\ship\\atlmfc\\src\\mfc\\wingdi.cpp",0xe3)
    ;
    if (iVar2 != 0) {
      pcVar1 = (code *)swi(3);
      pCVar3 = (CGdiObject *)(*pcVar1)();
      return pCVar3;
    }
  }
  if (*(int *)(this + 4) != *(int *)(this + 8)) {
    pvStack_c = ::SelectObject(*(HDC *)(this + 4),h);
  }
  if (*(int *)(this + 8) != 0) {
    pvStack_c = ::SelectObject(*(HDC *)(this + 8),h);
  }
  pCVar3 = CGdiObject::FromHandle(pvStack_c);
  return pCVar3;
}



undefined4 __fastcall
FID_conflict_operator_int____stdcall___struct__IMAGELIST__int_struct_HBITMAP____struct_HBITMAP____
          (undefined4 *param_1)

{
  return *param_1;
}



int __thiscall CListBox::SetItemDataPtr(CListBox *this,int param_1,void *param_2)

{
  code *pcVar1;
  BOOL BVar2;
  int iVar3;
  
  BVar2 = IsWindow(*(HWND *)(this + 0x20));
  if (BVar2 == 0) {
    iVar3 = AfxAssertFailedLine("f:\\dd\\vctools\\vc7libs\\ship\\atlmfc\\include\\afxwin2.inl",0x309
                               );
    if (iVar3 != 0) {
      pcVar1 = (code *)swi(3);
      iVar3 = (*pcVar1)();
      return iVar3;
    }
  }
  iVar3 = SetItemData(this,param_1,(ulong)param_2);
  return iVar3;
}



undefined4 thunk_FUN_0089d270(void)

{
  return 0;
}



void __thiscall CFrameWnd::OnVScroll(CFrameWnd *this,uint param_1,uint param_2,CScrollBar *param_3)

{
  CView *this_00;
  tagMSG *ptVar1;
  
  this_00 = GetActiveView(this);
  if (this_00 != (CView *)0x0) {
    ptVar1 = CWnd::GetCurrentMessage();
    CWnd::SendMessageA((CWnd *)this_00,0x115,ptVar1->wParam,ptVar1->lParam);
  }
  return;
}



void ___set_fpsr_sse2(uint param_1)

{
  if (DAT_00c5b5cc != 0) {
    if (((param_1 & 0x40) == 0) || (DAT_00c4b9a0 == 0)) {
      MXCSR = param_1 & 0xffffffbf;
    }
    else {
      MXCSR = param_1;
    }
  }
  return;
}



CMFCPropertyGridToolTipCtrl * __thiscall
thunk_FUN_00a037f0(CMFCPropertyGridToolTipCtrl *param_1,uint param_2)

{
  CMFCPropertyGridToolTipCtrl::~CMFCPropertyGridToolTipCtrl(param_1);
  if ((param_2 & 1) != 0) {
    thunk_FUN_006c4610(param_1);
  }
  return param_1;
}



CMFCRibbonButton * __thiscall CMFCRibbonPanelMenuBar::GetDroppedDown(CMFCRibbonPanelMenuBar *this)

{
  CMFCRibbonBaseElement *pCVar1;
  CMFCRibbonButton *pCVar2;
  
  if (*(int *)(this + 0xe30) == 0) {
    AfxAssertValidObject
              (*(CObject **)(this + 0xe20),
               "f:\\dd\\vctools\\vc7libs\\ship\\atlmfc\\src\\mfc\\afxribbonpanelmenu.cpp",0x66d);
    pCVar1 = CMFCRibbonPanel::GetDroppedDown(*(CMFCRibbonPanel **)(this + 0xe20));
    pCVar2 = (CMFCRibbonButton *)
             AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMFCRibbonButton_00bc1d98,(CObject *)pCVar1)
    ;
  }
  else {
    AfxAssertValidObject
              (*(CObject **)(this + 0xe30),
               "f:\\dd\\vctools\\vc7libs\\ship\\atlmfc\\src\\mfc\\afxribbonpanelmenu.cpp",0x667);
    pCVar1 = CMFCRibbonCategory::GetDroppedDown(*(CMFCRibbonCategory **)(this + 0xe30));
    pCVar2 = (CMFCRibbonButton *)
             AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMFCRibbonButton_00bc1d98,(CObject *)pCVar1)
    ;
  }
  return pCVar2;
}



CListCtrl * __thiscall thunk_FUN_0078b7a0(CListCtrl *param_1,uint param_2)

{
  CListCtrl::~CListCtrl(param_1);
  if ((param_2 & 1) != 0) {
    thunk_FUN_006c4610(param_1);
  }
  return param_1;
}



undefined4 * __thiscall
CRecentFileList(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
               uint param_5,undefined4 param_6)

{
  code *pcVar1;
  uint uVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  uint *puStack_28;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_00b4eb01;
  pvStack_10 = ExceptionList;
  uVar2 = DAT_00c4a700 ^ (uint)&stack0xfffffffc;
  ExceptionList = &pvStack_10;
  *param_1 = CRecentFileList::vftable;
  thunk_FUN_006bef10(uVar2);
  uStack_8 = 0;
  thunk_FUN_006bef10();
  uStack_8._0_1_ = 1;
  thunk_FUN_006bef10();
  uStack_8 = CONCAT31(uStack_8._1_3_,2);
  if (((int)param_5 < 0) &&
     (iVar3 = AfxAssertFailedLine("f:\\dd\\vctools\\vc7libs\\ship\\atlmfc\\src\\mfc\\filelist.cpp",
                                  0x88), iVar3 != 0)) {
    pcVar1 = (code *)swi(3);
    puVar4 = (undefined4 *)(*pcVar1)();
    return puVar4;
  }
  if ((int)param_5 < 0) {
    thunk_FUN_007113e0();
  }
  uVar2 = -(uint)((int)((ulonglong)param_5 * 4 >> 0x20) != 0) | (uint)((ulonglong)param_5 * 4);
  puStack_28 = (uint *)thunk_FUN_006c4cb0(-(uint)(0xfffffffb < uVar2) | uVar2 + 4);
  if (puStack_28 == (uint *)0x0) {
    puStack_28 = (uint *)0x0;
  }
  else {
    *puStack_28 = param_5;
    _eh_vector_constructor_iterator_(puStack_28 + 1,4,param_5,thunk_FUN_006bef10,thunk_FUN_006bef70)
    ;
    puStack_28 = puStack_28 + 1;
  }
  param_1[2] = puStack_28;
  iVar3 = param_1[2];
  if ((iVar3 == 0) &&
     (iVar5 = AfxAssertFailedLine("f:\\dd\\vctools\\vc7libs\\ship\\atlmfc\\src\\mfc\\filelist.cpp",
                                  0x8a), iVar5 != 0)) {
    pcVar1 = (code *)swi(3);
    puVar4 = (undefined4 *)(*pcVar1)();
    return puVar4;
  }
  if (iVar3 == 0) {
    thunk_FUN_007113e0();
  }
  param_1[1] = param_5;
  param_1[5] = param_2;
  thunk_FUN_006bf0e0(param_3);
  thunk_FUN_006bf0e0(param_4);
  param_1[6] = param_6;
  ExceptionList = pvStack_10;
  return param_1;
}



int __thiscall
CMFCFontComboBox::Setup(CMFCFontComboBox *this,int param_1,uchar param_2,uchar param_3)

{
  code *pcVar1;
  uint uVar2;
  BOOL BVar3;
  int iVar4;
  char *pcVar5;
  CObject *pCVar6;
  undefined4 uVar7;
  CMFCFontInfo *this_00;
  ulong uStack_144;
  int iStack_120;
  CMFCToolBarFontComboBox aCStack_118 [260];
  uint uStack_14;
  void *pvStack_10;
  undefined1 *puStack_c;
  int iStack_8;
  
  iStack_8 = 0xffffffff;
  puStack_c = &LAB_00b5e2bd;
  pvStack_10 = ExceptionList;
  uVar2 = DAT_00c4a700 ^ (uint)&stack0xfffffffc;
  ExceptionList = &pvStack_10;
  uStack_14 = uVar2;
  AfxAssertValidObject
            ((CObject *)this,"f:\\dd\\vctools\\vc7libs\\ship\\atlmfc\\src\\mfc\\afxfontcombobox.cpp"
             ,0x10b);
  BVar3 = IsWindow(*(HWND *)(this + 0x20));
  if ((BVar3 == 0) &&
     (iVar4 = AfxAssertFailedLine("f:\\dd\\vctools\\vc7libs\\ship\\atlmfc\\src\\mfc\\afxfontcombobox.cpp"
                                  ,0x10c), iVar4 != 0)) {
    pcVar1 = (code *)swi(3);
    iVar4 = (*pcVar1)();
    return iVar4;
  }
  if (BVar3 == 0) {
    thunk_FUN_007113e0(uVar2);
  }
  if (*(int *)(this + 0x7c) == 0) {
    CleanUp(this);
    CMFCToolBarFontComboBox::CMFCToolBarFontComboBox(aCStack_118,0,-1,param_1,param_2,2,0,param_3);
    iStack_8 = 0;
    for (iStack_120 = 0;
        iVar4 = CMFCToolBarComboBoxButton::GetCount((CMFCToolBarComboBoxButton *)aCStack_118),
        iStack_120 < iVar4; iStack_120 = iStack_120 + 1) {
      pcVar5 = CMFCToolBarComboBoxButton::GetItem
                         ((CMFCToolBarComboBoxButton *)aCStack_118,iStack_120);
      thunk_FUN_006c4270(pcVar5);
      iStack_8._0_1_ = 1;
      pCVar6 = (CObject *)
               CMFCToolBarComboBoxButton::GetItemData
                         ((CMFCToolBarComboBoxButton *)aCStack_118,iStack_120);
      AfxAssertValidObject
                (pCVar6,"f:\\dd\\vctools\\vc7libs\\ship\\atlmfc\\src\\mfc\\afxfontcombobox.cpp",
                 0x11d);
      uVar7 = thunk_FUN_006bf040();
      iVar4 = FindStringExact(0xffffffff,uVar7);
      if (iVar4 < 1) {
        this_00 = (CMFCFontInfo *)
                  CObject::operator_new
                            (0x14,
                             "f:\\dd\\vctools\\vc7libs\\ship\\atlmfc\\src\\mfc\\afxfontcombobox.cpp"
                             ,0x121);
        iStack_8._0_1_ = 2;
        if (this_00 == (CMFCFontInfo *)0x0) {
          uStack_144 = 0;
        }
        else {
          uStack_144 = CMFCFontInfo::CMFCFontInfo(this_00,(CMFCFontInfo *)pCVar6);
        }
        iStack_8._0_1_ = 1;
        uVar7 = thunk_FUN_006bf040();
        iVar4 = AddString(uVar7);
        CComboBox::SetItemData((CComboBox *)this,iVar4,uStack_144);
      }
      iStack_8 = (uint)iStack_8._1_3_ << 8;
      thunk_FUN_006bef70();
    }
    iStack_8 = 0xffffffff;
    CMFCToolBarFontComboBox::~CMFCToolBarFontComboBox(aCStack_118);
  }
  else {
    iVar4 = AfxAssertFailedLine("f:\\dd\\vctools\\vc7libs\\ship\\atlmfc\\src\\mfc\\afxfontcombobox.cpp"
                                ,0x110);
    if (iVar4 != 0) {
      pcVar1 = (code *)swi(3);
      iVar4 = (*pcVar1)();
      return iVar4;
    }
  }
  ExceptionList = pvStack_10;
  iVar4 = __security_check_cookie(uStack_14 ^ (uint)&stack0xfffffffc);
  return iVar4;
}



void __thiscall Serialize(CObject *param_1,CArchive *param_2)

{
  code *pcVar1;
  int iVar2;
  undefined4 uVar3;
  undefined1 auStack_2c [4];
  CDocument *pCStack_28;
  ulong uStack_24;
  CDocument *pCStack_20;
  CDocument *pCStack_1c;
  CDocument *pCStack_18;
  uint uStack_14;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_00b4f5a3;
  pvStack_10 = ExceptionList;
  ExceptionList = &pvStack_10;
  AfxAssertValidObject(param_1,"f:\\dd\\vctools\\vc7libs\\ship\\atlmfc\\include\\afxtempl.h",0x6d4);
  thunk_FUN_006c98c0(param_2);
  iVar2 = CArchive::IsStoring(param_2);
  if (iVar2 == 0) {
    uStack_24 = CArchive::ReadCount(param_2);
    while (uStack_24 != 0) {
      uStack_24 = uStack_24 - 1;
      _eh_vector_constructor_iterator_(auStack_2c,4,1,thunk_FUN_006bef10,thunk_FUN_006bef70);
      uStack_8 = 0;
      SerializeElements<>(param_2,&pCStack_28,1);
      SerializeElements<>(param_2,auStack_2c,1);
      uVar3 = thunk_FUN_006bf040();
      SetAt(pCStack_28,uVar3);
      uStack_8 = 0xffffffff;
      _eh_vector_destructor_iterator_(auStack_2c,4,1,thunk_FUN_006bef70);
    }
  }
  else {
    CArchive::WriteCount(param_2,*(ulong *)(param_1 + 0xc));
    if (*(int *)(param_1 + 0xc) != 0) {
      if ((*(int *)(param_1 + 4) == 0) &&
         (iVar2 = AfxAssertFailedLine("f:\\dd\\vctools\\vc7libs\\ship\\atlmfc\\include\\afxtempl.h",
                                      0x6de), iVar2 != 0)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      for (uStack_14 = 0; uStack_14 < *(uint *)(param_1 + 8); uStack_14 = uStack_14 + 1) {
        for (pCStack_18 = *(CDocument **)(*(int *)(param_1 + 4) + uStack_14 * 4);
            pCStack_18 != (CDocument *)0x0; pCStack_18 = *(CDocument **)((int)pCStack_18 + 8)) {
          pCStack_20 = pCStack_18;
          pCStack_1c = pCStack_18 + 4;
          SerializeElements<>(param_2,(CDocument **)pCStack_18,1);
          SerializeElements<>(param_2,pCStack_1c,1);
        }
      }
    }
  }
  ExceptionList = pvStack_10;
  return;
}



void __thiscall
CMFCRibbonGalleryIcon::OnClick(CMFCRibbonGalleryIcon *this,undefined4 param_2,undefined4 param_3)

{
  CMFCRibbonGalleryIcon *pCStack_10;
  CObject *pCStack_8;
  
  AfxAssertValidObject
            ((CObject *)this,
             "f:\\dd\\vctools\\vc7libs\\ship\\atlmfc\\src\\mfc\\afxribbonpalettegallery.cpp",0xa7);
  AfxAssertValidObject
            (*(CObject **)(this + 0x164),
             "f:\\dd\\vctools\\vc7libs\\ship\\atlmfc\\src\\mfc\\afxribbonpalettegallery.cpp",0xa8);
  pCStack_10 = this;
  if (*(int *)(this + 0x30) != 0) {
    pCStack_10 = *(CMFCRibbonGalleryIcon **)(this + 0x30);
  }
  (**(code **)(**(int **)(this + 0x164) + 0x1e8))(pCStack_10);
  if (-1 < *(int *)(this + 0x168)) {
    pCStack_8 = *(CObject **)(this + 0x38);
    if ((pCStack_8 == (CObject *)0x0) && (-1 < *(int *)(this + 0x168))) {
      pCStack_8 = *(CObject **)(*(int *)(this + 0x164) + 0x38);
    }
    if (pCStack_8 == (CObject *)0x0) {
      if (-1 < *(int *)(this + 0x168)) {
        CMFCRibbonBaseElement::NotifyCommand(*(CMFCRibbonBaseElement **)(this + 0x164),0);
      }
    }
    else {
      AfxAssertValidObject
                (pCStack_8,
                 "f:\\dd\\vctools\\vc7libs\\ship\\atlmfc\\src\\mfc\\afxribbonpalettegallery.cpp",
                 0xb9);
      if (*(int *)(*(int *)(this + 0x164) + 0x2c0) != 0) {
        CMFCRibbonGallery::SetNotifyParentID(*(CMFCRibbonGallery **)(this + 0x164),1);
      }
      *(undefined4 *)(*(int *)(this + 0x164) + 0x70) = 0;
      (**(code **)(**(int **)(this + 0x164) + 0x18c))(0);
      (**(code **)(*(int *)pCStack_8 + 0x454))(*(undefined4 *)(this + 0x164),param_2,param_3);
    }
  }
  return;
}



int __thiscall CScreenWnd::Create(CScreenWnd *this,CMFCColorDialog *param_1)

{
  code *pcVar1;
  uint uVar2;
  int iVar3;
  tagPOINT *ptVar4;
  HCURSOR pHVar5;
  undefined1 *puVar6;
  undefined4 uVar7;
  undefined1 *puVar8;
  HINSTANCE hInstance;
  undefined4 uVar9;
  LPCWSTR lpCursorName;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined1 auStack_28 [16];
  uint uStack_18;
  CWnd *pCStack_14;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
