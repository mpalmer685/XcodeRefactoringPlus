//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface PBXSymbolsDataSource : PBXFileTableDataSource
{
    id _searchMenuTitle;
    NSDictionary *_menuFilterDictionary;
    NSMutableString *_statusString;
    struct {
        unsigned long long type;
        unsigned long long location;
        unsigned long long path;
    } _visibility;
}

- (id)convertObjectForAction:(id)arg1;
- (BOOL)validateMenuItem:(id)arg1;
- (id)_symbolFromSelection;
- (void)revealInClassBrowser:(id)arg1;
- (id)_containerSymbolPrefixedNameForSymbol:(id)arg1;
- (void)_copyDeclarationForMethodFunction:(id)arg1;
- (void)_copyInvocationForMethodFunction:(id)arg1;
- (void)_batchFindSymbolName:(id)arg1;
- (void)didBecomeSelectionContext;
- (void)initializeContextMenu:(id)arg1;
- (BOOL)_visibilityOfColumnWithId:(id)arg1;
- (void)_resetVisibility;
- (BOOL)pathVisibility;
- (BOOL)locationVisibility;
- (BOOL)typeVisibility;
- (CDUnknownFunctionPointerType)sortFunctionForColumnIdentifier:(id)arg1;
- (CDUnknownFunctionPointerType)stringFunctionForMenuTitle:(id)arg1;
- (id)status;
- (void)reevaluateSearchFilter:(int)arg1;
- (id)filter:(id)arg1 withString:(id)arg2;
- (void)setSearchMenuTitle:(id)arg1;
- (id)searchMenuTitle;
- (void)searchByCallback:(id)arg1;
- (void)setPlaceholderString:(id)arg1;
- (id)placeholderString;
- (id)searchMenu;
- (id)detailView;
- (void)disconnect;
- (id)summary;
- (void)refresh;
- (id)tableView:(id)arg1 typeSelectStringForTableColumn:(id)arg2 row:(long long)arg3;
- (BOOL)tableView:(id)arg1 writeRowsWithIndexes:(id)arg2 toPasteboard:(id)arg3;
- (id)tableView:(id)arg1 toolTipForCell:(id)arg2 rect:(struct CGRect *)arg3 tableColumn:(id)arg4 row:(long long)arg5 mouseLocation:(struct CGPoint)arg6;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forTableColumn:(id)arg3 row:(long long)arg4;
- (id)tableView:(id)arg1 objectValueForTableColumn:(id)arg2 row:(long long)arg3;
- (id)columnForIdentifier:(id)arg1;
- (id)requiredColumnIdentifiers:(id)arg1;
- (id)optionalColumnIdentifiers:(id)arg1;
- (void)configureColumnsForTable:(id)arg1;
- (void)_indexWasRemoved:(id)arg1;
- (void)_indexingDidReloadPersistentIndex:(id)arg1;
- (void)_indexingDidComplete:(id)arg1;
- (void)dealloc;
- (id)_setupMenuDictionary;
- (id)initWithOwningModule:(id)arg1 smartGroup:(id)arg2;

@end