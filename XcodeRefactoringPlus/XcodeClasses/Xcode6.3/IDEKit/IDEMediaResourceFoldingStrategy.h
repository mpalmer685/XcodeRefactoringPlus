//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface IDEMediaResourceFoldingStrategy : NSObject
{
}

+ (id)emptyVariant;
+ (id)sharedInstance;
- (id)defaultVariantForMatching;
- (id)descriptionForVariant:(id)arg1;
- (id)variantDescriptionForResource:(id)arg1;
- (id)titleForVariant:(id)arg1;
- (id)variantTitleForResource:(id)arg1;
- (id)firstResourceMatchingVariant:(id)arg1 fromVariantSet:(id)arg2;
- (BOOL)namesForFilesOfTypeIncludeFileExtensions:(id)arg1;
- (id)mostToLeastSpecificVariablesForMediaType:(id)arg1;
- (id)variablesInParsingOrderForMediaType:(id)arg1;
- (id)init;

@end