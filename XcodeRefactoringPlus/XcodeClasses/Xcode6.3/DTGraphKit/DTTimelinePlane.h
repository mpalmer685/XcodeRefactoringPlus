//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface DTTimelinePlane : NSObject
{
    struct PlaneMetrics _planeMetrics;
    struct TimelineViewContext *_ctx;
    CALayer *_layer;
    double _height;
    CAGradientLayer *_labelLayer;
    CALayer *_iconLayer;
    CATextLayer *_displayNameLayer;
    CALayer *_bottomBorderLayer;
    NSColor *_backgroundColor;
    BOOL _selected;
    BOOL _displayBottomBorder;
    BOOL _hideLabel;
    int _serialNumber;
    NSString *_displayName;
    NSString *_displayDescription;
    unsigned long long _displayNameType;
    NSDictionary *_userInfo;
    DTTimelineGraph *_timelineGraph;
}

+ (BOOL)_baseClassCanAskForDefaultsDuringInit;
+ (id)_selectedBackGroundEndGradientColor;
+ (id)_defaultSelectedBackGroundColor;
+ (id)_backgroundEndGradientColor;
+ (id)_defaultBackgroundColor;
@property(nonatomic) BOOL hideLabel; // @synthesize hideLabel=_hideLabel;
@property(nonatomic) BOOL displayBottomBorder; // @synthesize displayBottomBorder=_displayBottomBorder;
@property(nonatomic) __weak DTTimelineGraph *timelineGraph; // @synthesize timelineGraph=_timelineGraph;
@property(nonatomic) BOOL selected; // @synthesize selected=_selected;
@property(copy, nonatomic) NSDictionary *userInfo; // @synthesize userInfo=_userInfo;
@property(nonatomic) unsigned long long displayNameType; // @synthesize displayNameType=_displayNameType;
@property(readonly, nonatomic) int serialNumber; // @synthesize serialNumber=_serialNumber;
@property(nonatomic) double height; // @synthesize height=_height;
@property(retain, nonatomic) NSString *displayDescription; // @synthesize displayDescription=_displayDescription;
@property(retain, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
- (id).cxx_construct;
- (void).cxx_destruct;
- (unordered_map_c1fbcd3c)_populatePlaneLayoutMap:(unordered_map_c1fbcd3c)arg1 offsetFromTop:(double)arg2;
- (id)_bottomBorderLayer;
- (id)_labelLayer;
- (void)_didMoveOutOfView;
- (void)_willMoveIntoView;
- (id)actionForLayer:(id)arg1 forKey:(id)arg2;
@property(retain, nonatomic) NSColor *backgroundColor;
- (id)_planeAtPoint:(struct CGPoint)arg1 currentDepth:(unsigned long long)arg2 maxDepth:(unsigned long long)arg3;
@property(readonly, nonatomic) CALayer *layer;
- (id)description;
@property(retain, nonatomic) NSImage *icon;
- (id)init;
- (void)_removeFromContext;
- (id)_decoratedPlanes;
- (void)_contextChanged;
- (void)_setContext:(struct TimelineViewContext *)arg1 layer:(id)arg2 anchorPoint:(struct CGPoint)arg3;
- (void)_invalidateTimeRange:(struct XRTimeRange)arg1;
- (void)_setPosition:(struct CGPoint)arg1 size:(struct CGSize)arg2;
- (void)_layoutLabelLayerAtPlanePosition:(struct CGPoint)arg1 planeSize:(struct CGSize)arg2;

@end