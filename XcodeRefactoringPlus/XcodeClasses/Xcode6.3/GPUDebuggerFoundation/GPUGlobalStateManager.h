//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface GPUGlobalStateManager : NSObject
{
    BOOL _showGroupDisplayableCallCount;
    GPUTraceEditor *_installedTraceEditor;
    NSMutableArray *_installedTraceResourcesEditors;
}

+ (id)sharedGlobalStateManager;
@property(retain, nonatomic) NSMutableArray *installedTraceResourcesEditors; // @synthesize installedTraceResourcesEditors=_installedTraceResourcesEditors;
@property(retain, nonatomic) GPUTraceEditor *installedTraceEditor; // @synthesize installedTraceEditor=_installedTraceEditor;
@property(readonly, nonatomic) BOOL showGroupDisplayableCallCount; // @synthesize showGroupDisplayableCallCount=_showGroupDisplayableCallCount;
- (void).cxx_destruct;
@property(nonatomic) int issueFilterLevel;
@property(nonatomic) BOOL programMetricsAsPercentage;
- (BOOL)showGroupDrawCallCount;
@property(nonatomic) BOOL hideShaderProfilingInFrameNavigator;
@property(nonatomic) BOOL hideGroupMarkerCalls;
@property(nonatomic) BOOL hideEmptyMarkerGroups;
@property(nonatomic) BOOL compactTextMode;
- (id)_init;
- (id)init;

@end