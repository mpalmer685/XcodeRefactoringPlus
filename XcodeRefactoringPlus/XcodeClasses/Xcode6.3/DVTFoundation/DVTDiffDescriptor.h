//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface DVTDiffDescriptor : NSObject <NSCoding, NSCopying, DVTDiffHashing>
{
    DVTDiffContext *_diffContext;
    struct _NSRange _originalTokenRange;
    struct _NSRange _modifiedTokenRange;
    struct _NSRange _originalContentRange;
    struct _NSRange _modifiedContentRange;
    unsigned long long _originalTokenHash;
    unsigned long long _modifiedTokenHash;
    DVTDiffDescriptor *_parentDiffDescriptor;
    NSMutableArray *_childDescriptors;
    NSDictionary *_subdescriptorResults;
    int _diffDescriptorType;
    int _diffMergeDirection;
    BOOL _resolved;
    BOOL _binaryConflict;
    BOOL _diffMergeDirectionLocked;
}

+ (void)initialize;
@property BOOL diffMergeDirectionLocked; // @synthesize diffMergeDirectionLocked=_diffMergeDirectionLocked;
@property BOOL binaryConflict; // @synthesize binaryConflict=_binaryConflict;
@property BOOL resolved; // @synthesize resolved=_resolved;
@property(retain) NSDictionary *subdescriptorResults; // @synthesize subdescriptorResults=_subdescriptorResults;
@property(retain) DVTDiffDescriptor *parentDiffDescriptor; // @synthesize parentDiffDescriptor=_parentDiffDescriptor;
@property struct _NSRange modifiedContentRange; // @synthesize modifiedContentRange=_modifiedContentRange;
@property struct _NSRange originalContentRange; // @synthesize originalContentRange=_originalContentRange;
@property unsigned long long modifiedTokenHash; // @synthesize modifiedTokenHash=_modifiedTokenHash;
@property unsigned long long originalTokenHash; // @synthesize originalTokenHash=_originalTokenHash;
@property int diffDescriptorType; // @synthesize diffDescriptorType=_diffDescriptorType;
@property struct _NSRange modifiedTokenRange; // @synthesize modifiedTokenRange=_modifiedTokenRange;
@property struct _NSRange originalTokenRange; // @synthesize originalTokenRange=_originalTokenRange;
@property DVTDiffContext *diffContext; // @synthesize diffContext=_diffContext;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)arg1;
@property(readonly) BOOL isInsertionOrDeletion;
- (void)diffDescriptor:(id)arg1 willRemoveChildDiffDescriptor:(id)arg2;
- (void)diffDescriptor:(id)arg1 didAddChildDiffDescriptor:(id)arg2;
- (void)removeAllChildDiffDescriptors;
- (void)removeChildDiffDescriptorAtIndex:(long long)arg1;
- (void)removeChildDiffDescriptor:(id)arg1;
- (void)insertChildDiffDescriptor:(id)arg1 atIndex:(long long)arg2;
- (void)addChildDiffDescriptor:(id)arg1;
- (void)removeObjectFromChildDiffDescriptorsAtIndex:(long long)arg1;
- (void)insertObject:(id)arg1 inChildDiffDescriptorsAtIndex:(long long)arg2;
- (void)_diffDescriptor:(id)arg1 willRemoveChildDiffDescriptor:(id)arg2;
- (void)_diffDescriptor:(id)arg1 didAddChildDiffDescriptor:(id)arg2;
@property int diffMergeDirection; // @dynamic diffMergeDirection;
- (id)childDiffDescriptors;
- (unsigned long long)dvt_diffHashForDataSource:(id)arg1;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;
- (id)initWithDiffContext:(id)arg1;

@end