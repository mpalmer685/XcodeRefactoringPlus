//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface Xcode3TargetLinkedFrameworksCoordinator : Xcode3TargetCoordinator
{
    IDENavigableItemCoordinator *_navigableItemCoordinator;
}

- (void).cxx_destruct;
- (BOOL)insertItemsIntoGroup:(id)arg1 atRow:(unsigned long long)arg2 structureEditingTarget:(id)arg3 contextConfigurationBlock:(CDUnknownBlockType)arg4;
- (BOOL)hasLinkedFrameworkWithName:(id)arg1;
- (void)unlinkFrameworkWithName:(id)arg1;
- (BOOL)linkFrameworkWithName:(id)arg1 error:(id *)arg2;
- (id)projectRootGroup;
@property(readonly) Xcode3BuildPhase *buildPhase;
- (void)primitiveInvalidate;
- (id)initWithTarget:(id)arg1;

@end