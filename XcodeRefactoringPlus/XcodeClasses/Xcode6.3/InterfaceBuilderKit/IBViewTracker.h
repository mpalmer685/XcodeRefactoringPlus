//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface IBViewTracker : NSObject
{
    long long trackingKnob;
    IBEditor *editor;
    NSView *view;
    BOOL snaps;
    BOOL showsGuides;
    BOOL trackingIsHorzFlipped;
    BOOL trackingIsVertFlipped;
    BOOL growsFromCenter;
    BOOL tracking;
}

+ (BOOL)shouldAutoResizeSubviewsGivenEvent:(id)arg1;
+ (void)setAppliesAutoResizingRulesWhileResizing:(BOOL)arg1;
+ (BOOL)appliesAutoResizingRulesWhileResizing;
- (id)editor;
- (long long)effectiveKnob;
- (long long)initialKnob;
- (void)drawTrackingHintsInView:(id)arg1;
- (id)view;
- (void)trackWithEvent:(id)arg1;
- (struct CGRect)snapToGuidedLayoutFrame:(struct CGRect)arg1 originalLayoutFrame:(struct CGRect)arg2;
- (void)resumeAutoResizingSubviews:(id)arg1;
- (id)stopAutoResizingSubviews;
- (void)setTracking:(BOOL)arg1;
- (BOOL)isTracking;
- (void)invalidateTrackingHintRect;
- (CDStruct_6a48b817)trackingMeasurementLayoutInfo;
- (void)setGrowsFromCenter:(BOOL)arg1;
- (BOOL)growsFromCenter;
- (void)setSnapsToGuides:(BOOL)arg1;
- (BOOL)snapsToGuides;
- (void)setShowsGuides:(BOOL)arg1;
- (BOOL)showsGuides;
- (void)placeSubviewInFrame:(struct CGRect)arg1;
- (id)layoutManager;
- (id)document;
- (id)initWithView:(id)arg1 andKnob:(long long)arg2 inEditor:(id)arg3;

@end