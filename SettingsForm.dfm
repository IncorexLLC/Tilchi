object SettingsFormClass: TSettingsFormClass
  Left = 0
  Top = 0
  BorderIcons = []
  BorderStyle = bsNone
  Caption = #1053#1072#1089#1090#1088#1086#1081#1082#1080
  ClientHeight = 450
  ClientWidth = 500
  Color = clWhite
  Constraints.MinHeight = 450
  Constraints.MinWidth = 500
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'Tahoma'
  Font.Style = []
  OldCreateOrder = False
  PopupMode = pmAuto
  Position = poMainFormCenter
  ScreenSnap = True
  OnDestroy = FormDestroy
  OnShow = FormShow
  PixelsPerInch = 96
  TextHeight = 13
  object SettingsPanel: TRzPanel
    Left = 0
    Top = 0
    Width = 500
    Height = 450
    Align = alClient
    BorderInner = fsFlatRounded
    BorderOuter = fsNone
    Color = 16119543
    FlatColor = clHighlight
    TabOrder = 0
    object HeaderTopSpacer: TRzSpacer
      Left = 2
      Top = 35
      Width = 496
      Height = 6
      Align = alTop
      ExplicitLeft = 4
      ExplicitTop = 32
    end
    object MiddleSpacer: TRzSpacer
      Left = 80
      Top = 41
      Width = 6
      Height = 365
      Align = alLeft
      ExplicitLeft = 187
      ExplicitTop = 38
      ExplicitHeight = 368
    end
    object HeaderBottomSpacer: TRzSpacer
      Left = 2
      Top = 442
      Width = 496
      Height = 6
      Align = alBottom
      ExplicitLeft = 4
    end
    object LeftSpacer: TRzSpacer
      Left = 2
      Top = 41
      Width = 6
      Height = 365
      Align = alLeft
      ExplicitLeft = 4
      ExplicitTop = 38
      ExplicitHeight = 368
    end
    object RightSpacer: TRzSpacer
      Left = 492
      Top = 41
      Width = 6
      Height = 365
      Align = alRight
      ExplicitLeft = 498
    end
    object HeaderMiddleSpacer: TRzSpacer
      Left = 2
      Top = 406
      Width = 496
      Height = 6
      Align = alBottom
      ExplicitLeft = 4
    end
    object TopPanel: TRzPanel
      Left = 2
      Top = 2
      Width = 496
      Height = 33
      Margins.Left = 0
      Margins.Top = 0
      Margins.Right = 0
      Margins.Bottom = 0
      Align = alTop
      BorderInner = fsFlatRounded
      BorderOuter = fsNone
      BorderSides = [sdBottom]
      BorderColor = clWhite
      BorderShadow = clWhite
      Color = clWhite
      DockSite = True
      FlatColor = 11645361
      FlatColorAdjustment = 0
      GradientColorStyle = gcsCustom
      GradientColorStop = cl3DLight
      GridColor = clWhite
      GridStyle = gsDottedLines
      ShowGrid = True
      TabOrder = 0
      VisualStyle = vsGradient
      OnMouseDown = TopPanelMouseDown
      OnMouseMove = TopPanelMouseMove
      OnMouseUp = TopPanelMouseUp
      object SettingsLabel: TRzLabel
        AlignWithMargins = True
        Left = 47
        Top = 7
        Width = 60
        Height = 14
        Margins.Left = 0
        Margins.Top = 0
        Margins.Right = 6
        Margins.Bottom = 0
        Caption = #1053#1072#1089#1090#1088#1086#1081#1082#1080
        Font.Charset = DEFAULT_CHARSET
        Font.Color = clMenuHighlight
        Font.Height = -12
        Font.Name = 'Tahoma'
        Font.Style = []
        ParentFont = False
        ParentShowHint = False
        ShowHint = True
        Transparent = True
        Layout = tlCenter
        OnMouseDown = TopPanelMouseDown
        OnMouseMove = TopPanelMouseMove
        OnMouseUp = TopPanelMouseUp
        LightTextStyle = True
        TextStyle = tsRecessed
      end
      object SettingsImage: TImage
        Left = 6
        Top = 0
        Width = 32
        Height = 32
        AutoSize = True
        Center = True
        Picture.Data = {
          055449636F6E0000010001002020000001002000A81000001600000028000000
          2000000040000000010020000000000080100000000000000000000000000000
          0000000000000000000000000000000000000000000000000000000000000000
          0000000000000000000000000000000000000000000000000000000000000000
          0000000000000000000000000000000000000000000000000000000000000000
          0000000000000000000000000000000000000000000000000000000000000000
          0000000000000000000000000000000000000000000000000000000000000000
          0000000000000000000000000000000000000000000000000000000000000000
          0000000000000000000000000000000000000000000000000000000000000000
          0000000000000000000000000000000000000000000000000000000000000000
          0000000000000000000000000000000000000000000000000000000000000000
          0000000000000000000000000000000000000000000000000000000000000000
          000000000000000000000000000000000000000000000000000000123131326F
          212121540000000008080927141414470000000B000000000000000000000000
          0000000000000000000000000000000000000000000000000000000000000000
          0000000000000000000000000000000000000000000000000000000000000000
          000000000000000000000000000000000000000011111214949495C8EEEDEDFF
          B6B5B5DE05050554777777B7CBCACAFF737272B70F0F0F1C0000000000000000
          0000000000000000000000000000000000000000000000000000000000000000
          0000000000000000000000000000000000000000000000000000000000000000
          00000000000000000000000000000000000000000F0F0F15DFDFDFE6E6E6E6FF
          C3C3C4FFA5A4A6FCBCBBBCFED3D3D3FFDDDCDBFE272727310000000000000000
          0000000000000000000000000000000000000000000000000000000000000000
          0000000000000000000000000000000000000000000000000000000000000000
          000000000000000000000000030203012525255424242477A7A7A8E7C8C8C9FF
          E3E3E3FFF0F0F0FFE3E2E2FFC6C6C6FFB5B5B6F51F1F20680001013D02020206
          0000000000000000000000000000000000000000000000000000000000000000
          0000000000000000000000000000000000000000000000000000000000000000
          0000000000000000000000002929292FE3E3E3FBDDDDDDFFCBCBCCFFFFFFFFFF
          DBDBDBCE908F8F7FC9C9C9BAF2F2F1FFCFCFD0FFB9B9B9F7BEBEBDF743424352
          0000000000000000000000000000000000000000000000000000000000000000
          000000000000000000000000000000001717183E232324642222235D08080818
          0000000000000000000000006E6E6E74FFFFFEFFD9D9D9FFF3F2F2FFAEAEAEDD
          131313120000000000000000A9A8A8B2F0EFEFFFD8D7D8FFF2F0F0FF8180819A
          1010101300000000000000000000000000000000000000000000000000000000
          0A0A0A2B191918550000000A00000003A7A6A6D0DFDFDEFFDCDBDBFF4C4C4C69
          000000000808082D1616164C3B3B3B44C0C0C0C8DEDEDEFFF3F3F3FF737373A9
          00000006000000000000000154545484EFEEEEFFDFDFDFFFE7E6E6FDAAA9AA88
          69696A1500000000000000000000000000000000000000000202020240404172
          B3B2B2EBDBDBDBFB2B2B2C752526256ACFCECEF3E3E4E2FFE7E6E6FF848484C0
          0909094F747373B7CFCECEFF6B6B6BB0302F305ECECECEF4F6F5F5FF999999D8
          00000057000000330000004C767677C2FDFDFDFFDCDCDDFD3838394600000000
          0000000000000000000000000000000000000000000000000F10100EDCDBDDE5
          FFFFFFFFF5F5F4FFBEBFC0FFB3B1B4FEBABABCFFBBBBBCFFBBBABCFFBCBCBDFF
          AFAFB0FDCDCCCCFEDFDEDDFFDEDDDBFFBDBCBCF5DFDFDFFCEEEEEFFFE9E8E7FF
          808080D1313131A56D6D6DC6EEEDEDFDFBFBFBFFEEEDEDFF4F4F4F6900000000
          00000000000000000000000000000000000000020000001100000003A8A9A8B5
          E6E5E5FFAEACAFFFC4C6C6FFE2E1E2FFEDECEBFFE5E4E5FFE5E5E6FFE1E1E1FF
          D4D4D4FFBFBEC0FFBFBEBFFFCDCDCDFDCFCECEFADFDEDCFFF0EFEFFFFAF9F9FF
          F5F5F5FFE8E8E8FFFBFBFBFFFFFFFFFFFBFBFCFFFFFFFFFFD4D4D4C800000000
          000000000000000000000000000000004C4C4C6D69696AB2413F4193ABABAEF5
          BCB8BCFFE5E6E6FFFCFEFEFFFCFBFBFFF4F3F3FFDBDADBFFE1E1E1FFECECEBFF
          E9E9E8FFE3E2E2FFCCCCCCFFBBBBBDFFB5B5B6F6D1D0D0FFCDCCCCFECECFD0DE
          FAFBFAFCFDFCFDFFFAFAF9FFBBBBBBD0EEEEEFD0ECECECFD8585856900000000
          0000000000000000000000001B1A1A2BD1D2D2F1FFFFFFFFD9DADAFFC2C2C3FF
          F5F5F2FFFFFFFFFFFEFEFFFFFEFEFEFFFFFFFFFFFDFDFDFFFEFDFDFFF8F7F7FF
          ECEBEBFFE7E7E6FFE5E5E4FFD1D1D1FFC0C0C1FFD2D1D1FFD3D3D1FF9E9F9FC5
          DFDEDEF1F2F1F0FFB1B1B1E12C2C2C085959593D7E7E7F5B0000000000000000
          00000000000000000000000081818288FFFFFFFFE9EAEBFFBABABCFFECECEAFF
          FFFFFFFFFFFEFEFFFFFFFFFFDFE0E1D98E8F8F807171705377777761B0B0B0A7
          F2F1F1F7F1F0F0FFE6E6E5FFE5E4E3FFCFCDCFFFCACACBFFE1E0DEFFD6D5D4FF
          C6C5C7A9B6B5B7B59A9A9B8B0000000000000000000000000000000000000000
          0000000000000000000000002828281BCAC9C9CAD4D3D6FFD4D5D5FFFCFCFBFF
          FBFBFCFFFFFFFFFFA0A0A19B1212120800000000000000000000000000000000
          4444443ADADADAE4F1F0F0FFE7E6E6FFE1E1E0FFCBCACBFFDEDEDFFF6F6D6D79
          0000000000000000000000000000000000000000000000000000000000000000
          000000000000000000000001000000017474759AD3D3D4FFEDEDECFFF9F9F8FF
          FFFFFFFFAEADADBA040404030000000000000000000000000000000000000000
          000000003F3F3F43EAEAE9FBEDECEBFFE8E7E7FFD8D9D8FFCDCCCEFD16151625
          0000000000000000000000000000000000000000000000000000000000000000
          00000000050505052525253F585858A3B8B9B8F0D7D6D7FFF4F4F3FFFBFAFAFF
          EFF1F0FF35343548000000000000000000000000000000000000000000000000
          0000000000000000959595B1F7F7F8FFEEEEEBFFE2E1E0FFDCDEDEFF818381D1
          3C3C3A7C0E0D0D0E000000000000000000000000000000000000000000000000
          000000001A1A1A279B9B9CBCFFFFFFFFE6E6E5FFD8D8D8FFEBEBEAFFECECECFF
          C6C6C6E907070722000000000000000000000000000000000000000000000000
          00000000000000005454547CF5F5F5FFE2E2E3FFE0E0E0FFD9D7D8FFF4F2F3FF
          EFEEF0FF3E3E3F46000000000000000000000000000000000000000000000000
          000000001A191A29979796BFFBFAF9FFE1E1E2FFDCDBDCFFE5E4E4FFE5E6E6FF
          B5B5B6E40101012E000000000000000000000000000000000000000000000000
          00000000000000003F3E3E81F3F0F1FFDFDFDFFFDEE0E0FFD9DADAFFEAEAE8FF
          EAE8E8FF2D2F2E42000000000000000000000000000000000000000000000000
          0000000073737417B7B6B68AEFEFEEEEE6E4E4FEDDDDDDFFF0EEEEFFF7F7F5FF
          CECECFF80F10115E000000030000000000000000000000000000000000000000
          000000000000001C626262B1FCFCFCFFF5F6F4FFEDEDEBFFE3E2E3FFF4F3F1F9
          EAEAE9E08181822D000000000000000000000000000000000000000000000000
          000000000000000000000000252526069A9A98BFEBEDEDFFECECEBFFF2F2F1FF
          F1F0EEFF4F4E4EAC000000300000000300000000000000000000000000000000
          0000001302020260AEADAEE8FFFFFFFFF9F8F8FFEDEDEDFFEAE9EBFF50515149
          0000000000000000000000000000000000000000000000000000000000000000
          00000000000000000000000000000003777776B0F4F3F5FFE8E8E7FFEEEDECFF
          F7F7F6FFC7C6C9F61C1E1D91000000450000002100000012000000160000002F
          00000061656565C4FAF9FAFFFFFFFFFFFAFAFAFFECEDEDFFE5E2E3FF1D1C1D47
          0000000000000000000000000000000000000000000000000000000000000000
          0000000000000000000000006D6C6D73ECEAEAFFECEBEAFFE7E4E7FFECECEBFF
          EEEDECFFF7F8F6FFC5C3C3F53F4040B3060506810000006F0000007414151691
          7A797BD5F1F0F2FFFFFFFFFFFFFFFFFFF5F5F6FFEBEBEBFFFCFDFCFFCFCECEE1
          1818181B00000000000000000000000000000000000000000000000000000000
          0000000000000000000000009C9D9D8EE7E6E5FFE8E9E6FFEFEEEDFFEDEDEDFF
          EDEBEAFFEEEFEBFFF7F8F5FFEEEDEDFFBFC0BFF59C9B9EE7AAA9ABEEDADAD9FC
          FBFCFBFFFEFDFEFFFCFBFBFFFAFBFAFFF1F1F2FFFCFCFCFFFEFEFEFFEBEAEBE7
          5F5F5F4500000000000000000000000000000000000000000000000000000000
          000000000000000000000000CACACB04B2B1B1D5EBE9E9F1E1E0E2D8F4F5F6FF
          F3F1F1FFEDEDEBFFEDEAEBFFF3F2F1FFFAF9F6FFE7EBE8FFF6F4F3FFFDFDFDFF
          F8F7F7FFF7F8F7FFF9F8F8FFF4F5F5FFECECEDF3EEEDEDCDF4F4F4FF99999A81
          0000000000000000000000000000000000000000000000000000000000000000
          00000000000000000000000000000000D3D2D41AACADAE161F1F210BADADABCB
          FBFAFAFFF5F8F6FFF4F3F3FFF0EEEFFFF0EDEEFFE1DFE0FFE8E8E9FFF5F6F5FF
          F7F7F7FFF8F8F9FFF7F6F7FFFBFAFAFF5D5E5C6E00000000DADADA27D2D2D207
          0000000000000000000000000000000000000000000000000000000000000000
          00000000000000000000000000000000000000000000000000000000B2B1B0C3
          F1F2EFFFEEEEEDFFFDFAFBFFFEFFFEFFFCFCFBFFFDFDFCFFFCFCFCFFFEFDFDFF
          FEFFFFFFFAFAFBFFF7F7F6FFFFFFFFFF65656564000000000000000000000000
          0000000000000000000000000000000000000000000000000000000000000000
          00000000000000000000000000000000000000000000000071717107B6B6B6D5
          E9E8E7FFEBEBE8FFD5D4D4B6CBCBCBB8F1F2F3FDF4F4F4FFF9F8F9FFE4E4E4EC
          C0C2C299E8E7E8DDF9F9F9FFF3F4F2FFA2A2A292000000000000000000000000
          0000000000000000000000000000000000000000000000000000000000000000
          00000000000000000000000000000000000000000000000000000000D6D6D70A
          A9A8A897EBEBEAA47779780600000000C7C6C5CFF4F3F3FFFDFCFBFF7B797980
          00000000ACABAC40ECECEDB99291926900000000000000000000000000000000
          0000000000000000000000000000000000000000000000000000000000000000
          0000000000000000000000000000000000000000000000000000000000000000
          00000000000000000000000000000000C2C1C379EAEAEAC8EBEBECC6B4B4B441
          0000000000000000000000000000000000000000000000000000000000000000
          0000000000000000000000000000000000000000000000000000000000000000
          0000000000000000000000000000000000000000000000000000000000000000
          0000000000000000000000000000000000000000000000000000000000000000
          0000000000000000000000000000000000000000000000000000000000000000
          0000000000000000000000000000000000000000000000000000000000000000
          00000000FFFFFFFFFFFFFFFFFFFFF88FFFFFF007FFFFF007FFFFC001FFFFC001
          FFE1C0C0FE010080F8000003F8000003E0000003E0000003C0000007C000003F
          C01E01FF803F01FF007F807F007F807F007F807F003F007FC01E01FFC00001FF
          C00000FFC00000FFC00001FFE00009FFFC000FFFF8000FFFFC211FFFFFE1FFFF
          FFFFFFFF}
        OnMouseDown = TopPanelMouseDown
        OnMouseMove = TopPanelMouseMove
        OnMouseUp = TopPanelMouseUp
      end
      object CloseLabel: TRzLabel
        AlignWithMargins = True
        Left = 445
        Top = 0
        Width = 45
        Height = 29
        Cursor = 26000
        Hint = #1047#1072#1082#1088#1099#1090#1100' '#1085#1072#1089#1090#1086#1088#1081#1082#1080' (Esc)'
        Margins.Left = 0
        Margins.Top = 0
        Margins.Right = 6
        Margins.Bottom = 0
        Align = alRight
        Alignment = taCenter
        Caption = #1047#1072#1082#1088#1099#1090#1100
        Font.Charset = DEFAULT_CHARSET
        Font.Color = clMenuHighlight
        Font.Height = -12
        Font.Name = 'Tahoma'
        Font.Style = []
        ParentFont = False
        ParentShowHint = False
        ShowHint = True
        Transparent = True
        Layout = tlCenter
        OnClick = CloseLabelClick
        OnMouseEnter = CloseLabelMouseEnter
        OnMouseLeave = GeneralMenuImageMouseLeave
        LightTextStyle = True
        TextStyle = tsRecessed
        ExplicitHeight = 14
      end
      object CloseImage: TImage
        Left = 426
        Top = 7
        Width = 16
        Height = 16
        Margins.Right = 0
        Picture.Data = {
          055449636F6E0000010001001010000001002000680400001600000028000000
          1000000020000000010020000000000040040000000000000000000000000000
          000000000000000000000000000000000000000007078B4607078B8D07078BC7
          07078BF007078BF007078BC707078B8D07078B46000000000000000000000000
          00000000000000000000000007078B2007078B8C3030A9FE6868C8FF9696DDFF
          AAAAE6FFA0A0E3FF9090DBFF6868C8FF3030A9FE07078B8C07078B2000000000
          000000000000000007078B2009099FF35656C1FF9697E1FF7676D8FF4343CAFF
          1E1EBFFF1E1EBFFF4343CAFF7676D8FF9797E1FF5656C1FF0A0A9CF307078B20
          000000000000000007078B8C5556C3FF9494E3FF4D4DACFF161692FF161692FF
          0F0FBCFF0F0FBBFF0F0FBBFF161692FF4D4DACFF9898CFFF5656C1FF07078B8C
          0000000007078B462F2FACFE9595E4FF4646D2FFFFFFFFFFF6F6FDFF161692FF
          0E0EBFFF0E0EBEFF161692FFFFFFFFFFFFFFFFFF4D4DACFF9797E1FF3030A9FE
          07078B4607078B8D6767CDFF7272E0FF0C0CC8FFF6F6FDFFFFFFFFFFD0D0E9FF
          4242A7FF3737A1FFB2B2DBFFFDFDFEFFFFFFFFFF161692FF7675D9FF6868C8FF
          07078B8D07078BC78B8BE2FF3B3BD9FF0A0BCEFF0A0BCCFFD2D2F5FFFFFFFFFF
          BEBEE1FFA6A6D6FFFFFFFFFFCECEE8FF161692FF161692FF4141CDFF9394DEFF
          07078BC707078BF09798ECFF1616D7FF0909D3FF1D1DD5FF3737D9FFA8A8D6FF
          FFFFFFFFFFFFFFFFC0C0E2FF5050ADFF1B1BCAFF0D0DC5FF1B1CC8FFA9A9E9FF
          07078BF007078BF0A5A5F0FF1515DBFF0708D8FF0808D6FF3737A1FFB0B0DAFF
          FFFFFFFFFFFFFFFFCBCBE7FF4444A7FF0B0BCCFF0B0CC9FF1B1BCBFFB1B1ECFF
          07078BF007078BC79291E9FF3B3BE6FF0606DDFF161692FFD9D9EDFFFFFFFFFF
          BABADFFFA7A7D6FFFFFFFFFFDBDBEEFF161692FF0A0ACFFF403FD8FF9595E3FF
          07078BC707078B8D6465D5FF7070EFFF0505E2FFFAFAFEFFFFFFFFFFDEDEF0FF
          4040A6FF3030E0FFC6C6F6FFFFFFFFFFFEFEFFFF161692FF7272E6FF6667CFFF
          07078B8D07078B462D2DB2FE9292F2FF3F3FECFFFFFFFFFFFBFBFFFF161692FF
          0808E1FF0505E0FF0606DEFFFFFFFFFFFFFFFFFF4D4DACFF9393ECFF2E2EAEFE
          07078B460000000007078B8C5151D3FF8F8FF5FF3F3EEDFF0304E8FF0404E7FF
          0404E6FF0405E4FF0404E3FF0506E1FF4140E7FF9191F1FF5252CEFF07078B8C
          000000000000000007078B200707AAF35151D3FF9191F4FF6F6FF3FF3838EEFF
          1213EAFF1212E8FF3939ECFF6F6FF0FF9292F2FF5152D0FF0707A6F307078B20
          00000000000000000000000007078B2007078B8C2D2DB2FE6464D8FF9393EDFF
          A8A8F6FF9F9FF5FF8E8EECFF6464D7FF2D2DB2FE07078B8C07078B2000000000
          000000000000000000000000000000000000000007078B4607078B8D07078BC7
          07078BF007078BF007078BC707078B8D07078B46000000000000000000000000
          00000000F00F0000C00300008001000080010000000000000000000000000000
          00000000000000000000000000000000000000008001000080010000C0030000
          F00F0000}
        OnClick = CloseLabelClick
        OnMouseEnter = CloseLabelMouseEnter
        OnMouseLeave = GeneralMenuImageMouseLeave
      end
    end
    object RightPanel: TRzPanel
      Left = 86
      Top = 41
      Width = 406
      Height = 365
      Align = alClient
      BorderOuter = fsNone
      Color = clWhite
      TabOrder = 1
      object DesignPanel: TRzPanel
        Left = 0
        Top = 33
        Width = 406
        Height = 332
        Align = alClient
        BorderInner = fsFlatRounded
        BorderOuter = fsNone
        Color = 16119543
        TabOrder = 2
        Visible = False
        object RzGroupBox2: TRzGroupBox
          Left = 17
          Top = 3
          Width = 371
          Caption = #1057#1087#1080#1089#1086#1082' '#1089#1083#1086#1074
          Color = 16119543
          TabOrder = 0
          Transparent = True
          object ListSizeLabel: TRzLabel
            Left = 248
            Top = 79
            Width = 6
            Height = 13
            Caption = '9'
            Transparent = True
          end
          object RzLabel7: TRzLabel
            Left = 274
            Top = 79
            Width = 30
            Height = 13
            Caption = #1062#1074#1077#1090':'
            Transparent = True
          end
          object RzLabel3: TRzLabel
            Left = 201
            Top = 79
            Width = 39
            Height = 13
            Caption = #1056#1072#1079#1084#1077#1088':'
            Transparent = True
          end
          object RzGroupBox1: TRzGroupBox
            Left = 13
            Top = 15
            Width = 344
            Height = 55
            Caption = #1064#1088#1080#1092#1090
            Color = 16119543
            TabOrder = 0
            Transparent = True
            object ListFontLabel: TRzLabel
              Left = 9
              Top = 17
              Width = 44
              Height = 14
              Caption = 'Tahoma'
              Font.Charset = RUSSIAN_CHARSET
              Font.Color = clBlack
              Font.Height = -12
              Font.Name = 'Tahoma'
              Font.Style = []
              ParentFont = False
              Transparent = True
            end
          end
          object ListFontPanel: TRzPanel
            Left = 13
            Top = 76
            Width = 79
            Height = 19
            Cursor = 26000
            BorderInner = fsFlatRounded
            BorderOuter = fsNone
            BorderColor = clInactiveCaptionText
            BorderShadow = clWhite
            Caption = #1048#1079#1084#1077#1085#1080#1090#1100
            Color = clWhite
            FlatColor = 11645361
            FlatColorAdjustment = 0
            Font.Charset = DEFAULT_CHARSET
            Font.Color = clMenuHighlight
            Font.Height = -11
            Font.Name = 'Tahoma'
            Font.Style = [fsBold]
            GradientColorStop = clWhite
            GridColor = clWhite
            ParentFont = False
            TabOrder = 1
            VisualStyle = vsGradient
            OnClick = ListFontPanelClick
          end
          object ListColorPanel: TRzPanel
            Left = 311
            Top = 76
            Width = 46
            Height = 19
            BorderInner = fsFlatRounded
            BorderOuter = fsNone
            Color = clBlack
            TabOrder = 2
            OnClick = ListColorPanelClick
          end
          object DefaultListFontPanel: TRzPanel
            Left = 102
            Top = 76
            Width = 80
            Height = 19
            Cursor = 26000
            BorderInner = fsFlatRounded
            BorderOuter = fsNone
            BorderColor = clInactiveCaptionText
            BorderShadow = clWhite
            Caption = #1059#1084#1086#1083#1095#1072#1085#1080#1103
            Color = clWhite
            FlatColor = 11645361
            FlatColorAdjustment = 0
            Font.Charset = DEFAULT_CHARSET
            Font.Color = clMenuHighlight
            Font.Height = -11
            Font.Name = 'Tahoma'
            Font.Style = [fsBold]
            GradientColorStop = clWhite
            GridColor = clWhite
            ParentFont = False
            TabOrder = 3
            VisualStyle = vsGradient
            OnClick = DefaultListFontPanelClick
          end
        end
        object RzGroupBox3: TRzGroupBox
          Left = 17
          Top = 111
          Width = 371
          Caption = #1057#1090#1088#1086#1082#1072' '#1087#1086#1080#1089#1082#1072
          Color = 16119543
          TabOrder = 1
          Transparent = True
          object EditSizeLabel: TRzLabel
            Left = 248
            Top = 79
            Width = 6
            Height = 13
            Caption = '9'
            Transparent = True
          end
          object RzLabel5: TRzLabel
            Left = 274
            Top = 79
            Width = 30
            Height = 13
            Caption = #1062#1074#1077#1090':'
            Transparent = True
          end
          object RzLabel6: TRzLabel
            Left = 201
            Top = 79
            Width = 39
            Height = 13
            Caption = #1056#1072#1079#1084#1077#1088':'
            Transparent = True
          end
          object RzGroupBox4: TRzGroupBox
            Left = 13
            Top = 15
            Width = 344
            Height = 55
            Caption = #1064#1088#1080#1092#1090
            Color = 16119543
            TabOrder = 0
            Transparent = True
            object EditFontLabel: TRzLabel
              Left = 9
              Top = 17
              Width = 44
              Height = 14
              Caption = 'Tahoma'
              Font.Charset = RUSSIAN_CHARSET
              Font.Color = clBlack
              Font.Height = -12
              Font.Name = 'Tahoma'
              Font.Style = []
              ParentFont = False
              Transparent = True
            end
          end
          object EditFontPanel: TRzPanel
            Left = 13
            Top = 76
            Width = 79
            Height = 19
            Cursor = 26000
            BorderInner = fsFlatRounded
            BorderOuter = fsNone
            BorderColor = clInactiveCaptionText
            BorderShadow = clWhite
            Caption = #1048#1079#1084#1077#1085#1080#1090#1100
            Color = clWhite
            FlatColor = 11645361
            FlatColorAdjustment = 0
            Font.Charset = DEFAULT_CHARSET
            Font.Color = clMenuHighlight
            Font.Height = -11
            Font.Name = 'Tahoma'
            Font.Style = [fsBold]
            GradientColorStop = clWhite
            GridColor = clWhite
            ParentFont = False
            TabOrder = 1
            VisualStyle = vsGradient
            OnClick = EditFontPanelClick
          end
          object EditColorPanel: TRzPanel
            Left = 311
            Top = 76
            Width = 46
            Height = 19
            BorderInner = fsFlatRounded
            BorderOuter = fsNone
            Color = clBlack
            TabOrder = 2
            OnClick = EditColorPanelClick
          end
          object DefaultEditFontPanel: TRzPanel
            Left = 102
            Top = 76
            Width = 80
            Height = 19
            Cursor = 26000
            BorderInner = fsFlatRounded
            BorderOuter = fsNone
            BorderColor = clInactiveCaptionText
            BorderShadow = clWhite
            Caption = #1059#1084#1086#1083#1095#1072#1085#1080#1103
            Color = clWhite
            FlatColor = 11645361
            FlatColorAdjustment = 0
            Font.Charset = DEFAULT_CHARSET
            Font.Color = clMenuHighlight
            Font.Height = -11
            Font.Name = 'Tahoma'
            Font.Style = [fsBold]
            GradientColorStop = clWhite
            GridColor = clWhite
            ParentFont = False
            TabOrder = 3
            VisualStyle = vsGradient
            OnClick = DefaultEditFontPanelClick
          end
        end
        object RzGroupBox7: TRzGroupBox
          Left = 17
          Top = 219
          Width = 371
          Caption = #1057#1090#1072#1090#1100#1103
          Color = 16119543
          TabOrder = 2
          Transparent = True
          object CardSizeLabel: TRzLabel
            Left = 248
            Top = 79
            Width = 12
            Height = 13
            Caption = '10'
            Transparent = True
          end
          object RzLabel11: TRzLabel
            Left = 201
            Top = 79
            Width = 39
            Height = 13
            Caption = #1056#1072#1079#1084#1077#1088':'
            Transparent = True
          end
          object RzGroupBox8: TRzGroupBox
            Left = 13
            Top = 15
            Width = 344
            Height = 55
            Caption = #1064#1088#1080#1092#1090
            Color = 16119543
            TabOrder = 0
            Transparent = True
            object CardFontLabel: TRzLabel
              Left = 9
              Top = 17
              Width = 26
              Height = 16
              Caption = 'Arial'
              Font.Charset = RUSSIAN_CHARSET
              Font.Color = clBlack
              Font.Height = -13
              Font.Name = 'Arial'
              Font.Style = []
              ParentFont = False
              Transparent = True
            end
          end
          object CardFontPanel: TRzPanel
            Left = 13
            Top = 76
            Width = 79
            Height = 19
            Cursor = 26000
            BorderInner = fsFlatRounded
            BorderOuter = fsNone
            BorderColor = clInactiveCaptionText
            BorderShadow = clWhite
            Caption = #1048#1079#1084#1077#1085#1080#1090#1100
            Color = clWhite
            FlatColor = 11645361
            FlatColorAdjustment = 0
            Font.Charset = DEFAULT_CHARSET
            Font.Color = clMenuHighlight
            Font.Height = -11
            Font.Name = 'Tahoma'
            Font.Style = [fsBold]
            GradientColorStop = clWhite
            GridColor = clWhite
            ParentFont = False
            TabOrder = 1
            VisualStyle = vsGradient
            OnClick = CardFontPanelClick
          end
          object DefaultCardFontPanel: TRzPanel
            Left = 102
            Top = 76
            Width = 80
            Height = 19
            Cursor = 26000
            BorderInner = fsFlatRounded
            BorderOuter = fsNone
            BorderColor = clInactiveCaptionText
            BorderShadow = clWhite
            Caption = #1059#1084#1086#1083#1095#1072#1085#1080#1103
            Color = clWhite
            FlatColor = 11645361
            FlatColorAdjustment = 0
            Font.Charset = DEFAULT_CHARSET
            Font.Color = clMenuHighlight
            Font.Height = -11
            Font.Name = 'Tahoma'
            Font.Style = [fsBold]
            GradientColorStop = clWhite
            GridColor = clWhite
            ParentFont = False
            TabOrder = 2
            VisualStyle = vsGradient
            OnClick = DefaultCardFontPanelClick
          end
        end
      end
      object HotKeyPanel: TRzPanel
        Left = 0
        Top = 33
        Width = 406
        Height = 332
        Align = alClient
        BorderInner = fsFlatRounded
        BorderOuter = fsNone
        Color = 16119543
        TabOrder = 3
        object RzGroupBox5: TRzGroupBox
          Left = 17
          Top = 12
          Width = 371
          Height = 83
          Caption = #1047#1072#1087#1091#1089#1082' '#1089#1080#1089#1090#1077#1084#1099
          Color = 16119543
          TabOrder = 0
          Transparent = True
          object AltCheckBox: TRzCheckBox
            Left = 15
            Top = 25
            Width = 338
            Height = 17
            Caption = #1048#1089#1087#1086#1083#1100#1079#1086#1074#1072#1090#1100' Ctrl+Alt+T'
            Checked = True
            HighlightColor = 2203937
            HotTrack = True
            State = cbChecked
            TabOrder = 0
            Transparent = True
            OnClick = LayoutCheckBoxClick
          end
          object ShiftCheckBox: TRzCheckBox
            Left = 15
            Top = 52
            Width = 338
            Height = 17
            Caption = #1048#1089#1087#1086#1083#1100#1079#1086#1074#1072#1090#1100' Ctrl+Shift+T'
            Checked = True
            HighlightColor = 2203937
            HotTrack = True
            State = cbChecked
            TabOrder = 1
            Transparent = True
            OnClick = LayoutCheckBoxClick
          end
        end
        object RzGroupBox9: TRzGroupBox
          Left = 17
          Top = 114
          Width = 371
          Height = 55
          Caption = #1042#1074#1086#1076' '#1089#1080#1084#1074#1086#1083#1086#1074
          Color = 16119543
          TabOrder = 1
          Transparent = True
          object UseAltCheckBox: TRzCheckBox
            Left = 15
            Top = 25
            Width = 338
            Height = 17
            Caption = #1048#1089#1087#1086#1083#1100#1079#1086#1074#1072#1090#1100' '#1089#1086#1095#1077#1090#1072#1085#1080#1077' '#1082#1083#1072#1074#1080#1096' '#1089' Alt'
            Checked = True
            HighlightColor = 2203937
            HotTrack = True
            State = cbChecked
            TabOrder = 0
            Transparent = True
            OnClick = LayoutCheckBoxClick
          end
        end
      end
      object GeneralPanel: TRzPanel
        Left = 0
        Top = 33
        Width = 406
        Height = 332
        Align = alClient
        BorderInner = fsFlatRounded
        BorderOuter = fsNone
        Color = 16119543
        TabOrder = 1
        object RzGroupBox6: TRzGroupBox
          Left = 17
          Top = 12
          Width = 371
          Height = 111
          Caption = #1053#1072#1089#1090#1088#1086#1081#1082#1072' '#1087#1072#1085#1077#1083#1077#1081
          Color = 16119543
          TabOrder = 0
          Transparent = True
          object ServicePanelCheckBox: TRzCheckBox
            Left = 15
            Top = 23
            Width = 338
            Height = 17
            Caption = #1054#1090#1086#1073#1088#1072#1078#1072#1090#1100' '#1087#1072#1085#1077#1083#1100' '#1089#1077#1088#1074#1080#1089#1072
            Checked = True
            FrameColor = 8409372
            HighlightColor = 2203937
            HotTrack = True
            State = cbChecked
            TabOrder = 0
            Transparent = True
            OnClick = LayoutCheckBoxClick
          end
          object InformationPanelCheckBox: TRzCheckBox
            Left = 15
            Top = 81
            Width = 338
            Height = 17
            Caption = #1054#1090#1086#1073#1088#1072#1078#1072#1090#1100' '#1089#1086#1074#1077#1090#1099' '#1087#1086' '#1080#1089#1087#1086#1083#1100#1079#1086#1074#1072#1085#1080#1102' '#1089#1080#1089#1090#1077#1084#1099
            Checked = True
            FrameColor = 8409372
            HighlightColor = 2203937
            HotTrack = True
            State = cbChecked
            TabOrder = 2
            Transparent = True
            OnClick = LayoutCheckBoxClick
          end
          object FindPanelCheckBox: TRzCheckBox
            Left = 15
            Top = 52
            Width = 338
            Height = 17
            Caption = #1054#1090#1086#1073#1088#1072#1078#1072#1090#1100' '#1087#1072#1085#1077#1083#1100' '#1087#1086#1080#1089#1082#1072
            Checked = True
            FrameColor = 8409372
            HighlightColor = 2203937
            HotTrack = True
            State = cbChecked
            TabOrder = 1
            Transparent = True
            OnClick = LayoutCheckBoxClick
          end
        end
      end
      object RightTopPanel: TRzPanel
        Left = 0
        Top = 0
        Width = 406
        Height = 33
        Margins.Left = 0
        Margins.Top = 0
        Margins.Right = 0
        Margins.Bottom = 0
        Align = alTop
        BorderInner = fsFlatRounded
        BorderOuter = fsNone
        BorderColor = clWhite
        BorderShadow = clWhite
        Color = clWhite
        DockSite = True
        FlatColor = 11645361
        FlatColorAdjustment = 0
        GradientColorStyle = gcsCustom
        GradientColorStop = cl3DLight
        GridColor = clWhite
        GridStyle = gsDottedLines
        TabOrder = 0
        VisualStyle = vsGradient
        object CaptionLabel: TRzLabel
          AlignWithMargins = True
          Left = 47
          Top = 9
          Width = 38
          Height = 13
          Margins.Left = 0
          Margins.Top = 0
          Margins.Right = 6
          Margins.Bottom = 0
          Caption = #1054#1073#1097#1080#1077
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clMenuHighlight
          Font.Height = -11
          Font.Name = 'Tahoma'
          Font.Style = [fsBold]
          ParentFont = False
          ParentShowHint = False
          ShowHint = True
          Transparent = True
          Layout = tlCenter
          LightTextStyle = True
          TextStyle = tsRecessed
        end
        object CaptionImage: TImage
          Left = 6
          Top = 0
          Width = 32
          Height = 32
          Margins.Top = 0
          AutoSize = True
          Picture.Data = {
            055449636F6E0000010001002020000001002000A81000001600000028000000
            2000000040000000010020000000000080100000000000000000000000000000
            0000000000000000000000000000000000000000000000000000000000000000
            0000000000000002000000020000000000000000000000000000000000000000
            0000000000000000000000000000000000000000000000000000000000000000
            0000000000000000000000000000000000000000000000000000000000000000
            0000000000000000000000000000000000000000000000000000000000000000
            0000002F292928972A29299A0000003900000000000000000000000000000000
            0000000000000000000000000000000000000000000000000000000000000000
            0000000000000002000000420202027D0101015F000000170000000000000000
            0000000000000000000000000000000000000000000000000000000003030326
            5F5D5CCE999694FA989593F36B6A68E105050540000000000000000000000000
            0000000000000000000000000000000000000000000000000000000000000000
            000000000000001C070707DF0D0D0DFF151515FE0F0F0FB70000002300000000
            000000000000000000000000000000000000000000000000000000003A393979
            9F9C9AFF1D1D1C4313131321989593F362605FD7000000280000000000000000
            0000000000000000000000000000000000000000000000000000000000000000
            000000000101012D090909FC101010FF252525FF373737FF1D1D1DA600000009
            000000000000000000000000000000000000000000000000000000003C3B3A60
            A19E9CFF100F0F6C03030253888583EDAFABA9FF474645B80000001A00000000
            0000000000000000000000000000000000000000000000000000000000000000
            00000000020202590A0A0AFE1B1B1BFF2F2F2FFF444444FF535353FF0D0D0D38
            0000000000000000000000000000000000000000000000000000000003030307
            7A7877B6969290FF827F7DF7B0ADACFFD0CECDFFABA8A6FF3C3B3AAB00000011
            0000000000000000000000000000000000000000000000000000000000000000
            0000002E080808D41A1A1AFF2B2B2BFF434343FF515151FF474747B509090912
            0000000000000000000000000000000000000000000000000000000000000000
            0E0E0E14898785C8B3B0AEFFBFBCBAFFCBC9C7FFCFCCCAFFA8A5A3FF2929288E
            0000000500000000000000000000000000000000000000000000000000000021
            090909C7181818FF292929FF3D3D3DFF505050FF383838B00000000600000000
            0000000000000000000000000000000000000000000000000000000000000000
            000000000D0D0D15848280C6ADAAA8FFBCB9B7FFCCC9C8FFD0CECCFF9A9896FC
            1716166B00000000000000000000000000000000000000000000001C080808B8
            1A1A1AFF2A2A2AFF3D3D3DFF4F4F4FFF464646DB050505150000000000000000
            0000000000000000000000000000000000000000000000000000000000000000
            00000000000000000E0E0E16868483C9AEABA9FFBCB9B8FFCBC9C7FFCFCCCAFF
            898584F00909094D00000000000000000000000000000012070707AC171717FF
            262626FF383838FF4A4A4AFF4E4E4EF61212123B000000000000000000000000
            0000000000000000000000000000000000000000000000000000000000000000
            000000000000000000000000101010188A8786CCAFABA9FFBBB8B7FFCCC9C8FF
            CDC9C8FF716F6DDE0000003100000000000000140606069D141414FF202020FF
            333333FF484848FF525252FB1F1F1F5E00000000000000000000000000000000
            0000000000000000000000000000000000000000000000000000000000000000
            000000000000000000000000000000001211121B8D8A88CFAEABA9FFBBB8B6FF
            CDCBCAFFC9C6C4FF575655C100000031060606A2131313FF212121FF303030FF
            494949FF535353FF2323236F0000000000000000000000000000000000000000
            0000000000000000000000000000000000000000000000000000000000000000
            00000000000000000000000000000000000000001414141D888685C5AFACA9FF
            BCB9B7FFCFCCCBFFC2BEBDFF3E3D3CDA040404FF1D1D1DFF2C2C2CFF434343FF
            505050FF31313193000000000000000000000000000000000000000000000000
            0000000000000000000000000000000000000000000000000000000000000000
            0000000000000000000000000000000000000000000000000B0B0B12858381C1
            B0ADABFFBCB9B8FFD0CECDFFB5B2B0FF313030FF202020FF414141FF525252FF
            3B3B3BB301010105000000000000000000000000000000000000000000000000
            0000000000000000000000000000000000000000000000000000000000000000
            000000000000000000000000000000000000000000000000000000000D0D0D13
            878583C0B0ACABFFBDBAB9FFD1CFCEFFAAA8A6FF3D3C3CFF484848FF414141CD
            0505051200000000000000000000000000000000000000000000000000000000
            0000000000000000000000000000000000000000000000000000000000000000
            0000000000000000000000000000000000000000000000000000000000000000
            0D0D0D48898685FAAFACAAFFBFBBBAFFD2D0CFFFA6A3A2FF3A3939E309090A24
            0000000000000000000000000000000000000000000000000000000000000000
            0000000000000000000000000000000000000000000000000000000000000000
            0000000000000000000000000000000000000000000000000000000000000011
            040400BB1D1E1BFF8E8B8BFFAEAAA8FFBFBDBBFFD4D1D0FF8A8786E201010139
            0000000000000000000000000000000000000000000000000000000000000000
            0000000000000000000000000000000000000000000000000000000000000000
            0000000000000000000000000000000000000000000000000000000002021371
            10103FFF1C1C22FF3C3C35FF9C9A99FFADAAA8FFBEBCBAFFD4D2D0FF6E6D6CD0
            0000002400000000000000000000000000000000000000000000000000000000
            0000000000000000000000000000000000000000000000000000000000000000
            000000000000000000000000000000000000000000000000000002390C0C59E7
            2020ADFF3131B5FF4B4B6CFF585754F3949290DDAEABA8FFC1BEBCFFD1CFCEFF
            555353B700000021000000000000000000000000000000000000000000000000
            0000000000000000000000000000000000000000000000000000000000000000
            00000000000000000000000000000000000000000000002208083FC71D1D9FFF
            2D2DC7FF3636E7FF3535B6E714151450141413188E8C8AC8AFABA9FFC2BFBEFF
            C2BFBDFF6A6866CE16161569000000240000000B0000002A0000000900000000
            0000000000000000000000000000000000000000000000000000000000000000
            000000000000000000000000000000000000000D06062EA9191994FF2A2AC1FF
            3737DFFF2C2CBBDC05051F29000000000000000014141419959391D4B0ADAAFF
            BCBAB7FFC0BDBBFFAEACAAF97C7B7AD93A3939A6575555D70D0D0C4900000000
            000000000000000000000000000000000000000A000000020000000000000000
            0000000000000000000000000000000503031C89161687FF2828BCFF3333D9FF
            3030C1E205051A28000000000000000000000000000000002B2B2B43C1BFBDFD
            C5C2C1FF525150B282807FE8BCBAB9FFBEBBBAFFC6C2C0FF4E4C4C8200000000
            00000000000000000000000005050444373635B1141413790000000C00000000
            00000000000000000000001800001484111179FD2626B6FF3131D2FF3535D3F4
            0909273A0000000000000000000000000000000000000000000000059D9B9AD3
            A29F9EF3373736B2AAA7A6FF3E3D3D9E8A8887D4C8C6C4FF2C2B2B8300000003
            00000000000000000101011F676563DBA8A5A2FF858280FF1918187300000000
            00000001000000305B5956BE605F83FF1A1A9FFF2C2CCEFF3939E2FF13134F6D
            0000000000000000000000000000000000000000000000000000000061605F88
            B7B4B2FB949291F4757372D728282789C1BFBDFEADAAA8FF918E8BF61413135E
            000000000000000024242357CCCAC7FFB9B6B4FFA6A2A0FF52504FE415141484
            2C2B2B99686664D8B7B3B0FFC2BEB6FF8381ACFF3434DAFF22229DC400000003
            000000000000000000000000000000000000000000000000000000002A292946
            CBC8C7FFC8C5C4FF949291EC959392EBC0BDBCFCA4A2A1FFC7C4C2FF7D7A79DE
            0000001F000000001A1A1A27BBBAB9CEE7E6E4FFBFBBBAFF7D7B79FF7D7A78FF
            A4A09EFFACA7A5FFA9A5A2FFABA7A5FFBDB9ACFF8E8BBEFF1010376100000000
            0000000000000000000000000000000000000000000000000000000008080819
            B2AFAEEBC7C4C3FFCAC6C5FFD4D1D0FF656463963938384DA6A4A3CDD1CECCFF
            2C2B2B6B00000000000000000A0A0A0F50504F5B848281BE9E9C9AFFAEABA9FF
            A5A29FFF9E9B98FFA19D9BFFA6A29FFFADA9A7FFABA89FF01414102800000000
            0000000000000000000000000000000000000000000000000000000000000002
            939191C6CECBC9FFC6C4C2FFC6C4C2FF1E1E1E47000000000707070664636270
            4E4D4D650000000000000000000000000000000010100F2DD6D4D3FFDDDBD9FF
            B9B6B4FFAAA7A5FF9F9C9AFF9E9B99FFAEAAA7FF4F4D4C830000000000000000
            0000000000000000000000000000000000000000000000000000000000000000
            6C6B6B92D6D4D2FFC7C5C3FFCDCAC9FF302E2F85000000120000000000000000
            0000000000000000000000000000000000000000000000005D5D5C67E8E7E6F0
            ECEAE8FFC3C0BEFFB3B0AEFFA6A2A0FF9E9B98FF10100F500000000000000000
            0000000000000005000000210808082B01010103000000000000000000000000
            1D1D1C28C4C2C1EDD7D4D4FFD2CFCEFFBDB9B8FF686766C61A1A1A6501010110
            000000000000000000000000000000000000000000000000000000002524242B
            ACABAAB3F4F3F1FFD1CECCFFBBB9B7FFB1AEACFF63615FCE0F0F0F6601010147
            12111169403F3DA85C5B59B82423233E01010101000000000000000000000000
            000000002C2B2B33918F8EA6B2AFAED3BFBCBBE4C4C0BFE4918F8DBA18181827
            0000000000000000000000000000000000000000000000000000000000000000
            000000016C6C6B73E6E4E3F5E5E3E1FFCDCAC8FFC1BDBBFFA5A19FFF92908DFF
            A29F9DFF858281BB2322212C0000000000000000000000000000000000000000
            000000000000000000000000030303040B0B0B0C060606080000000000000000
            0000000000000000000000000000000000000000000000000000000000000000
            00000000000000002F2E2E339F9E9DA3C8C7C6D9BEBCBAE1A3A19FCF74727099
            3433334300000000000000000000000000000000000000000000000000000000
            0000000000000000000000000000000000000000000000000000000000000000
            0000000000000000000000000000000000000000000000000000000000000000
            00000000000000000000000000000000060606080C0C0C0C0000000200000000
            0000000000000000000000000000000000000000000000000000000000000000
            0000000000000000000000000000000000000000000000000000000000000000
            00000000FF3FFFFFFE1FFF07FC0FFF03FC07FF01FC03FF01FC01FE01FE00FC03
            FF00F807FF80700FFFC0201FFFE0003FFFF0007FFFF8007FFFFC00FFFFFE01FF
            FFFC01FFFFFC00FFFFF8007FFFF00003FFE03003E7C07803C380F8018201FC01
            8001FC008003FC00C003FC08F007FE07F8070E01FC000F01FE003FC7FF80FFFF
            FFE3FFFF}
        end
      end
    end
    object BottomPanel: TRzPanel
      Left = 2
      Top = 412
      Width = 496
      Height = 30
      Align = alBottom
      BorderOuter = fsNone
      Color = clWhite
      TabOrder = 2
      object BottomLeftSpacer: TRzSpacer
        Left = 0
        Top = 0
        Width = 6
        Height = 30
        Align = alLeft
        ExplicitLeft = -6
        ExplicitTop = 100
        ExplicitHeight = 361
      end
      object ButtonsPanel: TRzPanel
        Left = 6
        Top = 0
        Width = 490
        Height = 30
        Align = alClient
        BorderOuter = fsNone
        Color = 16119543
        TabOrder = 0
        object RzSpacer1: TRzSpacer
          Left = 484
          Top = 0
          Width = 6
          Height = 30
          Align = alRight
          ExplicitLeft = -6
          ExplicitTop = 100
          ExplicitHeight = 361
        end
        object DefaultsButton: TRzButton
          AlignWithMargins = True
          Left = 0
          Top = 3
          Margins.Left = 0
          Margins.Right = 0
          Margins.Bottom = 2
          FrameColor = 7617536
          Align = alLeft
          Caption = #1059#1084#1086#1083#1095#1072#1085#1080#1103
          Color = 15791348
          HotTrack = True
          TabOrder = 0
          OnClick = DefaultsButtonClick
        end
        object ApplyButton: TRzButton
          AlignWithMargins = True
          Left = 180
          Top = 3
          Margins.Left = 0
          Margins.Right = 1
          Margins.Bottom = 2
          FrameColor = 7617536
          Align = alRight
          Caption = #1055#1088#1080#1084#1077#1085#1080#1090#1100
          Color = 15791348
          Enabled = False
          HotTrack = True
          TabOrder = 1
          OnClick = ApplyButtonClick
        end
        object OkButton: TRzButton
          AlignWithMargins = True
          Left = 256
          Top = 3
          Margins.Left = 0
          Margins.Right = 1
          Margins.Bottom = 2
          Default = True
          FrameColor = 7617536
          Align = alRight
          Caption = 'OK'
          Color = 15791348
          HotTrack = True
          TabOrder = 2
          OnClick = OkButtonClick
        end
        object CancelButton: TRzButton
          AlignWithMargins = True
          Left = 332
          Top = 3
          Margins.Left = 0
          Margins.Right = 1
          Margins.Bottom = 2
          Cancel = True
          FrameColor = 7617536
          Align = alRight
          Caption = #1054#1090#1084#1077#1085#1072
          Color = 15791348
          HotTrack = True
          TabOrder = 3
          OnClick = CloseLabelClick
        end
        object HelpButton: TRzButton
          AlignWithMargins = True
          Left = 408
          Top = 3
          Margins.Left = 0
          Margins.Right = 1
          Margins.Bottom = 2
          FrameColor = 7617536
          Align = alRight
          Caption = #1057#1087#1088#1072#1074#1082#1072
          Color = 15791348
          HotTrack = True
          TabOrder = 4
          OnClick = HelpButtonClick
        end
      end
    end
    object LeftPanel: TRzPanel
      Left = 8
      Top = 41
      Width = 72
      Height = 365
      Align = alLeft
      BorderOuter = fsNone
      Color = 16119543
      TabOrder = 3
      object HeaderPanel: TRzPanel
        Left = 0
        Top = 0
        Width = 72
        Height = 365
        Align = alLeft
        BorderInner = fsFlatRounded
        BorderOuter = fsNone
        BorderColor = clWhite
        BorderShadow = clWhite
        Color = clWhite
        FlatColor = 11645361
        FlatColorAdjustment = 0
        GradientColorStyle = gcsCustom
        GradientColorStop = 16119543
        GridColor = clWhite
        GridStyle = gsDottedLines
        TabOrder = 0
        VisualStyle = vsGradient
        object GeneralMenuImage: TImage
          Left = 2
          Top = 2
          Width = 68
          Height = 32
          Hint = #1054#1073#1097#1080#1077
          Margins.Left = 0
          Margins.Top = 0
          Margins.Right = 6
          Margins.Bottom = 0
          Align = alTop
          Center = True
          ParentShowHint = False
          Picture.Data = {
            055449636F6E0000010001002020000001002000A81000001600000028000000
            2000000040000000010020000000000080100000000000000000000000000000
            0000000000000000000000000000000000000000000000000000000000000000
            0000000000000002000000020000000000000000000000000000000000000000
            0000000000000000000000000000000000000000000000000000000000000000
            0000000000000000000000000000000000000000000000000000000000000000
            0000000000000000000000000000000000000000000000000000000000000000
            0000002F292928972A29299A0000003900000000000000000000000000000000
            0000000000000000000000000000000000000000000000000000000000000000
            0000000000000002000000420202027D0101015F000000170000000000000000
            0000000000000000000000000000000000000000000000000000000003030326
            5F5D5CCE999694FA989593F36B6A68E105050540000000000000000000000000
            0000000000000000000000000000000000000000000000000000000000000000
            000000000000001C070707DF0D0D0DFF151515FE0F0F0FB70000002300000000
            000000000000000000000000000000000000000000000000000000003A393979
            9F9C9AFF1D1D1C4313131321989593F362605FD7000000280000000000000000
            0000000000000000000000000000000000000000000000000000000000000000
            000000000101012D090909FC101010FF252525FF373737FF1D1D1DA600000009
            000000000000000000000000000000000000000000000000000000003C3B3A60
            A19E9CFF100F0F6C03030253888583EDAFABA9FF474645B80000001A00000000
            0000000000000000000000000000000000000000000000000000000000000000
            00000000020202590A0A0AFE1B1B1BFF2F2F2FFF444444FF535353FF0D0D0D38
            0000000000000000000000000000000000000000000000000000000003030307
            7A7877B6969290FF827F7DF7B0ADACFFD0CECDFFABA8A6FF3C3B3AAB00000011
            0000000000000000000000000000000000000000000000000000000000000000
            0000002E080808D41A1A1AFF2B2B2BFF434343FF515151FF474747B509090912
            0000000000000000000000000000000000000000000000000000000000000000
            0E0E0E14898785C8B3B0AEFFBFBCBAFFCBC9C7FFCFCCCAFFA8A5A3FF2929288E
            0000000500000000000000000000000000000000000000000000000000000021
            090909C7181818FF292929FF3D3D3DFF505050FF383838B00000000600000000
            0000000000000000000000000000000000000000000000000000000000000000
            000000000D0D0D15848280C6ADAAA8FFBCB9B7FFCCC9C8FFD0CECCFF9A9896FC
            1716166B00000000000000000000000000000000000000000000001C080808B8
            1A1A1AFF2A2A2AFF3D3D3DFF4F4F4FFF464646DB050505150000000000000000
            0000000000000000000000000000000000000000000000000000000000000000
            00000000000000000E0E0E16868483C9AEABA9FFBCB9B8FFCBC9C7FFCFCCCAFF
            898584F00909094D00000000000000000000000000000012070707AC171717FF
            262626FF383838FF4A4A4AFF4E4E4EF61212123B000000000000000000000000
            0000000000000000000000000000000000000000000000000000000000000000
            000000000000000000000000101010188A8786CCAFABA9FFBBB8B7FFCCC9C8FF
            CDC9C8FF716F6DDE0000003100000000000000140606069D141414FF202020FF
            333333FF484848FF525252FB1F1F1F5E00000000000000000000000000000000
            0000000000000000000000000000000000000000000000000000000000000000
            000000000000000000000000000000001211121B8D8A88CFAEABA9FFBBB8B6FF
            CDCBCAFFC9C6C4FF575655C100000031060606A2131313FF212121FF303030FF
            494949FF535353FF2323236F0000000000000000000000000000000000000000
            0000000000000000000000000000000000000000000000000000000000000000
            00000000000000000000000000000000000000001414141D888685C5AFACA9FF
            BCB9B7FFCFCCCBFFC2BEBDFF3E3D3CDA040404FF1D1D1DFF2C2C2CFF434343FF
            505050FF31313193000000000000000000000000000000000000000000000000
            0000000000000000000000000000000000000000000000000000000000000000
            0000000000000000000000000000000000000000000000000B0B0B12858381C1
            B0ADABFFBCB9B8FFD0CECDFFB5B2B0FF313030FF202020FF414141FF525252FF
            3B3B3BB301010105000000000000000000000000000000000000000000000000
            0000000000000000000000000000000000000000000000000000000000000000
            000000000000000000000000000000000000000000000000000000000D0D0D13
            878583C0B0ACABFFBDBAB9FFD1CFCEFFAAA8A6FF3D3C3CFF484848FF414141CD
            0505051200000000000000000000000000000000000000000000000000000000
            0000000000000000000000000000000000000000000000000000000000000000
            0000000000000000000000000000000000000000000000000000000000000000
            0D0D0D48898685FAAFACAAFFBFBBBAFFD2D0CFFFA6A3A2FF3A3939E309090A24
            0000000000000000000000000000000000000000000000000000000000000000
            0000000000000000000000000000000000000000000000000000000000000000
            0000000000000000000000000000000000000000000000000000000000000011
            040400BB1D1E1BFF8E8B8BFFAEAAA8FFBFBDBBFFD4D1D0FF8A8786E201010139
            0000000000000000000000000000000000000000000000000000000000000000
            0000000000000000000000000000000000000000000000000000000000000000
            0000000000000000000000000000000000000000000000000000000002021371
            10103FFF1C1C22FF3C3C35FF9C9A99FFADAAA8FFBEBCBAFFD4D2D0FF6E6D6CD0
            0000002400000000000000000000000000000000000000000000000000000000
            0000000000000000000000000000000000000000000000000000000000000000
            000000000000000000000000000000000000000000000000000002390C0C59E7
            2020ADFF3131B5FF4B4B6CFF585754F3949290DDAEABA8FFC1BEBCFFD1CFCEFF
            555353B700000021000000000000000000000000000000000000000000000000
            0000000000000000000000000000000000000000000000000000000000000000
            00000000000000000000000000000000000000000000002208083FC71D1D9FFF
            2D2DC7FF3636E7FF3535B6E714151450141413188E8C8AC8AFABA9FFC2BFBEFF
            C2BFBDFF6A6866CE16161569000000240000000B0000002A0000000900000000
            0000000000000000000000000000000000000000000000000000000000000000
            000000000000000000000000000000000000000D06062EA9191994FF2A2AC1FF
            3737DFFF2C2CBBDC05051F29000000000000000014141419959391D4B0ADAAFF
            BCBAB7FFC0BDBBFFAEACAAF97C7B7AD93A3939A6575555D70D0D0C4900000000
            000000000000000000000000000000000000000A000000020000000000000000
            0000000000000000000000000000000503031C89161687FF2828BCFF3333D9FF
            3030C1E205051A28000000000000000000000000000000002B2B2B43C1BFBDFD
            C5C2C1FF525150B282807FE8BCBAB9FFBEBBBAFFC6C2C0FF4E4C4C8200000000
            00000000000000000000000005050444373635B1141413790000000C00000000
            00000000000000000000001800001484111179FD2626B6FF3131D2FF3535D3F4
            0909273A0000000000000000000000000000000000000000000000059D9B9AD3
            A29F9EF3373736B2AAA7A6FF3E3D3D9E8A8887D4C8C6C4FF2C2B2B8300000003
            00000000000000000101011F676563DBA8A5A2FF858280FF1918187300000000
            00000001000000305B5956BE605F83FF1A1A9FFF2C2CCEFF3939E2FF13134F6D
            0000000000000000000000000000000000000000000000000000000061605F88
            B7B4B2FB949291F4757372D728282789C1BFBDFEADAAA8FF918E8BF61413135E
            000000000000000024242357CCCAC7FFB9B6B4FFA6A2A0FF52504FE415141484
            2C2B2B99686664D8B7B3B0FFC2BEB6FF8381ACFF3434DAFF22229DC400000003
            000000000000000000000000000000000000000000000000000000002A292946
            CBC8C7FFC8C5C4FF949291EC959392EBC0BDBCFCA4A2A1FFC7C4C2FF7D7A79DE
            0000001F000000001A1A1A27BBBAB9CEE7E6E4FFBFBBBAFF7D7B79FF7D7A78FF
            A4A09EFFACA7A5FFA9A5A2FFABA7A5FFBDB9ACFF8E8BBEFF1010376100000000
            0000000000000000000000000000000000000000000000000000000008080819
            B2AFAEEBC7C4C3FFCAC6C5FFD4D1D0FF656463963938384DA6A4A3CDD1CECCFF
            2C2B2B6B00000000000000000A0A0A0F50504F5B848281BE9E9C9AFFAEABA9FF
            A5A29FFF9E9B98FFA19D9BFFA6A29FFFADA9A7FFABA89FF01414102800000000
            0000000000000000000000000000000000000000000000000000000000000002
            939191C6CECBC9FFC6C4C2FFC6C4C2FF1E1E1E47000000000707070664636270
            4E4D4D650000000000000000000000000000000010100F2DD6D4D3FFDDDBD9FF
            B9B6B4FFAAA7A5FF9F9C9AFF9E9B99FFAEAAA7FF4F4D4C830000000000000000
            0000000000000000000000000000000000000000000000000000000000000000
            6C6B6B92D6D4D2FFC7C5C3FFCDCAC9FF302E2F85000000120000000000000000
            0000000000000000000000000000000000000000000000005D5D5C67E8E7E6F0
            ECEAE8FFC3C0BEFFB3B0AEFFA6A2A0FF9E9B98FF10100F500000000000000000
            0000000000000005000000210808082B01010103000000000000000000000000
            1D1D1C28C4C2C1EDD7D4D4FFD2CFCEFFBDB9B8FF686766C61A1A1A6501010110
            000000000000000000000000000000000000000000000000000000002524242B
            ACABAAB3F4F3F1FFD1CECCFFBBB9B7FFB1AEACFF63615FCE0F0F0F6601010147
            12111169403F3DA85C5B59B82423233E01010101000000000000000000000000
            000000002C2B2B33918F8EA6B2AFAED3BFBCBBE4C4C0BFE4918F8DBA18181827
            0000000000000000000000000000000000000000000000000000000000000000
            000000016C6C6B73E6E4E3F5E5E3E1FFCDCAC8FFC1BDBBFFA5A19FFF92908DFF
            A29F9DFF858281BB2322212C0000000000000000000000000000000000000000
            000000000000000000000000030303040B0B0B0C060606080000000000000000
            0000000000000000000000000000000000000000000000000000000000000000
            00000000000000002F2E2E339F9E9DA3C8C7C6D9BEBCBAE1A3A19FCF74727099
            3433334300000000000000000000000000000000000000000000000000000000
            0000000000000000000000000000000000000000000000000000000000000000
            0000000000000000000000000000000000000000000000000000000000000000
            00000000000000000000000000000000060606080C0C0C0C0000000200000000
            0000000000000000000000000000000000000000000000000000000000000000
            0000000000000000000000000000000000000000000000000000000000000000
            00000000FF3FFFFFFE1FFF07FC0FFF03FC07FF01FC03FF01FC01FE01FE00FC03
            FF00F807FF80700FFFC0201FFFE0003FFFF0007FFFF8007FFFFC00FFFFFE01FF
            FFFC01FFFFFC00FFFFF8007FFFF00003FFE03003E7C07803C380F8018201FC01
            8001FC008003FC00C003FC08F007FE07F8070E01FC000F01FE003FC7FF80FFFF
            FFE3FFFF}
          ShowHint = True
          OnClick = GeneralMenuImageClick
          OnMouseEnter = GeneralMenuImageMouseEnter
          OnMouseLeave = GeneralMenuImageMouseLeave
          ExplicitLeft = -3
          ExplicitTop = 194
          ExplicitWidth = 72
        end
        object GeneralLabel: TRzLabel
          Left = 2
          Top = 34
          Width = 68
          Height = 13
          Hint = #1054#1073#1097#1080#1077
          Margins.Left = 0
          Margins.Top = 0
          Margins.Right = 6
          Margins.Bottom = 0
          Align = alTop
          Alignment = taCenter
          Caption = #1054#1073#1097#1080#1077
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clMenuHighlight
          Font.Height = -11
          Font.Name = 'Tahoma'
          Font.Style = []
          ParentFont = False
          ParentShowHint = False
          ShowHint = True
          Transparent = True
          Layout = tlCenter
          OnClick = GeneralMenuImageClick
          OnMouseEnter = GeneralMenuImageMouseEnter
          OnMouseLeave = GeneralMenuImageMouseLeave
          LightTextStyle = True
          TextStyle = tsRecessed
          ExplicitWidth = 35
        end
        object RzSpacer2: TRzSpacer
          Left = 2
          Top = 47
          Width = 68
          Height = 6
          Align = alTop
          ExplicitLeft = -3
          ExplicitTop = 84
          ExplicitWidth = 72
        end
        object HotKeyMenuImage: TImage
          Left = 2
          Top = 53
          Width = 68
          Height = 32
          Hint = #1043#1086#1088#1103#1095#1080#1077' '#1082#1083#1072#1074#1080#1096#1080
          Margins.Left = 0
          Margins.Top = 0
          Margins.Right = 6
          Margins.Bottom = 0
          Align = alTop
          Center = True
          ParentShowHint = False
          Picture.Data = {
            055449636F6E0000010001002020000001002000A81000001600000028000000
            2000000040000000010020000000000080100000000000000000000000000000
            0000000000000000000000000000000000000000000000000000000000000000
            0000000000000000000000000000000000000000000000000000000000000000
            0000000000000000000000000000000000000000000000000000000000000000
            0000000000000000000000000000000000000000000000000000000000000000
            0000000000000000000000000000000000000000000000000000000000000000
            0000000000000000000000000000000000000000000000000000000000000000
            0000000000000000000000000000000000000000000000000000000000000000
            0000000000000000000000000000000000000000000000000000000000000000
            0000000000000000000000000000000000000000000000000000000000000000
            0000000000000000000000000000000000000000000000000000000000000000
            0000000000000000000000000000000000000000000000000000000000000000
            0000000000000000000000000000000000000000000000000000000000000000
            0000000000000000000000000000000000000000000000000000000000000000
            0000000000000000000000008581620100000000000000000000000000000000
            0000000000000000000000000000000000000000000000000000000000000000
            0000000000000000000000000000000000000000000000000000000000000000
            0000000000000000000000000000000000000000000000006F6952016B67521C
            615E4F73636051AE6F6D58D56F6C57E05C594DD24D4A4598656252407A765D0C
            0000000000000000000000000000000000000000000000000000000000000000
            0000000000000000000000000000000000000000000000000000000000000000
            00000000000000000000000000000000000000006059490B6B67527B868260E5
            9C976CFEA19D70FFA39F71FFA6A274FFABA677FFA09C71FF7B775DFB525048CA
            56534A6475715A15000000000000000000000000000000008C886B017F7C6406
            7C79630C7C79630C7E7B65097F7C660200000000000000000000000000000000
            00000000000000000000000000000000534C41135E5946AA736E52FE807A5AFF
            847E5EFF858060FF888464FF8D8867FF95906BFF9E9A70FFA7A374FFA19D72FF
            7E7A5FFE626050DA5F5C4FAB63605194696655966F6C59A976735DB86D6B57C6
            6C6956D06C6956D06C6957CC666454C058554D9464615740817E6B0100000000
            0000000000000000000000000000000039312D9D453E35FE585141FF645D4CFF
            6E6555FF756B5CFF7C7164FF807666FF847C68FF888268FF908A69FF98936CFF
            A09B70FFA39F72FFA29D71FFA29E72FFA39F73FFA4A074FFA5A176FFA6A278FF
            A7A47AFFAAA67DFFADA97FFFAEAB80FFA5A279FF656253F456534D6400000000
            000000000000000000000000443C3811302927E639302EFF4F4340FF675853FF
            7D6C65FF8B7872FF94807AFF97847EFF95847BFF8E8074FF897E6EFF877E68FF
            898267FF8D8768FF918B6BFF948E6EFF969073FF9A9378FF9D977DFFA29B84FF
            A8A18BFFACA690FFB0AA93FFB4AF93FFB9B591FFB3B089FF53514ACE7E7B6B0D
            00000000000000000000000048413D24362F2DEE4D4240FF705F5CFF8C7773FF
            A18883FFAB908CFFB09490FFB19691FFB09590FFAB928DFFA48E87FF9C8980FF
            97877CFF98887CFF9D8E81FFA49589FFAE9F94FFB8A79EFFC0B1A8FFC6B8B0FF
            CCBEB7FFCFC3BCFFD0C5BCFFD0C6B9FFD0C8B4FEC9C3A8FB716E62C05F5D5480
            7674673300000000000000004E4845373D3635F5625755FF917F7BFFAC9691FF
            B89E9AFFBBA09BFFBCA09BFFBCA09BFFBCA19CFFBDA29EFFBFA4A0FFBFA6A1FF
            C0A8A3FFC3ACA7FFC7B1ADFFCBB7B3FFD0BEBAFFD4C4C0FFD7C9C6FFDACCC9FF
            DDD1CEFED8CDCAFCC1B8B4FBA9A19AFB948E7FFB918E75FB9F9C77FD999670FF
            53514BBC0000000000000000423E3C79443F3DFE756B69FFAA9B96FFC0ADA9FF
            C4AFABFFC4B0ACFFC6B2ADFFC9B4B0FFCCB8B4FFCFBCB9FFD3C1BEFFD6C4C2FF
            D8C8C5FFDACBC9FFDCCECBFFDED0CEFFE0D2D0FFE2D5D3FCC6BCBAF99C9593FA
            6E6967FB53514DFD5A5A53FE7B7A71FEAFAE9FFFD4D3C2FFE2E1D0FFC7C49EFF
            5C5A4ED473716F015553514A393735EB55514FFF918A86FFC4B9B5FFCFC4C0FF
            D2C7C3FFD5C8C5FFD8CCC9FFDBCFCCFFDDD2D0FFDFD4D2FFE1D6D4FFE2D8D5FE
            DED3D1FED6CCC9FDBEB5B2FB9D9593FB797470FB5E5B57FB5F5D58FE787670FF
            9D9B95FFBDBBB5FFD1CFC9FFD4D3CCFFCECCC4FFC8C6B8FFE2E0D1FFCFCDAEFF
            57554CB866656232454442EB605F5CFF959390FFCBC7C3FFDDD9D6FFE1DEDAFF
            E4E0DDFFE6E1DEFFE6E2DFFFE8E3E1FFE6E1DEFED1CBC9FEAFA9A7FE898482FD
            6C6865FD615E59FD716D68FE8F8B85FFAEAAA3FFBCB7B1FFD4CFC9FFCFCBC5FF
            A8A49EFF95918BFF918F88FF95938DFFA8A69DFFAFAE9DFFD5D2C1FFC2C0A2FF
            59574F92605F5DA0838280FFB4B3AFFFD9D8D5FFE5E5E2FFEAE9E7FFECEBE9FE
            EAE8E6FED6D4D2FDB5B3B0FD928F8CFD716D6AFE64605BFE716C66FF8E8781FF
            AAA19BFFAAA39CFFA19B94FF9C9790FF95918AFF85817BFFD2CCC6FFC2BCB7FF
            ACABA5FFC3C2BDFFD7D6D1FFDAD9D3FFDAD9D3FFC3C1B3FFD8D4C4FFB5B294FF
            7A786C7AB8B6B2D5D9D8D4FFE6E5E3FFEEEDEBFEE0DFDEFDADACAAFD7B7876FD
            5C5754FE665E5AFE847A74FEA49791FFB4A7A0FF9C918AFF7F7870FF857F78FF
            978E88FFB7B1ABFFC5BFB9FFCCC7C1FFD2CEC8FFA7A49FFFC2B9B4FFC4BBB7FF
            D3D0CBFFD5D3CEFFD4D2CEFFD7D6D1FFE3E2DDFFD1CFC3FFDBD7C5FFA4A185FF
            76746A52C5C2BF7EACAAA8F6888382FD675F5EFE615552FE796B65FF95857EFF
            A5948DFF9B8C85FF91857EFF92867FFF978B85FFB0A39DFFCBBEB8FFD0C4BEFF
            968B86FFBFB5B1FFCFC5BFFFD1C8C3FFCFC8C3FFB8B1ADFFAEA39FFFC0B5B1FF
            BEB9B6FFB1ACAAFFA39D9BFF96918EFF938E85FFA19D89FFD2CDB8FF949177FE
            716F653A90817D5B897470FD947E7AFF917B78FF897774FF917E78FF9A8781FF
            A7938CFFBCA7A0FFC5B0A9FFC4AFA9FFC3B0AAFFC5B1ACFFCAB9B4FFCDBDB9FF
            A49996FFA99B98FFA19996FF938B89FF8F8785FF8E8683FF8B817EFFBFB1ACFF
            A39B98FFAAA39FFF7D7674FFCDC7C2FFDDD8D2FFCECABAFFD2CCB4FF838069F4
            8F8B7D1CB1A29F10AE9A97BC8F7B78FF9C837FFF907C79FFB79B97FFBA9D98FF
            BEA39DFFC3ABA6FFC0AAA6FFB5A39FFFAB9C98FF9B8D8BFF928683FF918582FF
            857875FF817572FF9E8F8BFFB3A49FFFCBBCB8FFCDC0BBFF958A87FFBAA9A5FF
            BFB5B2FFB5ACAAFF867D7BFFA29B97FFACA69CFFB6B19CFFD3CDB2FF74715EE5
            9B97861300000000AA9A971ABDAAA6C6C6B3AFFFB7A4A1FF9B8A87FF8B7D7BFF
            867877FF847371FF837370FF99837EFF82716DFFB69D99FFA08884FF968481FF
            CAB4B0FF9C8E8BFFBAA8A4FFA29491FF988986FF9C8C88FF867976FFB09D99FF
            A0928FFFA89A97FF7E7371FFBDB2ACFFCFC4BBFFC1BAA4FFCFC8AAFF646253C6
            989381090000000000000000B8A6A227AC9C98DE958783FF8D7E7CFFB59F9BFF
            958481FFBDA5A1FF988784FFA99693FF988683FF887A78FF928280FF817270FF
            8B7977FF7D6B68FF8F7C79FF8E7D7AFFBAA5A1FFBAA7A3FF9F8F8CFFA4908CFF
            B6A4A0FFBFADAAFF8B7E7BFFB7ABA6FFC2B8AEFFBFB69FFFC5BE9EFF59564DB6
            97917F04000000000000000000000000BFB0AC3AC1B4B1EC948A88FF908683FF
            9C908CFF897E7BFFA1908DFF8B7B78FFB29D99FF9F8D8AFFB8A29EFF9E8B88FF
            9E8D8AFF988684FF8A7B79FF847472FF9C8986FF9B8784FF92807DFF95817DFF
            A4918EFF978480FF756765FFA3918CFFBCAB9FFFB3AA90FFB5AD8FFF6D685E8F
            0000000000000000000000000000000000000000C1B6B251C8BEBBF3A69E9BFF
            ABA29FFF9A918FFFA39996FF9B918EFF968B88FF9B8F8CFF897D7BFF9D8D8AFF
            837573FFA5908CFF8B7B78FFAC9692FFA2918EFF8C7F7DFF9B8A87FF907C79FF
            AB9490FFA08C89FF7F706EFFA1908DFFAD9E95FFAFA58EFF9E967CFF6460597A
            0000000000000000000000000000000000000000B0A5A202CAC3BF71BFBBB7FC
            A39F9BFFC9C3BFFFA59F9CFFCAC3BFFFAAA29FFFC1B7B3FF958B88FF968A88FF
            786E6CFF9E928FFF857A77FF948784FF897A78FF9D8C89FFA4908CFF8F7C79FF
            B19B97FFBBA7A4FF9B8986FFB09C98FFBDA6A0FFB8A596FF837B69DE766F672C
            000000000000000000000000000000000000000000000000B9B1AE03D2CECB80
            B1AFACFB979391FFACA9A7FF979390FFA9A5A2FF948E8BFFB6B0ACFFAEA5A2FF
            C7BDB9FEABA09DFEBFB2AEFFB0A3A0FDB9AAA6F6C3B4B0F1C4B4B0EEC3B1AEEA
            CAB5B1E4CAB6B2DFC9B5B1D1C9B5B1C4CBB8B4B7C9B6AE909E91841F00000000
            00000000000000000000000000000000000000000000000000000000BEB9B607
            D9D8D581DBDAD6DBD9D7D4D1D6D4D0B6D2CFCBADD5D1CE98D6D0CD8AD7D1CE80
            D5CFCD68C5BFBC7D85807EF3665F5BF9A1989491AEA3A02EB2A7A422B4A8A518
            B4A8A50AB6A9A506AB9C97010000000000000000000000000000000000000000
            0000000000000000000000000000000000000000000000000000000000000000
            C3C0BD01C9C6C316C7C4C110C1BDBA0200000000000000000000000000000000
            00000000A19895029893915E686563E04E4844F66C635DA0857B7533978C8803
            0000000000000000000000000000000000000000000000000000000000000000
            0000000000000000000000000000000000000000000000000000000000000000
            0000000000000000000000000000000000000000000000000000000000000000
            0000000000000000000000009F9896209E9B9AAA7A7674FE67615DF2726A65C5
            7F756F708C817C1E000000000000000000000000000000000000000000000000
            0000000000000000000000000000000000000000000000000000000000000000
            0000000000000000000000000000000000000000000000000000000000000000
            000000000000000000000000000000008F8986019995933F9A9695A6888482E3
            76716FF8716A66FB706964E06F6862C3786F685F000000000000000000000000
            0000000000000000000000000000000000000000000000000000000000000000
            0000000000000000000000000000000000000000000000000000000000000000
            0000000000000000000000000000000000000000000000000000000085807D12
            908B89448F8B89718985839A807B7AB3726C6747000000000000000000000000
            0000000000000000000000000000000000000000000000000000000000000000
            0000000000000000000000000000000000000000000000000000000000000000
            0000000000000000000000000000000000000000000000000000000000000000
            0000000000000000000000007D78740400000000000000000000000000000000
            0000000000000000000000000000000000000000000000000000000000000000
            0000000000000000000000000000000000000000000000000000000000000000
            0000000000000000000000000000000000000000000000000000000000000000
            0000000000000000000000000000000000000000000000000000000000000000
            00000000FFFFFFFFFFFFFFFFFFFFFFFFFFDFFFFFF801FFFFF000781FE0000003
            E0000003C0000001C0000000C0000000C0000000000000000000000000000000
            0000000000000000000000000000000080000000C0000000E0000001F0000001
            F0000001F8000003FC00003FFE1F01FFFFFFC07FFFFFE00FFFFFFC0FFFFFFFDF
            FFFFFFFF}
          ShowHint = True
          OnClick = HotKeyMenuImageClick
          OnMouseEnter = HotKeyMenuImageMouseEnter
          OnMouseLeave = GeneralMenuImageMouseLeave
          ExplicitLeft = 1
          ExplicitTop = 101
        end
        object HotKeyLabel: TRzLabel
          Left = 2
          Top = 85
          Width = 68
          Height = 26
          Hint = #1043#1086#1088#1103#1095#1080#1077' '#1082#1083#1072#1074#1080#1096#1080
          Margins.Left = 0
          Margins.Top = 0
          Margins.Right = 6
          Margins.Bottom = 0
          Align = alTop
          Alignment = taCenter
          Caption = #1043#1086#1088#1103#1095#1080#1077#13#1082#1083#1072#1074#1080#1096#1080
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clMenuHighlight
          Font.Height = -11
          Font.Name = 'Tahoma'
          Font.Style = []
          ParentFont = False
          ParentShowHint = False
          ShowHint = True
          Transparent = True
          Layout = tlCenter
          OnClick = HotKeyMenuImageClick
          OnMouseEnter = HotKeyMenuImageMouseEnter
          OnMouseLeave = GeneralMenuImageMouseLeave
          LightTextStyle = True
          TextStyle = tsRecessed
          ExplicitWidth = 44
        end
        object RzSpacer3: TRzSpacer
          Left = 2
          Top = 111
          Width = 68
          Height = 6
          Align = alTop
          ExplicitLeft = -2
          ExplicitTop = 120
        end
        object DesignMenuImage: TImage
          Left = 2
          Top = 117
          Width = 68
          Height = 32
          Hint = #1054#1092#1086#1088#1084#1083#1077#1085#1080#1077
          Margins.Left = 0
          Margins.Top = 0
          Margins.Right = 6
          Margins.Bottom = 0
          Align = alTop
          Center = True
          ParentShowHint = False
          Picture.Data = {
            055449636F6E0000010001002020000001002000A81000001600000028000000
            2000000040000000010020000000000080100000000000000000000000000000
            0000000000000000000000000000000000000000000000000000000000000000
            00000000000000000000000100000004000000080000000C0000001000000014
            0000001700000017000000170000001600000013000000100000000B00000007
            0000000400000001000000000000000000000000000000000000000000000000
            0000000000000000000000000000000000000000000000000000000000000001
            00000006000000110404042214121239201D1D522F2A2A694C44447B685E5E8C
            6E6464916E6464936C6262926359598C453E3E7C2A25256C1E1B1B5B100E0E42
            0101012C0000001D0000000E0000000500000001000000000000000000000000
            0000000000000000000000000000000000000000000000000000000405040416
            27232349796E6E94B4A8A7D5D3C9C9EAE2D8D8F7E7DCDDFDE8DEDEFFE7DDDDFF
            E6DCDCFFE6DBDBFFE5DADAFFE4D8D8FFE3D7D7FFE0D4D4FCD8CCCCF5C6B9B9E9
            A59797D15E5554931B18185C0101012C00000010000000030000000000000000
            00000000000000000000000000000000000000000000000224202027A49696B6
            E2D9D9F5EBE0E0FFE4D6D6FFE7DCDCFFE9DFDFFFE8DFDFFFE7DEDDFFE7DDDDFF
            E6DCDCFFE5DBDBFFE5DBDBFFE5DBDBFFE5DBDBFFE6DCDCFFE6DBDBFFE2D4D4FF
            DFD0D0FFE0D3D3FECFC1C1F17E7272B10A090948000000100000000100000000
            00000000000000000000000000000000000000001815150AC2B3B3C0E7DCDCFF
            EDE4E5FFF0EAE9FFF0EAEAFFEEE8E8FFECE5E5FFEBE3E3FFE9E1E1FFE8DFDFFF
            E6DBDBFFE4D8D8FFE5DBDAFFE6DDDDFFE7DEDEFFE8E0E0FFEAE2E1FFEBE4E4FF
            EDE6E6FFECE4E4FFE7DCDCFFDECFCFFE857777B4010101240000000200000000
            000000000000000000000000000000000000000029242417DCCCCCE5F4EFEFFF
            F3EFEFFFF2EDEDFFF0EAEAFFEEE8E7FFECE5E5FFEAE3E3FFE9E0DFFFE0D1D1FF
            E1D4D3FFE3D6D6FFE1D3D3FFE0D1D1FFE6DDDDFFE7DFDFFFE9E1E1FFEBE3E3FF
            ECE5E6FFEEE8E8FFF0EBEBFFEFE8E8FFB2A1A1DD0403032A0000000200000000
            00000000000000000000000000000000000000002A252513E6DCDCE2F5F2F2FF
            F3EFEFFFF1EDEDFFF0EAEAFFEEE7E7FFECE5E5FFEAE2E3FFE6DDDCFFE4D8D8FF
            E8DFDFFFE8DFDFFFE8DFDFFFE2D5D5FFE5DBDBFFE7DFDFFFE9E1E1FFEBE3E3FF
            ECE5E6FFEEE8E8FFF0EBEBFFF2EDEDFFB6A9A9D50404041E0000000100000000
            00000000000000000000000000000001000000020F0D0D049F90907BEDE5E5F8
            F3EFEFFFF2EDEDFFF0EAEAFFEEE8E7FFECE5E5FFEAE2E2FFE7DEDEFFE1D4D3FF
            EAE3E3FFEBE4E3FFEAE3E3FFDFCFCFFFE6DDDDFFE8DFDFFFE9E1E1FFEBE3E3FF
            EDE6E6FFEEE8E8FFEFEAEAFFE1D7D7F1605656600000000B0000000200000001
            00000000000000000000000300000015000000280000002C09070731564C4C75
            C5B6B6E7E5DCDCFFE0D4D4FFD8CACAFFD4C4C4FFD0C0C0FFCEBEBEFFCCBCBCFF
            D2C2C2FFD3C4C4FFCFC0C0FFCDBCBCFFCEBEBEFFD2C1C1FFD5C5C5FFD9CDCCFF
            DFD5D5FFE0D5D5FEA89999D8312B2B6F030303350000002C0000002700000013
            000000030000000029242420958686BB9E9090DD9E9090DEA09292E0AFA3A3ED
            C7BABAFAD2C6C6FFD4C8C8FFD5C9C9FFD6CBCBFFD7CBCBFFD7CCCCFFD7CDCDFF
            D6CECEFFD8D0D1FFD6CECEFFD7CCCCFFD7CBCBFFD7CBCBFFD6CACAFFD5C9C9FF
            D3C6C6FFCFC2C2FEB7ABABF4A49696E79E8F8FDE9E9090DE807373C80C0B0B52
            0000000E0000000196868674D4C9C9FFD8CECEFFD9CECEFFD9CECEFFDACECEFF
            DACFCFFFDACFCFFFDACFCFFFDACFCFFFDACFCFFFDACFCFFFDACFCFFFDAD4D4FF
            E8E2E2FFE7E2E2FFDAD3D3FFD8CFCFFFDACFCFFFDACFCFFFDACFCFFFD7CECEFF
            9BC4B0FF8FC3AAFF97C3AEFFD3CDCAFFD8CECEFFD8CDCDFFD2C6C6FF50474790
            00000017000000019F8E8E83DAD1CEFFD8C8BCFFDACABEFFDBCBC0FFDCCCC2FF
            DDCEC3FFDECFC5FFDFD1C7FFE0D2C9FFE1D4CAFFE2D5CCFFE3D6CDFFE4D7CFFF
            E5D8D1FFE5D9D2FFE6D9D3FFE7DBD4FFE8DCD5FFE9DCD5FFE9DCD5FFE7DCD4FF
            C5D2C0FFBED1BCFFC2D2BDFFE4D9CFFFE7DAD1FFE7DBD2FFD8CECEFF5F565695
            00000018000000019E8E8E83D0BEB0FFAE661CFFAD6219FFAF651DFFB16721FF
            B36C26FFB66F2AFFB87130FFBA7535FFBD783BFFBF7C41FFC17F47FFC3824CFF
            C58552FFC78857FFC88B5CFFCA8D60FFCB8E63FFCA8E62FFCA8C5EFFC98A5AFF
            C78856FFC58551FFC3824BFFC17F45FFBF7C40FFC78E58FFDCD1CEFF48414194
            00000018000000019E8E8E83CEBCAEFFAB5F13FFA95A0FFFAB5D13FFAD6118FF
            B0661DFFB46A22FFB76F29FFBA7330FFBC7736FFBF7B3DFFC28044FFC4834AFF
            C78750FFC88A56FFCA8C5BFFCB8E5FFFCB8F60FFCB8E5FFFCA8D5EFFC98B5AFF
            C78855FFC5854FFFC48249FFC17E43FFBF7A3DFFC68C55FFDBD2CFFF47414194
            00000018000000019E8E8E83CDBBADFFAC6012FFAB5E10FFAF6315FFB3691BFF
            B76F22FFBB752AFFBF7B32FFC28039FFC58541FFC88949FFCA8D50FFCC9157FF
            CE945DFFD09663FFD19968FFD29A6BFFD19969FFD09868FFCF9665FFCF9563FF
            CE9360FFCC905CFFCA8C55FFC7884DFFC58446FFCB935CFFDDD3D1FF48414194
            00000018000000019E8E8E83CCBBADFFB16714FFB36813FFB8701AFFBE7823FF
            C2802CFFC78837FFCA8C3FFFC98B41FFCA8D47FFD09856FFD39D61FFD5A067FF
            D6A26DFFD8A574FFDAAB7DFFD6A273FFCF9462FFCF9562FFD19A66FFD39D69FF
            D49E69FFD49D67FFD19962FFCE955BFFCB9052FFD09C65FFDED5D2FF48414194
            00000018000000019F8F8F83CCBBACFFBA7317FFBF7919FFC58224FFC98A2FFF
            CB8E39FFC88938FFC58336FFB9722DFFBA7331FFC58644FFD7A56AFFDCAE7AFF
            DCB180FFE0B78AFFDFB58AFFCE9462FFC98A56FFC58650FFC4834CFFC88A52FF
            D49F68FFD7A46EFFD4A067FFD39C62FFD0975BFFD4A26BFFDFD6D4FF48414194
            00000018000000019F8F8F83CCBBACFFC3801BFFC98924FFCD9232FFD19940FF
            CA8D36FFC68632FFC78738FFC6853CFFBE7A36FFBC7635FFC48345FFD7A872FF
            DEB282FFE3BB90FFD8A674FFD0965FFFCE945BFFCC9259FFC4834AFFCB9055FF
            C88B51FFC38448FFC07F43FFBE7B3EFFBE783AFFC98F59FFE1D8D5FF48424294
            00000018000000019F8F8F83CCBCACFFC88A21FFCF962DFFD5A13FFFDAA94FFF
            DBAB59FFD29C4AFFD0994BFFD29B52FFD29B56FFC88B49FFC78948FFCD9357FF
            CF965EFFD7A672FFD39D66FFD39C64FFD6A36CFFD09962FFC7884BFFC98B4DFF
            C58547FFC38344FFC27F3FFFBC7737FFC07D3CFFD4A269FFE1D9D6FF48424294
            00000018000000019F8F8F83CCBBACFFCA8D22FFCC9026FFC17E22FFC4842DFF
            CA8F3CFFD8A85AFFD9A95FFFD8A760FFD8A865FFD6A86BFFD4A971FFD4A873FF
            D4A773FFD3A773FFD2A26CFFD29C62FFD7A66EFFD49F63FFCF9655FFCE9351FF
            CB8F4CFFC88A47FFC07C3AFFBA7331FFC98D48FFD9AC73FFE2DBD8FF48424294
            0000001800000001A0909083CBBBABFFC6871CFFCC9024FFD09730FFD39C3EFF
            D49F48FFDCAE5FFFDAAB60FFD2AA67FFC59F63FFC59C61FFCBA068FFCB9C65FF
            B88049FFB8A37BFFBAAC88FFBFAB83FFDAB079FFD49F5FFFD39C5BFFD29A57FF
            D09855FFC68846FFCA904DFFD4A262FFD9A968FFDCB278FFE3DCD9FF49434394
            0000001800000001A0909083CABAAAFFB97211FFC48219FFCE942CFFD4A03FFF
            D9A950FFDAAA58FFC6994FFFB7AF70FFD4AF6EFFD9AA6AFFDDB177FFD9AA71FF
            CC975DFFB68147FFB5A37AFFC6AE80FFD9AA6EFFDAAA6FFFD9AA6EFFD7A76AFF
            CA9255FFD29D60FFDCB277FFDEB478FFDCB173FFDDB67FFFE4DDDBFF49434394
            0000001800000001A0909083C9B9AAFFA85B0BFFAC5D0AFFB76E13FFC68626FF
            D5A148FFD9AA57FFCF9B51FFB39759FFB6B37FFFC9B582FFDAB27CFFE0BA87FF
            E1BC8BFFD9B07DFFCBA06EFFDFBB88FFE0B884FFDEB680FFDDB47DFFD2A16BFF
            D09E66FFCE9B62FFC68F59FFC8925BFFCC9860FFD7AC79FFE4DFDCFF49434394
            0000001800000001A0919183C9B9AAFFA95D11FFAB621CFFB57333FFC38B4FFF
            D0A064FFD7AC72FFDBB37DFFDDB784FFDBB98CFFD8BC92FFDBC29DFFE3C39AFF
            E5C59AFFE7C99EFFE4C497FFE1BF90FFDFBA8BFFDFBB8AFFE0BB89FFDFBA87FF
            DEB782FFDCB37DFFD8AE78FFD5A973FFD6AA74FFDBB888FFE6E0DEFF49434394
            0000001800000001A0919183CEC2BAFFCB9F72FFCEA47CFFD0A77EFFD1A880FF
            D2A982FFD3AB84FFD5AD86FFD7B08AFFDAB58FFFE0BE98FFE2C09BFFE1C09AFF
            E2C19BFFE4C59EFFE6C8A1FFE6C79FFFDFBD94FFE0BE94FFE3C297FFE3C397FF
            E2C093FFE1BE90FFE0BE90FFE0BD8EFFDFBC8DFFE0C198FFE6E1DFFF49434394
            0000001800000001A1919183D1C8C2FFDABA9BFFDABA9CFFDBBB9DFFDCBC9EFF
            DDBD9FFFDDBEA1FFDEBFA2FFDFC0A4FFE0C1A6FFE0C2A7FFE0C2A6FFE0C2A6FF
            E0C2A6FFE0C2A6FFE1C4A7FFE1C4A6FFE1C4A6FFE1C3A5FFE1C3A5FFE1C4A5FF
            E1C4A4FFE1C3A4FFE0C3A3FFE0C2A2FFE0C2A1FFE0C6A9FFE7E3E1FF4A444494
            0000001800000001A1919183D3CBC7FFE4CEB7FFE5CFB9FFE6CFBAFFE6D0BBFF
            E7D1BCFFE7D1BDFFE8D2BEFFE8D3BFFFE9D4C0FFE9D4C0FFE9D3C0FFE9D3BFFF
            E8D3BFFFE8D3BEFFE8D2BEFFE8D2BEFFE8D2BEFFE8D2BDFFE7D2BDFFE7D1BDFF
            E7D1BCFFE7D1BCFFE7D1BCFFE7D1BCFFE6D0BBFFE6D2BFFFE8E4E3FF4A444494
            0000001800000001A1929283D4CECBFFEEE0D1FFEFE1D4FFEFE1D4FFEFE2D5FF
            F0E2D5FFF0E3D6FFF1E3D7FFF1E4D7FFF1E4D8FFF1E4D8FFF1E4D7FFF1E3D7FF
            F1E3D7FFF1E3D7FFF1E3D7FFF1E3D6FFF0E3D6FFF0E3D6FFF0E2D6FFF0E2D6FF
            F0E2D6FFF0E2D5FFEFE2D5FFF0E2D5FFEFE2D5FFEDE0D4FFE8E5E4FF4A444494
            0000001800000001A2939382D4D0CDFFEDE3D7FFEFE5DAFFEFE5DAFFEFE6DBFF
            EFE6DBFFF0E6DCFFF0E7DCFFF0E7DDFFF0E7DDFFF0E7DDFFF0E7DDFFF0E7DDFF
            F0E7DDFFF1E7DDFFF1E7DDFFF1E7DDFFF1E7DDFFF1E7DDFFF1E8DDFFF1E8DDFF
            F1E8DDFFF1E8DDFFF2E8DDFFF2E8DDFFF2E8DDFFEEE5DAFFE7E5E4FF4A454591
            00000014000000009F8F8F5EE4E0DFFDDED7D3FFDED8D3FFDED8D3FFDED8D3FF
            DED8D4FFDED8D4FFDED8D4FFDED8D5FFDED8D5FFDFD9D5FFDFD9D5FFDFDAD5FF
            E0DAD6FFE1DBD6FFE1DBD7FFE1DCD7FFE2DCD8FFE2DDD8FFE3DDD8FFE3DED9FF
            E3DEDAFFE4DFDAFFE4DFDBFFE5E0DBFFE6E1DCFFE7E3DEFFE4E0DFFC514A4A67
            0000000A00000000342E2E09998A8A5EA4959582A2939383A2939383A2939383
            A2939383A2939383A2939383A2939383A2939383A2939383A2939383A2939383
            A2939383A2939383A2939383A2939383A2939383A2939383A2939383A2939383
            A2939383A2939383A2939383A2939383A2939383A29393838476765D0A090910
            0000000200000000000000000000000000000001000000010000000100000001
            0000000100000001000000010000000100000001000000010000000100000001
            0000000100000001000000010000000100000001000000010000000100000001
            0000000100000001000000010000000100000001000000010000000100000000
            00000000FF80007FFC00000FF8000007F0000003F0000003F0000003F0000003
            C000000180000000800000000000000000000000000000000000000000000000
            0000000000000000000000000000000000000000000000000000000000000000
            0000000000000000000000000000000000000000000000008000000080000000
            E0000003}
          ShowHint = True
          OnClick = DesignMenuImageClick
          OnMouseEnter = DesignMenuImageMouseEnter
          OnMouseLeave = GeneralMenuImageMouseLeave
          ExplicitLeft = 3
          ExplicitTop = 170
        end
        object DesignLabel: TRzLabel
          Left = 2
          Top = 149
          Width = 68
          Height = 13
          Hint = #1054#1092#1086#1088#1084#1083#1077#1085#1080#1077
          Margins.Left = 0
          Margins.Top = 0
          Margins.Right = 6
          Margins.Bottom = 0
          Align = alTop
          Alignment = taCenter
          Caption = #1054#1092#1086#1088#1084#1083#1077#1085#1080#1077
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clMenuHighlight
          Font.Height = -11
          Font.Name = 'Tahoma'
          Font.Style = []
          ParentFont = False
          ParentShowHint = False
          ShowHint = True
          Transparent = True
          Layout = tlCenter
          OnClick = DesignMenuImageClick
          OnMouseEnter = DesignMenuImageMouseEnter
          OnMouseLeave = GeneralMenuImageMouseLeave
          LightTextStyle = True
          TextStyle = tsRecessed
          ExplicitWidth = 64
        end
      end
    end
  end
  object FontDialog: TFontDialog
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -11
    Font.Name = 'Tahoma'
    Font.Style = []
    Left = 24
    Top = 344
  end
end
