//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface XCSelection : NSResponder
{
    NSObject<XCSelectionSource> *_source;
    NSMutableArray *_delegates;
}

- (id)bundle;
- (void)doesNotRecognizeSelector:(SEL)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (void)forwardInvocation:(id)arg1;
- (BOOL)respondsToSelector:(SEL)arg1;
- (id)aggregateElements;
- (void)removeFromAggregate:(id)arg1;
- (void)addToAggregate:(id)arg1;
- (int)validateAction:(SEL)arg1;
- (int)validateItem:(id)arg1;
- (int)validateAndPerformAction:(SEL)arg1;
- (void)revalidate;
- (id)titleOfInspector;
- (id)inspectorPaneClasses;
- (id)source;
- (void)invalidate;
- (void)dealloc;
- (id)initWithSource:(id)arg1;

@end