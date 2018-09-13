#define FAKE(x) void* x() { __debugbreak(); return #x; }
FAKE(FltAcknowledgeEcp_FAKE)
FAKE(FltAcquirePushLockExclusive_FAKE)
FAKE(FltAcquirePushLockExclusiveEx_FAKE)
FAKE(FltAcquirePushLockShared_FAKE)
FAKE(FltAcquirePushLockSharedEx_FAKE)
FAKE(FltAcquireResourceExclusive_FAKE)
FAKE(FltAcquireResourceShared_FAKE)
FAKE(FltAdjustDeviceStackSizeForIoRedirection_FAKE)
FAKE(FltAllocateCallbackData_FAKE)
FAKE(FltAllocateCallbackDataEx_FAKE)
FAKE(FltAllocateContext_FAKE)
FAKE(FltAllocateDeferredIoWorkItem_FAKE)
FAKE(FltAllocateExtraCreateParameter_FAKE)
FAKE(FltAllocateExtraCreateParameterFromLookasideList_FAKE)
FAKE(FltAllocateExtraCreateParameterList_FAKE)
FAKE(FltAllocateFileLock_FAKE)
FAKE(FltAllocateGenericWorkItem_FAKE)
FAKE(FltAllocatePoolAlignedWithTag_FAKE)
FAKE(FltApplyPriorityInfoThread_FAKE)
FAKE(FltAttachVolume_FAKE)
FAKE(FltAttachVolumeAtAltitude_FAKE)
FAKE(FltBuildDefaultSecurityDescriptor_FAKE)
FAKE(FltCancelFileOpen_FAKE)
FAKE(FltCancelIo_FAKE)
FAKE(FltCancellableWaitForMultipleObjects_FAKE)
FAKE(FltCancellableWaitForSingleObject_FAKE)
FAKE(FltCbdqDisable_FAKE)
FAKE(FltCbdqEnable_FAKE)
FAKE(FltCbdqInitialize_FAKE)
FAKE(FltCbdqInsertIo_FAKE)
FAKE(FltCbdqRemoveIo_FAKE)
FAKE(FltCbdqRemoveNextIo_FAKE)
FAKE(FltCheckAndGrowNameControl_FAKE)
FAKE(FltCheckLockForReadAccess_FAKE)
FAKE(FltCheckLockForWriteAccess_FAKE)
FAKE(FltCheckOplock_FAKE)
FAKE(FltCheckOplockEx_FAKE)
FAKE(FltClearCallbackDataDirty_FAKE)
FAKE(FltClearCancelCompletion_FAKE)
FAKE(FltClose_FAKE)
FAKE(FltCloseClientPort_FAKE)
FAKE(FltCloseCommunicationPort_FAKE)
FAKE(FltCloseSectionForDataScan_FAKE)
FAKE(FltCommitComplete_FAKE)
FAKE(FltCommitFinalizeComplete_FAKE)
FAKE(FltCompareInstanceAltitudes_FAKE)
FAKE(FltCompletePendedPostOperation_FAKE)
FAKE(FltCompletePendedPreOperation_FAKE)
FAKE(FltCreateCommunicationPort_FAKE)
FAKE(FltCreateFile_FAKE)
FAKE(FltCreateFileEx_FAKE)
FAKE(FltCreateFileEx2_FAKE)
FAKE(FltCreateMailslotFile_FAKE)
FAKE(FltCreateNamedPipeFile_FAKE)
FAKE(FltCreateSectionForDataScan_FAKE)
FAKE(FltCreateSystemVolumeInformationFolder_FAKE)
FAKE(FltCurrentBatchOplock_FAKE)
FAKE(FltCurrentOplock_FAKE)
FAKE(FltCurrentOplockH_FAKE)
FAKE(FltDecodeParameters_FAKE)
FAKE(FltDeleteContext_FAKE)
FAKE(FltDeleteExtraCreateParameterLookasideList_FAKE)
FAKE(FltDeleteFileContext_FAKE)
FAKE(FltDeleteInstanceContext_FAKE)
FAKE(FltDeletePushLock_FAKE)
FAKE(FltDeleteStreamContext_FAKE)
FAKE(FltDeleteStreamHandleContext_FAKE)
FAKE(FltDeleteTransactionContext_FAKE)
FAKE(FltDeleteVolumeContext_FAKE)
FAKE(FltDetachVolume_FAKE)
FAKE(FltDeviceIoControlFile_FAKE)
FAKE(FltDoCompletionProcessingWhenSafe_FAKE)
FAKE(FltEnlistInTransaction_FAKE)
FAKE(FltEnumerateFilterInformation_FAKE)
FAKE(FltEnumerateFilters_FAKE)
FAKE(FltEnumerateInstanceInformationByDeviceObject_FAKE)
FAKE(FltEnumerateInstanceInformationByFilter_FAKE)
FAKE(FltEnumerateInstanceInformationByVolume_FAKE)
FAKE(FltEnumerateInstanceInformationByVolumeName_FAKE)
FAKE(FltEnumerateInstances_FAKE)
FAKE(FltEnumerateVolumeInformation_FAKE)
FAKE(FltEnumerateVolumes_FAKE)
FAKE(FltFastIoMdlRead_FAKE)
FAKE(FltFastIoMdlReadComplete_FAKE)
FAKE(FltFastIoMdlWriteComplete_FAKE)
FAKE(FltFastIoPrepareMdlWrite_FAKE)
FAKE(FltFindExtraCreateParameter_FAKE)
FAKE(FltFlushBuffers_FAKE)
FAKE(FltFreeCallbackData_FAKE)
FAKE(FltFreeDeferredIoWorkItem_FAKE)
FAKE(FltFreeExtraCreateParameter_FAKE)
FAKE(FltFreeExtraCreateParameterList_FAKE)
FAKE(FltFreeFileLock_FAKE)
FAKE(FltFreeGenericWorkItem_FAKE)
FAKE(FltFreePoolAlignedWithTag_FAKE)
FAKE(FltFreeSecurityDescriptor_FAKE)
FAKE(FltFsControlFile_FAKE)
FAKE(FltGetActivityIdCallbackData_FAKE)
FAKE(FltGetBottomInstance_FAKE)
FAKE(FltGetContexts_FAKE)
FAKE(FltGetContextsEx_FAKE)
FAKE(FltGetDestinationFileNameInformation_FAKE)
FAKE(FltGetDeviceObject_FAKE)
FAKE(FltGetDiskDeviceObject_FAKE)
FAKE(FltGetEcpListFromCallbackData_FAKE)
FAKE(FltGetFileContext_FAKE)
FAKE(FltGetFileNameInformation_FAKE)
FAKE(FltGetFileNameInformationUnsafe_FAKE)
FAKE(FltGetFileSystemType_FAKE)
FAKE(FltGetFilterFromInstance_FAKE)
FAKE(FltGetFilterFromName_FAKE)
FAKE(FltGetFilterInformation_FAKE)
FAKE(FltGetInstanceContext_FAKE)
FAKE(FltGetInstanceInformation_FAKE)
FAKE(FltGetIoPriorityHint_FAKE)
FAKE(FltGetIoPriorityHintFromCallbackData_FAKE)
FAKE(FltGetIoPriorityHintFromFileObject_FAKE)
FAKE(FltGetIoPriorityHintFromThread_FAKE)
FAKE(FltGetIrpName_FAKE)
FAKE(FltGetLowerInstance_FAKE)
FAKE(FltGetNewSystemBufferAddress_FAKE)
FAKE(FltGetNextExtraCreateParameter_FAKE)
FAKE(FltGetRequestorProcess_FAKE)
FAKE(FltGetRequestorProcessId_FAKE)
FAKE(FltGetRequestorProcessIdEx_FAKE)
FAKE(FltGetRequestorSessionId_FAKE)
FAKE(FltGetRoutineAddress_FAKE)
FAKE(FltGetSectionContext_FAKE)
FAKE(FltGetStreamContext_FAKE)
FAKE(FltGetStreamHandleContext_FAKE)
FAKE(FltGetSwappedBufferMdlAddress_FAKE)
FAKE(FltGetTopInstance_FAKE)
FAKE(FltGetTransactionContext_FAKE)
FAKE(FltGetTunneledName_FAKE)
FAKE(FltGetUpperInstance_FAKE)
FAKE(FltGetVolumeContext_FAKE)
FAKE(FltGetVolumeFromDeviceObject_FAKE)
FAKE(FltGetVolumeFromFileObject_FAKE)
FAKE(FltGetVolumeFromInstance_FAKE)
FAKE(FltGetVolumeFromName_FAKE)
FAKE(FltGetVolumeGuidName_FAKE)
FAKE(FltGetVolumeInformation_FAKE)
FAKE(FltGetVolumeInstanceFromName_FAKE)
FAKE(FltGetVolumeName_FAKE)
FAKE(FltGetVolumeProperties_FAKE)
FAKE(FltInitExtraCreateParameterLookasideList_FAKE)
FAKE(FltInitializeFileLock_FAKE)
FAKE(FltInitializeOplock_FAKE)
FAKE(FltInitializePushLock_FAKE)
FAKE(FltInsertExtraCreateParameter_FAKE)
FAKE(FltIs32bitProcess_FAKE)
FAKE(FltIsCallbackDataDirty_FAKE)
FAKE(FltIsDirectory_FAKE)
FAKE(FltIsEcpAcknowledged_FAKE)
FAKE(FltIsEcpFromUserMode_FAKE)
FAKE(FltIsFltMgrVolumeDeviceObject_FAKE)
FAKE(FltIsIoCanceled_FAKE)
FAKE(FltIsIoRedirectionAllowed_FAKE)
FAKE(FltIsIoRedirectionAllowedForOperation_FAKE)
FAKE(FltIsOperationSynchronous_FAKE)
FAKE(FltIsVolumeSnapshot_FAKE)
FAKE(FltIsVolumeWritable_FAKE)
FAKE(FltLoadFilter_FAKE)
FAKE(FltLockUserBuffer_FAKE)
FAKE(FltNotifyFilterChangeDirectory_FAKE)
FAKE(FltObjectDereference_FAKE)
FAKE(FltObjectReference_FAKE)
FAKE(FltOpenVolume_FAKE)
FAKE(FltOplockBreakH_FAKE)
FAKE(FltOplockBreakToNone_FAKE)
FAKE(FltOplockBreakToNoneEx_FAKE)
FAKE(FltOplockFsctrl_FAKE)
FAKE(FltOplockFsctrlEx_FAKE)
FAKE(FltOplockIsFastIoPossible_FAKE)
FAKE(FltOplockIsSharedRequest_FAKE)
FAKE(FltOplockKeysEqual_FAKE)
FAKE(FltParseFileName_FAKE)
FAKE(FltParseFileNameInformation_FAKE)
FAKE(FltPerformAsynchronousIo_FAKE)
FAKE(FltPerformSynchronousIo_FAKE)
FAKE(FltPrePrepareComplete_FAKE)
FAKE(FltPrepareComplete_FAKE)
FAKE(FltPrepareToReuseEcp_FAKE)
FAKE(FltProcessFileLock_FAKE)
FAKE(FltPropagateActivityIdToThread_FAKE)
FAKE(FltPurgeFileNameInformationCache_FAKE)
FAKE(FltQueryDirectoryFile_FAKE)
FAKE(FltQueryEaFile_FAKE)
FAKE(FltQueryInformationFile_FAKE)
FAKE(FltQueryQuotaInformationFile_FAKE)
FAKE(FltQuerySecurityObject_FAKE)
FAKE(FltQueryVolumeInformation_FAKE)
FAKE(FltQueryVolumeInformationFile_FAKE)
FAKE(FltQueueDeferredIoWorkItem_FAKE)
FAKE(FltQueueGenericWorkItem_FAKE)
FAKE(FltReadFile_FAKE)
FAKE(FltReadFileEx_FAKE)
FAKE(FltReferenceContext_FAKE)
FAKE(FltReferenceFileNameInformation_FAKE)
FAKE(FltRegisterFilter_FAKE)
FAKE(FltRegisterForDataScan_FAKE)
FAKE(FltReissueSynchronousIo_FAKE)
FAKE(FltReleaseContext_FAKE)
FAKE(FltReleaseContexts_FAKE)
FAKE(FltReleaseContextsEx_FAKE)
FAKE(FltReleaseFileNameInformation_FAKE)
FAKE(FltReleasePushLock_FAKE)
FAKE(FltReleasePushLockEx_FAKE)
FAKE(FltReleaseResource_FAKE)
FAKE(FltRemoveExtraCreateParameter_FAKE)
FAKE(FltRequestOperationStatusCallback_FAKE)
FAKE(FltRetainSwappedBufferMdlAddress_FAKE)
FAKE(FltRetrieveIoPriorityInfo_FAKE)
FAKE(FltReuseCallbackData_FAKE)
FAKE(FltRollbackComplete_FAKE)
FAKE(FltRollbackEnlistment_FAKE)
FAKE(FltSendMessage_FAKE)
FAKE(FltSetActivityIdCallbackData_FAKE)
FAKE(FltSetCallbackDataDirty_FAKE)
FAKE(FltSetCancelCompletion_FAKE)
FAKE(FltSetEaFile_FAKE)
FAKE(FltSetEcpListIntoCallbackData_FAKE)
FAKE(FltSetFileContext_FAKE)
FAKE(FltSetInformationFile_FAKE)
FAKE(FltSetInstanceContext_FAKE)
FAKE(FltSetIoPriorityHintIntoCallbackData_FAKE)
FAKE(FltSetIoPriorityHintIntoFileObject_FAKE)
FAKE(FltSetIoPriorityHintIntoThread_FAKE)
FAKE(FltSetQuotaInformationFile_FAKE)
FAKE(FltSetSecurityObject_FAKE)
FAKE(FltSetStreamContext_FAKE)
FAKE(FltSetStreamHandleContext_FAKE)
FAKE(FltSetTransactionContext_FAKE)
FAKE(FltSetVolumeContext_FAKE)
FAKE(FltSetVolumeInformation_FAKE)
FAKE(FltStartFiltering_FAKE)
FAKE(FltSupportsFileContexts_FAKE)
FAKE(FltSupportsFileContextsEx_FAKE)
FAKE(FltSupportsStreamContexts_FAKE)
FAKE(FltSupportsStreamHandleContexts_FAKE)
FAKE(FltTagFile_FAKE)
FAKE(FltUninitializeFileLock_FAKE)
FAKE(FltUninitializeOplock_FAKE)
FAKE(FltUnloadFilter_FAKE)
FAKE(FltUnregisterFilter_FAKE)
FAKE(FltUntagFile_FAKE)
FAKE(FltWriteFile_FAKE)
FAKE(FltWriteFileEx_FAKE)
FAKE(FltpTraceRedirectedFileIo_FAKE)
