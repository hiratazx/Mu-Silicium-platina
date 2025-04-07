  INF MdeModulePkg/Core/Dxe/DxeMain.inf
  INF MdeModulePkg/Universal/PCD/Dxe/Pcd.inf
  INF ArmPkg/Drivers/CpuDxe/CpuDxe.inf
  INF MdeModulePkg/Core/RuntimeDxe/RuntimeDxe.inf
  INF MdeModulePkg/Universal/SecurityStubDxe/SecurityStubDxe.inf

  #INF Binaries/platina/QcomPkg/Drivers/TzDxe/TzDxeLA.inf
  INF Binaries/platina/QcomPkg/Drivers/MdtpDxe/MdtpDxe.inf

  INF MdeModulePkg/Universal/WatchdogTimerDxe/WatchdogTimer.inf
  INF MdeModulePkg/Universal/CapsuleRuntimeDxe/CapsuleRuntimeDxe.inf
  INF MdeModulePkg/Universal/ReportStatusCodeRouter/RuntimeDxe/ReportStatusCodeRouterRuntimeDxe.inf
  INF MdeModulePkg/Universal/StatusCodeHandler/RuntimeDxe/StatusCodeHandlerRuntimeDxe.inf
  INF MdeModulePkg/Universal/Variable/RuntimeDxe/VariableRuntimeDxe.inf
  INF EmbeddedPkg/EmbeddedMonotonicCounter/EmbeddedMonotonicCounter.inf
  INF EmbeddedPkg/SimpleTextInOutSerial/SimpleTextInOutSerial.inf
  INF MdeModulePkg/Universal/ResetSystemRuntimeDxe/ResetSystemRuntimeDxe.inf
  INF EmbeddedPkg/RealTimeClockRuntimeDxe/RealTimeClockRuntimeDxe.inf
  INF EmbeddedPkg/MetronomeDxe/MetronomeDxe.inf
  INF MdeModulePkg/Universal/PrintDxe/PrintDxe.inf
  INF MdeModulePkg/Universal/DevicePathDxe/DevicePathDxe.inf
  INF MdeModulePkg/Universal/Console/ConPlatformDxe/ConPlatformDxe.inf
  INF MdeModulePkg/Universal/Console/ConSplitterDxe/ConSplitterDxe.inf
  INF MdeModulePkg/Universal/Console/GraphicsConsoleDxe/GraphicsConsoleDxe.inf
  INF MdeModulePkg/Universal/HiiDatabaseDxe/HiiDatabaseDxe.inf

  INF Binaries/platina/QcomPkg/Drivers/FontDxe/FontDxe.inf
  INF Binaries/platina/QcomPkg/Drivers/EnvDxe/EnvDxe.inf

  INF ArmPkg/Drivers/ArmGic/ArmGicDxe.inf
  INF ArmPkg/Drivers/TimerDxe/TimerDxe.inf

  INF Binaries/platina/QcomPkg/Drivers/ChipInfoDxe/ChipInfoDxe.inf
  INF Binaries/platina/QcomPkg/Drivers/GLinkDxe/GLinkDxe.inf
  INF Binaries/platina/QcomPkg/Drivers/SmemDxe/SmemDxe.inf

  INF QcomPkg/Drivers/DynamicRamDxe/DynamicRamDxe.inf

  INF Binaries/platina/QcomPkg/Drivers/ULogDxe/ULogDxe.inf
  INF Binaries/platina/QcomPkg/Drivers/NpaDxe/NpaDxe.inf

  INF MdeModulePkg/Universal/Disk/DiskIoDxe/DiskIoDxe.inf
  INF MdeModulePkg/Universal/Disk/PartitionDxe/PartitionDxe.inf
  INF FatPkg/EnhancedFatDxe/Fat.inf
  INF MdeModulePkg/Universal/Disk/UnicodeCollation/EnglishDxe/EnglishDxe.inf

  INF Binaries/platina/QcomPkg/Drivers/DALSYSDxe/DALSYSDxe.inf
  INF Binaries/platina/QcomPkg/Drivers/ClockDxe/ClockDxe.inf

  INF Binaries/platina/QcomPkg/Drivers/HWIODxe/HWIODxe.inf
  INF Binaries/platina/QcomPkg/Drivers/I2CDxe/I2CDxe.inf
  INF Binaries/platina/QcomPkg/Drivers/SPIDxe/SPIDxe.inf
  INF Binaries/platina/QcomPkg/Drivers/SPMIDxe/SPMIDxe.inf
  INF Binaries/platina/QcomPkg/Drivers/SdccDxe/SdccDxe.inf
  INF Binaries/platina/QcomPkg/Drivers/UFSDxe/UFSDxe.inf
  INF Binaries/platina/QcomPkg/Drivers/TLMMDxe/TLMMDxe.inf

