

#include <QtGlobal>

// Automatically generated by extract_strings.py
#ifdef __GNUC__
#define UNUSED __attribute__((unused))
#else
#define UNUSED
#endif
static const char UNUSED *bitcoin_strings[] = {
QT_TRANSLATE_NOOP("aardvarkcoin-core", ""
"(1 = keep tx meta data e.g. account owner and payment request information, 2 "
"= drop tx meta data)"),
QT_TRANSLATE_NOOP("aardvarkcoin-core", ""
"-fallbackfee is set very high! This is the transaction fee you may pay when "
"fee estimates are not available."),
QT_TRANSLATE_NOOP("aardvarkcoin-core", ""
"-maxtxfee is set very high! Fees this large could be paid on a single "
"transaction."),
QT_TRANSLATE_NOOP("aardvarkcoin-core", ""
"-paytxfee is set very high! This is the transaction fee you will pay if you "
"send a transaction."),
QT_TRANSLATE_NOOP("aardvarkcoin-core", ""
"A fee rate (in %s/kB) that will be used when fee estimation has insufficient "
"data (default: %s)"),
QT_TRANSLATE_NOOP("aardvarkcoin-core", ""
"Accept relayed transactions received from whitelisted peers even when not "
"relaying transactions (default: %d)"),
QT_TRANSLATE_NOOP("aardvarkcoin-core", ""
"Allow JSON-RPC connections from specified source. Valid for <ip> are a "
"single IP (e.g. 1.2.3.4), a network/netmask (e.g. 1.2.3.4/255.255.255.0) or "
"a network/CIDR (e.g. 1.2.3.4/24). This option can be specified multiple times"),
QT_TRANSLATE_NOOP("aardvarkcoin-core", ""
"Bind to given address and always listen on it. Use [host]:port notation for "
"IPv6"),
QT_TRANSLATE_NOOP("aardvarkcoin-core", ""
"Bind to given address and whitelist peers connecting to it. Use [host]:port "
"notation for IPv6"),
QT_TRANSLATE_NOOP("aardvarkcoin-core", ""
"Bind to given address to listen for JSON-RPC connections. Use [host]:port "
"notation for IPv6. This option can be specified multiple times (default: "
"bind to all interfaces)"),
QT_TRANSLATE_NOOP("aardvarkcoin-core", ""
"Cannot obtain a lock on data directory %s. AardvarkCoin Core is probably already "
"running."),
QT_TRANSLATE_NOOP("aardvarkcoin-core", ""
"Create new files with system default permissions, instead of umask 077 (only "
"effective with disabled wallet functionality)"),
QT_TRANSLATE_NOOP("aardvarkcoin-core", ""
"Delete all wallet transactions and only recover those parts of the "
"blockchain through -rescan on startup"),
QT_TRANSLATE_NOOP("aardvarkcoin-core", ""
"Discover own IP addresses (default: 1 when listening and no -externalip or -"
"proxy)"),
QT_TRANSLATE_NOOP("aardvarkcoin-core", ""
"Distributed under the MIT software license, see the accompanying file "
"COPYING or <http://www.opensource.org/licenses/mit-license.php>."),
QT_TRANSLATE_NOOP("aardvarkcoin-core", ""
"Do not keep transactions in the mempool longer than <n> hours (default: %u)"),
QT_TRANSLATE_NOOP("aardvarkcoin-core", ""
"Error reading wallet.dat! All keys read correctly, but transaction data or "
"address book entries might be missing or incorrect."),
QT_TRANSLATE_NOOP("aardvarkcoin-core", ""
"Error: Listening for incoming connections failed (listen returned error %s)"),
QT_TRANSLATE_NOOP("aardvarkcoin-core", ""
"Execute command when a relevant alert is received or we see a really long "
"fork (%s in cmd is replaced by message)"),
QT_TRANSLATE_NOOP("aardvarkcoin-core", ""
"Execute command when a wallet transaction changes (%s in cmd is replaced by "
"TxID)"),
QT_TRANSLATE_NOOP("aardvarkcoin-core", ""
"Execute command when the best block changes (%s in cmd is replaced by block "
"hash)"),
QT_TRANSLATE_NOOP("aardvarkcoin-core", ""
"Fees (in %s/kB) smaller than this are considered zero fee for relaying, "
"mining and transaction creation (default: %s)"),
QT_TRANSLATE_NOOP("aardvarkcoin-core", ""
"Fees (in %s/kB) smaller than this are considered zero fee for transaction "
"creation (default: %s)"),
QT_TRANSLATE_NOOP("aardvarkcoin-core", ""
"Force relay of transactions from whitelisted peers even they violate local "
"relay policy (default: %d)"),
QT_TRANSLATE_NOOP("aardvarkcoin-core", ""
"How thorough the block verification of -checkblocks is (0-4, default: %u)"),
QT_TRANSLATE_NOOP("aardvarkcoin-core", ""
"If <category> is not supplied or if <category> = 1, output all debugging "
"information."),
QT_TRANSLATE_NOOP("aardvarkcoin-core", ""
"If paytxfee is not set, include enough fee so transactions begin "
"confirmation on average within n blocks (default: %u)"),
QT_TRANSLATE_NOOP("aardvarkcoin-core", ""
"Invalid amount for -maxtxfee=<amount>: '%s' (must be at least the minrelay "
"fee of %s to prevent stuck transactions)"),
QT_TRANSLATE_NOOP("aardvarkcoin-core", ""
"Maintain a full transaction index, used by the getrawtransaction rpc call "
"(default: %u)"),
QT_TRANSLATE_NOOP("aardvarkcoin-core", ""
"Maximum size of data in data carrier transactions we relay and mine "
"(default: %u)"),
QT_TRANSLATE_NOOP("aardvarkcoin-core", ""
"Maximum total fees (in %s) to use in a single wallet transaction; setting "
"this too low may abort large transactions (default: %s)"),
QT_TRANSLATE_NOOP("aardvarkcoin-core", ""
"Number of seconds to keep misbehaving peers from reconnecting (default: %u)"),
QT_TRANSLATE_NOOP("aardvarkcoin-core", ""
"Output debugging information (default: %u, supplying <category> is optional)"),
QT_TRANSLATE_NOOP("aardvarkcoin-core", ""
"Please check that your computer's date and time are correct! If your clock "
"is wrong AardvarkCoin Core will not work properly."),
QT_TRANSLATE_NOOP("aardvarkcoin-core", ""
"Prune configured below the minimum of %d MiB.  Please use a higher number."),
QT_TRANSLATE_NOOP("aardvarkcoin-core", ""
"Prune: last wallet synchronisation goes beyond pruned data. You need to -"
"reindex (download the whole blockchain again in case of pruned node)"),
QT_TRANSLATE_NOOP("aardvarkcoin-core", ""
"Query for peer addresses via DNS lookup, if low on addresses (default: 1 "
"unless -connect)"),
QT_TRANSLATE_NOOP("aardvarkcoin-core", ""
"Randomize credentials for every proxy connection. This enables Tor stream "
"isolation (default: %u)"),
QT_TRANSLATE_NOOP("aardvarkcoin-core", ""
"Reduce storage requirements by pruning (deleting) old blocks. This mode is "
"incompatible with -txindex and -rescan. Warning: Reverting this setting "
"requires re-downloading the entire blockchain. (default: 0 = disable pruning "
"blocks, >%u = target size in MiB to use for block files)"),
QT_TRANSLATE_NOOP("aardvarkcoin-core", ""
"Rescans are not possible in pruned mode. You will need to use -reindex which "
"will download the whole blockchain again."),
QT_TRANSLATE_NOOP("aardvarkcoin-core", ""
"Set maximum size of high-priority/low-fee transactions in bytes (default: %d)"),
QT_TRANSLATE_NOOP("aardvarkcoin-core", ""
"Set the number of script verification threads (%u to %d, 0 = auto, <0 = "
"leave that many cores free, default: %d)"),
QT_TRANSLATE_NOOP("aardvarkcoin-core", ""
"Set the number of threads for coin generation if enabled (-1 = all cores, "
"default: %d)"),
QT_TRANSLATE_NOOP("aardvarkcoin-core", ""
"Support filtering of blocks and transaction with bloom filters (default: %u)"),
QT_TRANSLATE_NOOP("aardvarkcoin-core", ""
"The block database contains a block which appears to be from the future. "
"This may be due to your computer's date and time being set incorrectly. Only "
"rebuild the block database if you are sure that your computer's date and "
"time are correct"),
QT_TRANSLATE_NOOP("aardvarkcoin-core", ""
"The transaction amount is too small to send after the fee has been deducted"),
QT_TRANSLATE_NOOP("aardvarkcoin-core", ""
"This is a pre-release test build - use at your own risk - do not use for "
"mining or merchant applications"),
QT_TRANSLATE_NOOP("aardvarkcoin-core", ""
"This product includes software developed by the OpenSSL Project for use in "
"the OpenSSL Toolkit <https://www.openssl.org/> and cryptographic software "
"written by Eric Young and UPnP software written by Thomas Bernard."),
QT_TRANSLATE_NOOP("aardvarkcoin-core", ""
"Total length of network version string (%i) exceeds maximum length (%i). "
"Reduce the number or size of uacomments."),
QT_TRANSLATE_NOOP("aardvarkcoin-core", ""
"Tries to keep outbound traffic under the given target (in MiB per 24h), 0 = "
"no limit (default: %d)"),
QT_TRANSLATE_NOOP("aardvarkcoin-core", ""
"Unable to bind to %s on this computer. AardvarkCoin Core is probably already "
"running."),
QT_TRANSLATE_NOOP("aardvarkcoin-core", ""
"Unsupported argument -socks found. Setting SOCKS version isn't possible "
"anymore, only SOCKS5 proxies are supported."),
QT_TRANSLATE_NOOP("aardvarkcoin-core", ""
"Unsupported argument -whitelistalwaysrelay ignored, use -whitelistrelay and/"
"or -whitelistforcerelay."),
QT_TRANSLATE_NOOP("aardvarkcoin-core", ""
"Use UPnP to map the listening port (default: 1 when listening and no -proxy)"),
QT_TRANSLATE_NOOP("aardvarkcoin-core", ""
"Use separate SOCKS5 proxy to reach peers via Tor hidden services (default: "
"%s)"),
QT_TRANSLATE_NOOP("aardvarkcoin-core", ""
"Username and hashed password for JSON-RPC connections. The field <userpw> "
"comes in the format: <USERNAME>:<SALT>$<HASH>. A canonical python script is "
"included in share/rpcuser. This option can be specified multiple times"),
QT_TRANSLATE_NOOP("aardvarkcoin-core", ""
"WARNING: abnormally high number of blocks generated, %d blocks received in "
"the last %d hours (%d expected)"),
QT_TRANSLATE_NOOP("aardvarkcoin-core", ""
"WARNING: check your network connection, %d blocks received in the last %d "
"hours (%d expected)"),
QT_TRANSLATE_NOOP("aardvarkcoin-core", ""
"Warning: The network does not appear to fully agree! Some miners appear to "
"be experiencing issues."),
QT_TRANSLATE_NOOP("aardvarkcoin-core", ""
"Warning: Unknown block versions being mined! It's possible unknown rules are "
"in effect"),
QT_TRANSLATE_NOOP("aardvarkcoin-core", ""
"Warning: We do not appear to fully agree with our peers! You may need to "
"upgrade, or other nodes may need to upgrade."),
QT_TRANSLATE_NOOP("aardvarkcoin-core", ""
"Warning: wallet.dat corrupt, data salvaged! Original wallet.dat saved as "
"wallet.{timestamp}.bak in %s; if your balance or transactions are incorrect "
"you should restore from a backup."),
QT_TRANSLATE_NOOP("aardvarkcoin-core", ""
"Whitelist peers connecting from the given netmask or IP address. Can be "
"specified multiple times."),
QT_TRANSLATE_NOOP("aardvarkcoin-core", ""
"Whitelisted peers cannot be DoS banned and their transactions are always "
"relayed, even if they are already in the mempool, useful e.g. for a gateway"),
QT_TRANSLATE_NOOP("aardvarkcoin-core", ""
"You need to rebuild the database using -reindex to go back to unpruned "
"mode.  This will redownload the entire blockchain"),
QT_TRANSLATE_NOOP("aardvarkcoin-core", "(default: %s)"),
QT_TRANSLATE_NOOP("aardvarkcoin-core", "(default: %u)"),
QT_TRANSLATE_NOOP("aardvarkcoin-core", "-maxmempool must be at least %d MB"),
QT_TRANSLATE_NOOP("aardvarkcoin-core", "<category> can be:"),
QT_TRANSLATE_NOOP("aardvarkcoin-core", "Accept command line and JSON-RPC commands"),
QT_TRANSLATE_NOOP("aardvarkcoin-core", "Accept connections from outside (default: 1 if no -proxy or -connect)"),
QT_TRANSLATE_NOOP("aardvarkcoin-core", "Accept public REST requests (default: %u)"),
QT_TRANSLATE_NOOP("aardvarkcoin-core", "Activating best chain..."),
QT_TRANSLATE_NOOP("aardvarkcoin-core", "Add a node to connect to and attempt to keep the connection open"),
QT_TRANSLATE_NOOP("aardvarkcoin-core", "Allow DNS lookups for -addnode, -seednode and -connect"),
QT_TRANSLATE_NOOP("aardvarkcoin-core", "Always query for peer addresses via DNS lookup (default: %u)"),
QT_TRANSLATE_NOOP("aardvarkcoin-core", "Append comment to the user agent string"),
QT_TRANSLATE_NOOP("aardvarkcoin-core", "Attempt to recover private keys from a corrupt wallet.dat on startup"),
QT_TRANSLATE_NOOP("aardvarkcoin-core", "Automatically create Tor hidden service (default: %d)"),
QT_TRANSLATE_NOOP("aardvarkcoin-core", "Block creation options:"),
QT_TRANSLATE_NOOP("aardvarkcoin-core", "Cannot downgrade wallet"),
QT_TRANSLATE_NOOP("aardvarkcoin-core", "Cannot resolve -bind address: '%s'"),
QT_TRANSLATE_NOOP("aardvarkcoin-core", "Cannot resolve -externalip address: '%s'"),
QT_TRANSLATE_NOOP("aardvarkcoin-core", "Cannot resolve -whitebind address: '%s'"),
QT_TRANSLATE_NOOP("aardvarkcoin-core", "Cannot write default address"),
QT_TRANSLATE_NOOP("aardvarkcoin-core", "Connect only to the specified node(s)"),
QT_TRANSLATE_NOOP("aardvarkcoin-core", "Connect through SOCKS5 proxy"),
QT_TRANSLATE_NOOP("aardvarkcoin-core", "Connect to a node to retrieve peer addresses, and disconnect"),
QT_TRANSLATE_NOOP("aardvarkcoin-core", "Connection options:"),
QT_TRANSLATE_NOOP("aardvarkcoin-core", "Copyright (C) 2009-%i The AardvarkCoin Core Developers"),
QT_TRANSLATE_NOOP("aardvarkcoin-core", "Corrupted block database detected"),
QT_TRANSLATE_NOOP("aardvarkcoin-core", "Debugging/Testing options:"),
QT_TRANSLATE_NOOP("aardvarkcoin-core", "Do not load the wallet and disable wallet RPC calls"),
QT_TRANSLATE_NOOP("aardvarkcoin-core", "Do you want to rebuild the block database now?"),
QT_TRANSLATE_NOOP("aardvarkcoin-core", "Done loading"),
QT_TRANSLATE_NOOP("aardvarkcoin-core", "Enable publish hash block in <address>"),
QT_TRANSLATE_NOOP("aardvarkcoin-core", "Enable publish hash transaction in <address>"),
QT_TRANSLATE_NOOP("aardvarkcoin-core", "Enable publish raw block in <address>"),
QT_TRANSLATE_NOOP("aardvarkcoin-core", "Enable publish raw transaction in <address>"),
QT_TRANSLATE_NOOP("aardvarkcoin-core", "Enable transaction replacement in the memory pool (default: %u)"),
QT_TRANSLATE_NOOP("aardvarkcoin-core", "Error initializing block database"),
QT_TRANSLATE_NOOP("aardvarkcoin-core", "Error initializing wallet database environment %s!"),
QT_TRANSLATE_NOOP("aardvarkcoin-core", "Error loading block database"),
QT_TRANSLATE_NOOP("aardvarkcoin-core", "Error loading wallet.dat"),
QT_TRANSLATE_NOOP("aardvarkcoin-core", "Error loading wallet.dat: Wallet corrupted"),
QT_TRANSLATE_NOOP("aardvarkcoin-core", "Error loading wallet.dat: Wallet requires newer version of AardvarkCoin Core"),
QT_TRANSLATE_NOOP("aardvarkcoin-core", "Error opening block database"),
QT_TRANSLATE_NOOP("aardvarkcoin-core", "Error reading from database, shutting down."),
QT_TRANSLATE_NOOP("aardvarkcoin-core", "Error"),
QT_TRANSLATE_NOOP("aardvarkcoin-core", "Error: A fatal internal error occurred, see debug.log for details"),
QT_TRANSLATE_NOOP("aardvarkcoin-core", "Error: Disk space is low!"),
QT_TRANSLATE_NOOP("aardvarkcoin-core", "Failed to listen on any port. Use -listen=0 if you want this."),
QT_TRANSLATE_NOOP("aardvarkcoin-core", "Fee (in %s/kB) to add to transactions you send (default: %s)"),
QT_TRANSLATE_NOOP("aardvarkcoin-core", "Generate coins (default: %u)"),
QT_TRANSLATE_NOOP("aardvarkcoin-core", "How many blocks to check at startup (default: %u, 0 = all)"),
QT_TRANSLATE_NOOP("aardvarkcoin-core", "Importing..."),
QT_TRANSLATE_NOOP("aardvarkcoin-core", "Imports blocks from external blk000??.dat file on startup"),
QT_TRANSLATE_NOOP("aardvarkcoin-core", "Include IP addresses in debug output (default: %u)"),
QT_TRANSLATE_NOOP("aardvarkcoin-core", "Incorrect or no genesis block found. Wrong datadir for network?"),
QT_TRANSLATE_NOOP("aardvarkcoin-core", "Information"),
QT_TRANSLATE_NOOP("aardvarkcoin-core", "Initialization sanity check failed. AardvarkCoin Core is shutting down."),
QT_TRANSLATE_NOOP("aardvarkcoin-core", "Insufficient funds"),
QT_TRANSLATE_NOOP("aardvarkcoin-core", "Invalid -onion address: '%s'"),
QT_TRANSLATE_NOOP("aardvarkcoin-core", "Invalid -proxy address: '%s'"),
QT_TRANSLATE_NOOP("aardvarkcoin-core", "Invalid amount for -fallbackfee=<amount>: '%s'"),
QT_TRANSLATE_NOOP("aardvarkcoin-core", "Invalid amount for -maxtxfee=<amount>: '%s'"),
QT_TRANSLATE_NOOP("aardvarkcoin-core", "Invalid amount for -minrelaytxfee=<amount>: '%s'"),
QT_TRANSLATE_NOOP("aardvarkcoin-core", "Invalid amount for -mintxfee=<amount>: '%s'"),
QT_TRANSLATE_NOOP("aardvarkcoin-core", "Invalid amount for -paytxfee=<amount>: '%s' (must be at least %s)"),
QT_TRANSLATE_NOOP("aardvarkcoin-core", "Invalid amount for -paytxfee=<amount>: '%s'"),
QT_TRANSLATE_NOOP("aardvarkcoin-core", "Invalid netmask specified in -whitelist: '%s'"),
QT_TRANSLATE_NOOP("aardvarkcoin-core", "Keep at most <n> unconnectable transactions in memory (default: %u)"),
QT_TRANSLATE_NOOP("aardvarkcoin-core", "Keep the transaction memory pool below <n> megabytes (default: %u)"),
QT_TRANSLATE_NOOP("aardvarkcoin-core", "Listen for JSON-RPC connections on <port> (default: %u or testnet: %u)"),
QT_TRANSLATE_NOOP("aardvarkcoin-core", "Listen for connections on <port> (default: %u or testnet: %u)"),
QT_TRANSLATE_NOOP("aardvarkcoin-core", "Loading addresses..."),
QT_TRANSLATE_NOOP("aardvarkcoin-core", "Loading block index..."),
QT_TRANSLATE_NOOP("aardvarkcoin-core", "Loading wallet..."),
QT_TRANSLATE_NOOP("aardvarkcoin-core", "Location of the auth cookie (default: data dir)"),
QT_TRANSLATE_NOOP("aardvarkcoin-core", "Maintain at most <n> connections to peers (default: %u)"),
QT_TRANSLATE_NOOP("aardvarkcoin-core", "Make the wallet broadcast transactions"),
QT_TRANSLATE_NOOP("aardvarkcoin-core", "Maximum per-connection receive buffer, <n>*1000 bytes (default: %u)"),
QT_TRANSLATE_NOOP("aardvarkcoin-core", "Maximum per-connection send buffer, <n>*1000 bytes (default: %u)"),
QT_TRANSLATE_NOOP("aardvarkcoin-core", "Minimum bytes per sigop in transactions we relay and mine (default: %u)"),
QT_TRANSLATE_NOOP("aardvarkcoin-core", "Need to specify a port with -whitebind: '%s'"),
QT_TRANSLATE_NOOP("aardvarkcoin-core", "Node relay options:"),
QT_TRANSLATE_NOOP("aardvarkcoin-core", "Not enough file descriptors available."),
QT_TRANSLATE_NOOP("aardvarkcoin-core", "Only connect to nodes in network <net> (ipv4, ipv6 or onion)"),
QT_TRANSLATE_NOOP("aardvarkcoin-core", "Options:"),
QT_TRANSLATE_NOOP("aardvarkcoin-core", "Password for JSON-RPC connections"),
QT_TRANSLATE_NOOP("aardvarkcoin-core", "Prepend debug output with timestamp (default: %u)"),
QT_TRANSLATE_NOOP("aardvarkcoin-core", "Print version and exit"),
QT_TRANSLATE_NOOP("aardvarkcoin-core", "Prune cannot be configured with a negative value."),
QT_TRANSLATE_NOOP("aardvarkcoin-core", "Prune mode is incompatible with -txindex."),
QT_TRANSLATE_NOOP("aardvarkcoin-core", "Pruning blockstore..."),
QT_TRANSLATE_NOOP("aardvarkcoin-core", "RPC server options:"),
QT_TRANSLATE_NOOP("aardvarkcoin-core", "Rebuild block chain index from current blk000??.dat files on startup"),
QT_TRANSLATE_NOOP("aardvarkcoin-core", "Receive and display P2P network alerts (default: %u)"),
QT_TRANSLATE_NOOP("aardvarkcoin-core", "Reducing -maxconnections from %d to %d, because of system limitations."),
QT_TRANSLATE_NOOP("aardvarkcoin-core", "Relay and mine data carrier transactions (default: %u)"),
QT_TRANSLATE_NOOP("aardvarkcoin-core", "Relay non-P2SH multisig (default: %u)"),
QT_TRANSLATE_NOOP("aardvarkcoin-core", "Rescan the block chain for missing wallet transactions on startup"),
QT_TRANSLATE_NOOP("aardvarkcoin-core", "Rescanning..."),
QT_TRANSLATE_NOOP("aardvarkcoin-core", "Run in the background as a daemon and accept commands"),
QT_TRANSLATE_NOOP("aardvarkcoin-core", "Send trace/debug info to console instead of debug.log file"),
QT_TRANSLATE_NOOP("aardvarkcoin-core", "Send transactions as zero-fee transactions if possible (default: %u)"),
QT_TRANSLATE_NOOP("aardvarkcoin-core", "Set database cache size in megabytes (%d to %d, default: %d)"),
QT_TRANSLATE_NOOP("aardvarkcoin-core", "Set key pool size to <n> (default: %u)"),
QT_TRANSLATE_NOOP("aardvarkcoin-core", "Set maximum block size in bytes (default: %d)"),
QT_TRANSLATE_NOOP("aardvarkcoin-core", "Set minimum block size in bytes (default: %u)"),
QT_TRANSLATE_NOOP("aardvarkcoin-core", "Set the number of threads to service RPC calls (default: %d)"),
QT_TRANSLATE_NOOP("aardvarkcoin-core", "Show all debugging options (usage: --help -help-debug)"),
QT_TRANSLATE_NOOP("aardvarkcoin-core", "Shrink debug.log file on client startup (default: 1 when no -debug)"),
QT_TRANSLATE_NOOP("aardvarkcoin-core", "Signing transaction failed"),
QT_TRANSLATE_NOOP("aardvarkcoin-core", "Specify configuration file (default: %s)"),
QT_TRANSLATE_NOOP("aardvarkcoin-core", "Specify connection timeout in milliseconds (minimum: 1, default: %d)"),
QT_TRANSLATE_NOOP("aardvarkcoin-core", "Specify data directory"),
QT_TRANSLATE_NOOP("aardvarkcoin-core", "Specify pid file (default: %s)"),
QT_TRANSLATE_NOOP("aardvarkcoin-core", "Specify wallet file (within data directory)"),
QT_TRANSLATE_NOOP("aardvarkcoin-core", "Specify your own public address"),
QT_TRANSLATE_NOOP("aardvarkcoin-core", "Spend unconfirmed change when sending transactions (default: %u)"),
QT_TRANSLATE_NOOP("aardvarkcoin-core", "The transaction amount is too small to pay the fee"),
QT_TRANSLATE_NOOP("aardvarkcoin-core", "This help message"),
QT_TRANSLATE_NOOP("aardvarkcoin-core", "This is experimental software."),
QT_TRANSLATE_NOOP("aardvarkcoin-core", "Threshold for disconnecting misbehaving peers (default: %u)"),
QT_TRANSLATE_NOOP("aardvarkcoin-core", "Tor control port password (default: empty)"),
QT_TRANSLATE_NOOP("aardvarkcoin-core", "Tor control port to use if onion listening enabled (default: %s)"),
QT_TRANSLATE_NOOP("aardvarkcoin-core", "Transaction amount too small"),
QT_TRANSLATE_NOOP("aardvarkcoin-core", "Transaction amounts must be positive"),
QT_TRANSLATE_NOOP("aardvarkcoin-core", "Transaction too large for fee policy"),
QT_TRANSLATE_NOOP("aardvarkcoin-core", "Transaction too large"),
QT_TRANSLATE_NOOP("aardvarkcoin-core", "Unable to bind to %s on this computer (bind returned error %s)"),
QT_TRANSLATE_NOOP("aardvarkcoin-core", "Unable to start HTTP server. See debug log for details."),
QT_TRANSLATE_NOOP("aardvarkcoin-core", "Unknown network specified in -onlynet: '%s'"),
QT_TRANSLATE_NOOP("aardvarkcoin-core", "Unsupported argument -benchmark ignored, use -debug=bench."),
QT_TRANSLATE_NOOP("aardvarkcoin-core", "Unsupported argument -debugnet ignored, use -debug=net."),
QT_TRANSLATE_NOOP("aardvarkcoin-core", "Unsupported argument -tor found, use -onion."),
QT_TRANSLATE_NOOP("aardvarkcoin-core", "Upgrade wallet to latest format on startup"),
QT_TRANSLATE_NOOP("aardvarkcoin-core", "Use UPnP to map the listening port (default: %u)"),
QT_TRANSLATE_NOOP("aardvarkcoin-core", "User Agent comment (%s) contains unsafe characters."),
QT_TRANSLATE_NOOP("aardvarkcoin-core", "Username for JSON-RPC connections"),
QT_TRANSLATE_NOOP("aardvarkcoin-core", "Verifying blocks..."),
QT_TRANSLATE_NOOP("aardvarkcoin-core", "Verifying wallet..."),
QT_TRANSLATE_NOOP("aardvarkcoin-core", "Wallet %s resides outside data directory %s"),
QT_TRANSLATE_NOOP("aardvarkcoin-core", "Wallet needed to be rewritten: restart AardvarkCoin Core to complete"),
QT_TRANSLATE_NOOP("aardvarkcoin-core", "Wallet options:"),
QT_TRANSLATE_NOOP("aardvarkcoin-core", "Warning"),
QT_TRANSLATE_NOOP("aardvarkcoin-core", "Warning: unknown new rules activated (versionbit %i)"),
QT_TRANSLATE_NOOP("aardvarkcoin-core", "Whether to operate in a blocks only mode (default: %u)"),
QT_TRANSLATE_NOOP("aardvarkcoin-core", "You need to rebuild the database using -reindex to change -txindex"),
QT_TRANSLATE_NOOP("aardvarkcoin-core", "Zapping all transactions from wallet..."),
QT_TRANSLATE_NOOP("aardvarkcoin-core", "ZeroMQ notification options:"),
QT_TRANSLATE_NOOP("aardvarkcoin-core", "wallet.dat corrupt, salvage failed"),
};
