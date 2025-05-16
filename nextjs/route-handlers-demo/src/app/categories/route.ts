export const dynamic = 'force-static'; // This will make the route static

export async function GET() {
    const categories = [
        { id: 1, name: 'Electronics' },
        { id: 2, name: 'Books' },
        { id: 3, name: 'Clothing' },
    ];
    return Response.json(categories);
}