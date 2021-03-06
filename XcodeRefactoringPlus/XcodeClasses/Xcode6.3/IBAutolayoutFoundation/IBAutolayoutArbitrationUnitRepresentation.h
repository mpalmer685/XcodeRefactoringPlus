//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface IBAutolayoutArbitrationUnitRepresentation : NSObject <NSCoding, IBBinaryArchiving>
{
    id _rootObjectRepresentation;
    NSSet *_objectRepresentations;
}

@property(readonly) NSSet *objectRepresentations; // @synthesize objectRepresentations=_objectRepresentations;
@property(readonly) id rootObjectRepresentation; // @synthesize rootObjectRepresentation=_rootObjectRepresentation;
- (void).cxx_destruct;
- (void)encodeWithBinaryArchiver:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithBinaryUnarchiver:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithObjectRepresentations:(id)arg1 rootObject:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end