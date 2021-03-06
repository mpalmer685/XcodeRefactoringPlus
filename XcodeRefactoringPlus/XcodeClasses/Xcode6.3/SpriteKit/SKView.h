//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface SKView : NSView
{
    BOOL _allowsTransparency;
    BOOL _priorResignActivePausedState;
    unsigned long long _frameInterval;
    SKDisplayLink *_displayLink;
    NSObject<OS_dispatch_queue> *_updateQueue;
    double _timePreviousUpdate;
    SKLabelNode *_statsLabel;
    double _prevViewAspect;
    unsigned int _spritesRendered;
    unsigned int _spritesSubmitted;
    int _frames;
    unsigned int _prevSpritesRendered;
    unsigned int _prevSpritesRenderedSubmitted;
    double _timeBeginFrameCount;
    float _fps;
    NSOpenGLContext *_context;
    unsigned int _colorRenderBuffer;
    unsigned int _depthStencilRenderBuffer;
    unsigned int _frameBuffer;
    NSOpenGLContext *_layerBackedContext;
    BOOL _prefersLowPowerGPU;
    BOOL _usesAsyncUpdateQueue;
    BOOL _hasRenderedOnce;
    BOOL _hasRenderedForCurrentUpdate;
    BOOL _isInTransition;
    BOOL _disableInput;
    BOOL _mouseIsDown;
    SKNode *_nodeUnderCursor;
    float _transitionDuration;
    float _transitionTime;
    SKScene *_nextScene;
    SKScene *_scene;
    BOOL _paused;
    NSData *_spriteArrayHint;
    struct SKCRenderer *_renderer;
    NSMutableDictionary *_touchMap;
    float _prevBackingScaleFactor;
    NSObject<OS_dispatch_queue> *_renderQueue;
    BOOL showsFPS;
    BOOL showsNodeCount;
}

- (void).cxx_destruct;
- (void)setFrameSize:(struct CGSize)arg1;
@property(readonly, nonatomic) SKScene *scene;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)_setUpdateQueue:(id)arg1;
@property(nonatomic) double physicsDebugStrokeWidth;
- (id)initWithFrame:(struct CGRect)arg1 updateQueue:(id)arg2;
- (id)init;
- (id)_textureFromNode:(id)arg1 crop:(struct CGRect)arg2;
- (id)textureFromNode:(id)arg1 crop:(struct CGRect)arg2;
- (id)textureFromNode:(id)arg1;
@property(nonatomic) BOOL showsFields;
@property(nonatomic) BOOL _showsOutlineInterior;
@property(nonatomic) BOOL showsPhysics;
@property(nonatomic) BOOL showsDrawCount;
@property(nonatomic) BOOL showsQuadCount;
@property(nonatomic) BOOL showsNodeCount; // @synthesize showsNodeCount;
@property(nonatomic) BOOL showsFPS; // @synthesize showsFPS;
- (BOOL)showsSpriteBounds;
- (void)setShowsSpriteBounds:(BOOL)arg1;
@property(nonatomic) BOOL shouldCullNonVisibleNodes;
@property(readonly, nonatomic) struct CGSize pixelSize;
- (void)writeContentsToPNG:(id)arg1;
@property(nonatomic, getter=isPaused) BOOL paused;
@property(nonatomic) long long frameInterval;
- (void)viewWillMoveToSuperview:(id)arg1;
- (void)clipViewBoundsDidChange:(id)arg1;
- (void)_renderContent;
- (void)renderContent;
- (void)renderCallback:(double)arg1 shouldBlock:(BOOL)arg2;
- (void)presentScene:(id)arg1 transition:(id)arg2;
- (void)presentScene:(id)arg1;
- (void)_setupContext;
@property(retain) NSOpenGLContext *_context;
- (void)drawRect:(struct CGRect)arg1;
- (id)makeBackingLayer;
@property(retain, nonatomic) NSOpenGLContext *_layerBackedContext;
@property(nonatomic) BOOL allowsTransparency;
- (BOOL)isOpaque;
- (void)remakeFramebuffer:(double)arg1;
- (void)_initialize;
- (void)dealloc;
- (struct CGPoint)convertPoint:(struct CGPoint)arg1 fromScene:(id)arg2;
- (struct CGPoint)convertPoint:(struct CGPoint)arg1 toScene:(id)arg2;
- (BOOL)acceptsFirstResponder;
- (void)keyUp:(id)arg1;
- (void)keyDown:(id)arg1;
- (void)mouseUp:(id)arg1;
- (void)mouseDragged:(id)arg1;
- (void)mouseMoved:(id)arg1;
- (void)mouseExited:(id)arg1;
- (void)mouseEntered:(id)arg1;
- (void)mouseDown:(id)arg1;
- (void)stopRenderCallbacks;
- (void)startRenderCallbacks;
- (void)setUpRenderCallback;
- (void)bindOpenGLContext;
@property(nonatomic) BOOL _usesAsyncUpdateQueue;
@property(nonatomic) BOOL ignoresSiblingOrder;
@property(nonatomic, getter=isAsynchronous) BOOL asynchronous;
- (void)renderForTime:(double)arg1 shouldBlock:(BOOL)arg2;
@property(readonly, nonatomic) int _spriteSubmitCount;
@property(readonly, nonatomic) int _spriteRenderCount;
@property(readonly, nonatomic) double _fps;
@property(readonly, nonatomic) SKScene *_nextScene;
@property(readonly, nonatomic) SKScene *_scene;
- (void)_update:(double)arg1;
- (void)_showAllStats;
@property(nonatomic) BOOL _showsTotalAreaRendered;
@property(nonatomic) BOOL _showsCulledNodesInNodeCount;
@property(nonatomic) BOOL _showsGPUStats;
@property(nonatomic) BOOL _showsCPUStats;
@property(nonatomic) BOOL _showsCoreAnimationFPS;
@property(nonatomic) BOOL _shouldCenterStats;
@property(nonatomic) BOOL _showsSpriteBounds;
@property(nonatomic) struct CGPoint _viewTranslation;
@property(nonatomic) double _viewScale;
- (void)renderToIOSurfaceID:(unsigned int)arg1 withScaleFactor:(double)arg2;
- (void)renderToOpenGLTextureId:(unsigned int)arg1 size:(struct CGSize)arg2 scaleFactor:(double)arg3;
- (id)snapshot;

@end