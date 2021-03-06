//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface IDESourceCodePlaygroundSectionAnnotationViewController : DVTViewController <NSPopoverDelegate>
{
    IDESourceCodePlaygroundSection *_playgroundSection;
    BOOL _valueHistoryConnected;
    IDEPlaygroundQuickLookPopover *_quickLookPopover;
    NSLayoutConstraint *_quickLookViewRightEdgeConstraint;
    IDEToyHostingViewController *_associatedInlineToyHostingViewController;
    IDEToyHostingViewController *_associatedQuickLookToyHostingViewController;
    BOOL _mouseIsOverView;
    BOOL _toyboxIsHighlightingToy;
    id <NSObject> _sourceTextSettingsChangedObserver;
    NSFont *_fontWhenViewUninstalled;
    DVTObservingToken *_accessoryAnnotationCollapsedObservingToken;
    DVTObservingToken *_associatedInlineValueHistoryToyIsValidObservingToken;
    DVTNotificationToken *_playgroundDidSelectToyNotificationToken;
    DVTNotificationToken *_playgroundDidHighlightToyNotificationToken;
    BOOL _toyIsSelected;
    BOOL _associatedSourceCodeIsSelected;
    IDESourceCodePlaygroundSectionAccessoryViewAnnotation *_accessoryViewAnnotation;
    CDUnknownBlockType _valueHistoryClickHandler;
    CDUnknownBlockType _quickLookClickHandler;
    IDEPlaygroundQuickLookController *_quickLookController;
    IDELoggerDrivenValueHistoryToy *_associatedInlineValueHistoryToy;
    IDELoggerDrivenValueHistoryToy *_associatedQuickLookValueHistoryToy;
    long long _currentDisplayState;
    NSView *_quickLookView;
    NSButton *_quickLookButton;
    DVTRolloverImageButton *_valueHistoryButton;
    _IDESourceCodePlaygroundSectionAnnotationView *_containerView;
}

@property(retain) _IDESourceCodePlaygroundSectionAnnotationView *containerView; // @synthesize containerView=_containerView;
@property(readonly) DVTRolloverImageButton *valueHistoryButton; // @synthesize valueHistoryButton=_valueHistoryButton;
@property(readonly) NSButton *quickLookButton; // @synthesize quickLookButton=_quickLookButton;
@property(readonly) NSView *quickLookView; // @synthesize quickLookView=_quickLookView;
@property(readonly) long long currentDisplayState; // @synthesize currentDisplayState=_currentDisplayState;
@property(nonatomic) BOOL associatedSourceCodeIsSelected; // @synthesize associatedSourceCodeIsSelected=_associatedSourceCodeIsSelected;
@property(nonatomic) BOOL toyIsSelected; // @synthesize toyIsSelected=_toyIsSelected;
@property(retain) IDEToyHostingViewController *associatedInlineToyHostingViewController; // @synthesize associatedInlineToyHostingViewController=_associatedInlineToyHostingViewController;
@property(retain, nonatomic) IDELoggerDrivenValueHistoryToy *associatedQuickLookValueHistoryToy; // @synthesize associatedQuickLookValueHistoryToy=_associatedQuickLookValueHistoryToy;
@property(retain, nonatomic) IDELoggerDrivenValueHistoryToy *associatedInlineValueHistoryToy; // @synthesize associatedInlineValueHistoryToy=_associatedInlineValueHistoryToy;
@property(retain, nonatomic) IDEPlaygroundQuickLookController *quickLookController; // @synthesize quickLookController=_quickLookController;
@property(copy) CDUnknownBlockType quickLookClickHandler; // @synthesize quickLookClickHandler=_quickLookClickHandler;
@property(copy) CDUnknownBlockType valueHistoryClickHandler; // @synthesize valueHistoryClickHandler=_valueHistoryClickHandler;
@property(retain) IDESourceCodePlaygroundSection *playgroundSection; // @synthesize playgroundSection=_playgroundSection;
@property(retain) IDESourceCodePlaygroundSectionAccessoryViewAnnotation *accessoryViewAnnotation; // @synthesize accessoryViewAnnotation=_accessoryViewAnnotation;
- (void).cxx_destruct;
- (void)popoverDidClose:(id)arg1;
- (BOOL)popoverShouldClose:(id)arg1;
- (void)popoverDidShow:(id)arg1;
- (id)_quickLookImage;
- (void)_updateButtonVisibility;
- (void)scrollWheel:(id)arg1;
- (void)mouseExited:(id)arg1;
- (void)mouseEntered:(id)arg1;
- (void)_updateCurrentDisplayState;
- (void)_updateShowHideInLineResultsButtonRolloverImage;
- (void)_updateDisconnectedValueHistoryButtonUpdateVisibility:(BOOL)arg1;
- (void)_updateConnectedValueHistoryButtonUpdateVisibility:(BOOL)arg1;
- (id)_disconnectedValueHistoryButtonImage;
- (void)_quickLookButtonAction:(id)arg1;
- (void)_valueHistoryButtonAction:(id)arg1;
@property BOOL showsInLineResult;
@property(readonly) IDEToyHostingViewController *associatedQuickLookToyHostingViewController;
- (BOOL)_supportsValueHistory;
- (BOOL)_supportsQuickLookButton;
- (void)_deregisterSelectionNotifications;
- (void)_registerSelectionNotifications;
- (void)viewWillUninstall;
- (void)viewDidInstall;
- (void)_rebuildUI;
- (void)primitiveInvalidate;
- (void)loadView;
- (void)_uninstallQuickLookView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end