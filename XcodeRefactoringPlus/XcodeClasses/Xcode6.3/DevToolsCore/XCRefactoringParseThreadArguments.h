//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface XCRefactoringParseThreadArguments : NSObject
{
    NSString *_projectName;
    NSArray *_parserBasedAnalyzableFiles;
}

- (void)dealloc;
- (id)initWithProjectName:(id)arg1;
- (void)setParserBasedAnalyzableFiles:(id)arg1;
- (id)parserBasedAnalyzableFiles;
- (id)projectName;

@end