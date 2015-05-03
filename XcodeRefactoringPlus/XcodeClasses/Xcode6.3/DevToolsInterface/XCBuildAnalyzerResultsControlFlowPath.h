//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface XCBuildAnalyzerResultsControlFlowPath : NSObject
{
    XCBuildLogAnalyzerControlFlowStepEdge *_edge;
    XCBuildAnalyzerResultsNavigator *_navigator;
    XCTextView *_textView;
    struct CGSize _cachedCharacterSize;
    NSBezierPath *_cachedBezierPath;
}

@property(readonly, nonatomic) XCTextView *textView; // @synthesize textView=_textView;
@property(readonly, nonatomic) XCBuildAnalyzerResultsNavigator *navigator; // @synthesize navigator=_navigator;
@property(readonly, nonatomic) XCBuildLogAnalyzerControlFlowStepEdge *edge; // @synthesize edge=_edge;
- (void)drawInRect:(struct CGRect)arg1 highlight:(BOOL)arg2;
@property(readonly, nonatomic) NSArray *outgoingControlFlowPathsFromEndRange;
@property(readonly, nonatomic) NSArray *outgoingControlFlowPathsFromStartRange;
@property(readonly, nonatomic) NSArray *incommingControlFlowPathsToEndRange;
@property(readonly, nonatomic) NSArray *incommingControlFlowPathsToStartRange;
@property(readonly, nonatomic) unsigned long long type;
@property(readonly, nonatomic) struct CGRect endRect;
@property(readonly, nonatomic) struct CGRect startRect;
@property(readonly, nonatomic) struct _NSRange endRange;
@property(readonly, nonatomic) struct _NSRange startRange;
- (void)dealloc;
- (id)initWithEdge:(id)arg1 navigator:(id)arg2;

@end