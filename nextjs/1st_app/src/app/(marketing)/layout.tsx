// app/layout.tsx
export const metadata = {
    title: 'My App',
    description: 'Description here',
  };
  
  export default function MarketingLayout({
    children,
  }: {
    children: React.ReactNode;
  }) {
    return (
      <html lang="vi">
        <body>
            <header
                style={{
                    backgroundColor: 'blue',
                    padding: '10px',
                    color: 'white',
                }}>
            <p>Header</p>

            </header>
            {children}
            <footer
                style={{
                    backgroundColor: 'red',
                    padding: '10px',
                    color: 'white',
                }}>
            <p>Footer</p>    
            </footer>
        </body>
      </html>
    );
  }
  