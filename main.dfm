object mainform: Tmainform
  Left = 0
  Top = 0
  Caption = #26631#20934'UDP'#19978#20301#26426#27169#26495'('#21333#35774#22791')'
  ClientHeight = 434
  ClientWidth = 584
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'Tahoma'
  Font.Style = []
  Menu = MainMenu1
  OldCreateOrder = False
  PixelsPerInch = 96
  TextHeight = 13
  object StaB: TStatusBar
    Left = 0
    Top = 415
    Width = 584
    Height = 19
    Panels = <
      item
        Width = 200
      end
      item
        Width = 200
      end
      item
        Width = 50
      end>
    ExplicitLeft = 128
    ExplicitTop = 376
    ExplicitWidth = 0
  end
  object MainMenu1: TMainMenu
    Left = 32
    Top = 16
    object N1: TMenuItem
      Caption = #36890#35759#37197#32622
      OnClick = N1Click
    end
  end
  object UDPSvr: TIdUDPServer
    Bindings = <>
    DefaultPort = 0
    Left = 80
    Top = 16
  end
end