!if $(USE_CUSTOM_DISPLAY_DRIVER) == 1
  INF Binaries/platina/QcomPkg/Drivers/DisplayDxe/DisplayDxe.inf
  INF QcomPkg/Drivers/DisplayReEnablerDxe/DisplayReEnablerDxe.inf
!else
  INF SiliciumPkg/Drivers/SimpleFbDxe/SimpleFbDxe.inf
!endif

  INF Binaries/platina/QcomPkg/Drivers/PlatformInfoDxe/PlatformInfoDxe.inf
  INF Binaries/platina/QcomPkg/Drivers/ButtonsDxe/ButtonsDxe.inf
  INF Binaries/platina/QcomPkg/Drivers/PmicDxe/PmicDxeLa.inf
  INF Binaries/platina/QcomPkg/Drivers/ChargerExDxe/ChargerExDxe.inf
  INF Binaries/platina/QcomPkg/Drivers/QcomChargerDxe/QcomChargerDxeLA.inf
  INF Binaries/platina/QcomPkg/Drivers/AdcDxe/AdcDxe.inf
  INF Binaries/platina/QcomPkg/Drivers/TsensDxe/TsensDxe.inf
  INF Binaries/platina/QcomPkg/Drivers/LimitsDxe/LimitsDxe.inf
  INF Binaries/platina/QcomPkg/Drivers/MpPowerDxe/MpPowerDxe.inf
  INF Binaries/platina/QcomPkg/Drivers/UsbfnDwc3Dxe/UsbfnDwc3Dxe.inf

  INF Binaries/generic/QcomPkg/Drivers/XhciPciEmulationDxe/XhciPciEmulationDxe.inf
  INF Binaries/generic/QcomPkg/Drivers/XhciDxe/XhciDxe.inf
  
  INF MdeModulePkg/Bus/Usb/UsbBusDxe/UsbBusDxe.inf
  INF MdeModulePkg/Bus/Usb/UsbKbDxe/UsbKbDxe.inf
  INF MdeModulePkg/Bus/Usb/UsbMouseAbsolutePointerDxe/UsbMouseAbsolutePointerDxe.inf
  INF MdeModulePkg/Bus/Usb/UsbMassStorageDxe/UsbMassStorageDxe.inf

  INF Binaries/platina/QcomPkg/Drivers/UsbMsdDxe/UsbMsdDxe.inf
  INF Binaries/platina/QcomPkg/Drivers/UsbDeviceDxe/UsbDeviceDxe.inf
  INF Binaries/platina/QcomPkg/Drivers/UsbConfigDxe/UsbConfigDxe.inf
  INF Binaries/platina/QcomPkg/Drivers/HashDxe/HashDxe.inf
  INF Binaries/platina/QcomPkg/Drivers/RNGDxe/RngDxe.inf

  INF MdeModulePkg/Universal/BdsDxe/BdsDxe.inf
  
  INF Binaries/platina/QcomPkg/Drivers/QdssDxe/QdssDxe.inf
