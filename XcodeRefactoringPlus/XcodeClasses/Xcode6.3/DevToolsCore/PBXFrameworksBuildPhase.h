//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface PBXFrameworksBuildPhase : PBXBuildPhase
{
}

+ (id)allowedFileTypes;
+ (id)defaultName;
+ (id)identifier;
- (Class)dependencyGraphSnapshotClass;
- (id)primaryAttributeForBuildFile:(id)arg1;
- (BOOL)insertBuildFiles:(id)arg1 atIndex:(unsigned long long)arg2;
- (id)_pathUsingLibraryDirectoryVariableForPath:(id)arg1;
- (id)_libraryFileExtensions;
- (id)_implicitLibrarySearchPaths;
- (id)_implicitFrameworkSearchPaths;
- (void)findFeaturesInUseAndAddToSet:(id)arg1 usingPathPrefix:(id)arg2;

@end