//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface Xcode3LocalizedSourceStringsAdaptorTableWorkContext : IDELocalizationWorkContext <IDELocalizationWorkReadStrings>
{
    DVTFilePath *IDELocalizationWork_path;
    NSDictionary *IDELocalizationWork_strings;
    NSDictionary *IDELocalizationWork_comments;
    NSString *_tableName;
}

@property(retain) NSString *tableName; // @synthesize tableName=_tableName;
@property(retain) NSDictionary *IDELocalizationWork_comments; // @synthesize IDELocalizationWork_comments;
@property(retain) NSDictionary *IDELocalizationWork_strings; // @synthesize IDELocalizationWork_strings;
@property(retain) DVTFilePath *IDELocalizationWork_path; // @synthesize IDELocalizationWork_path;
- (void).cxx_destruct;
- (void)primitiveInvalidate;

@end