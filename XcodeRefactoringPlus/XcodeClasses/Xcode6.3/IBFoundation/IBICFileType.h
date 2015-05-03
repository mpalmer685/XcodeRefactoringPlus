//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface IBICFileType : IBICMultipartImageRepSlotComponent <IBICPseudoXMLGeneration, NSCoding>
{
    BOOL _renderThumbnailWithQuickLook;
    NSArray *_extensions;
}

+ (id)fileTypeWithIdentifier:(id)arg1 title:(id)arg2 extensions:(id)arg3 displayOrder:(double)arg4 renderThumbnailWithQuickLook:(BOOL)arg5;
@property(readonly, nonatomic) BOOL renderThumbnailWithQuickLook; // @synthesize renderThumbnailWithQuickLook=_renderThumbnailWithQuickLook;
@property(readonly, nonatomic) NSArray *extensions; // @synthesize extensions=_extensions;
- (void).cxx_destruct;
- (void)ibic_appendAdditionalPseudoXMLAttrbutes:(id)arg1;
- (id)ibic_pseudoXML;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (BOOL)isValidFileExtension:(id)arg1;
- (id)initWithIdentifier:(id)arg1 title:(id)arg2 extensions:(id)arg3 displayOrder:(double)arg4 renderThumbnailWithQuickLook:(BOOL)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end